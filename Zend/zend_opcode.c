/*
   +----------------------------------------------------------------------+
   | Zend Engine                                                          |
   +----------------------------------------------------------------------+
   | Copyright (c) 1998-2008 Zend Technologies Ltd. (http://www.zend.com) |
   +----------------------------------------------------------------------+
   | This source file is subject to version 2.00 of the Zend license,     |
   | that is bundled with this package in the file LICENSE, and is        | 
   | available through the world-wide-web at the following url:           |
   | http://www.zend.com/license/2_00.txt.                                |
   | If you did not receive a copy of the Zend license and are unable to  |
   | obtain it through the world-wide-web, please send a note to          |
   | license@zend.com so we can mail you a copy immediately.              |
   +----------------------------------------------------------------------+
   | Authors: Andi Gutmans <andi@zend.com>                                |
   |          Zeev Suraski <zeev@zend.com>                                |
   +----------------------------------------------------------------------+
*/

/* $Id: zend_opcode.c,v 1.110.2.6.2.5 2007/12/31 07:20:03 sebastian Exp $ */

#include <stdio.h>

#include "zend.h"
#include "zend_alloc.h"
#include "zend_compile.h"
#include "zend_extensions.h"
#include "zend_API.h"

#include "zend_vm.h"

static void zend_extension_op_array_ctor_handler(zend_extension *extension, zend_op_array *op_array TSRMLS_DC)
{
	if (extension->op_array_ctor) {
		extension->op_array_ctor(op_array);
	}
}

static void zend_extension_op_array_dtor_handler(zend_extension *extension, zend_op_array *op_array TSRMLS_DC)
{
	if (extension->op_array_dtor) {
		extension->op_array_dtor(op_array);
	}
}

static void op_array_alloc_ops(zend_op_array *op_array)
{
	op_array->opcodes = erealloc(op_array->opcodes, (op_array->size)*sizeof(zend_op));
}

void init_op_array(zend_op_array *op_array, zend_uchar type, int initial_ops_size TSRMLS_DC)
{
	op_array->type = type;

	op_array->backpatch_count = 0;
	if (CG(interactive)) {
		/* We must avoid a realloc() on the op_array in interactive mode, since pointers to constants
		 * will become invalid
		 */
		initial_ops_size = 8192;
	}

	op_array->refcount = (zend_uint *) emalloc(sizeof(zend_uint));
	*op_array->refcount = 1;
	op_array->size = initial_ops_size;
	op_array->last = 0;
	op_array->opcodes = NULL;
	op_array_alloc_ops(op_array);

	op_array->size_var = 0; /* FIXME:??? */
	op_array->last_var = 0;
	op_array->vars = NULL;

	op_array->T = 0;

	op_array->function_name = NULL;
	op_array->filename = zend_get_compiled_filename(TSRMLS_C);
	op_array->doc_comment = NULL;
	op_array->doc_comment_len = 0;

	op_array->arg_info = NULL;
	op_array->num_args = 0;
	op_array->required_num_args = 0;

	op_array->scope = NULL;

	op_array->brk_cont_array = NULL;
	op_array->try_catch_array = NULL;
	op_array->last_brk_cont = 0;
	op_array->current_brk_cont = -1;

	op_array->static_variables = NULL;
	op_array->last_try_catch = 0;

	op_array->return_reference = 0;
	op_array->done_pass_two = 0;

	op_array->uses_this = 0;

	op_array->start_op = NULL;

	op_array->fn_flags = CG(interactive)?ZEND_ACC_INTERACTIVE:0;

	memset(op_array->reserved, 0, ZEND_MAX_RESERVED_RESOURCES * sizeof(void*));

	zend_llist_apply_with_argument(&zend_extensions, (llist_apply_with_arg_func_t) zend_extension_op_array_ctor_handler, op_array TSRMLS_CC);
}

ZEND_API void destroy_zend_function(zend_function *function TSRMLS_DC)
{
	switch (function->type) {
		case ZEND_USER_FUNCTION:
			destroy_op_array((zend_op_array *) function TSRMLS_CC);
			break;
		case ZEND_INTERNAL_FUNCTION:
			/* do nothing */
			break;
	}
}

ZEND_API void zend_function_dtor(zend_function *function)
{
	TSRMLS_FETCH();

	destroy_zend_function(function TSRMLS_CC);
}

static void zend_cleanup_op_array_data(zend_op_array *op_array)
{
	if (op_array->static_variables) {
		zend_hash_clean(op_array->static_variables);
	}
}

ZEND_API int zend_cleanup_function_data(zend_function *function TSRMLS_DC)
{
	if (function->type == ZEND_USER_FUNCTION) {
		zend_cleanup_op_array_data((zend_op_array *) function);
		return ZEND_HASH_APPLY_KEEP;
	} else {
		return ZEND_HASH_APPLY_STOP;
	}
}

ZEND_API int zend_cleanup_function_data_full(zend_function *function TSRMLS_DC)
{
	if (function->type == ZEND_USER_FUNCTION) {
		zend_cleanup_op_array_data((zend_op_array *) function);
	}
	return 0;
}

ZEND_API int zend_cleanup_class_data(zend_class_entry **pce TSRMLS_DC)
{
	if ((*pce)->type == ZEND_USER_CLASS) {
		/* Clean all parts that can contain run-time data */
		/* Note that only run-time accessed data need to be cleaned up, pre-defined data can
		   not contain objects and thus are not probelmatic */
		zend_hash_apply(&(*pce)->function_table, (apply_func_t) zend_cleanup_function_data_full TSRMLS_CC);
		(*pce)->static_members = NULL;
	} else if (CE_STATIC_MEMBERS(*pce)) {
		zend_hash_destroy(CE_STATIC_MEMBERS(*pce));
		FREE_HASHTABLE(CE_STATIC_MEMBERS(*pce));
#ifdef ZTS
		CG(static_members)[(zend_intptr_t)((*pce)->static_members)] = NULL;
#else
		(*pce)->static_members = NULL;
#endif
	}
	return 0;
}

ZEND_API void destroy_zend_class(zend_class_entry **pce)
{
	zend_class_entry *ce = *pce;
	
	if (--ce->refcount > 0) {
		return;
	}
	switch (ce->type) {
		case ZEND_USER_CLASS:
			zend_hash_destroy(&ce->default_properties);
			zend_hash_destroy(&ce->properties_info);
			zend_hash_destroy(&ce->default_static_members);
			efree(ce->name);
			zend_hash_destroy(&ce->function_table);
			zend_hash_destroy(&ce->constants_table);
			if (ce->num_interfaces > 0 && ce->interfaces) {
				efree(ce->interfaces);
			}
			if (ce->doc_comment) {
				efree(ce->doc_comment);
			}
			efree(ce);
			break;
		case ZEND_INTERNAL_CLASS:
			zend_hash_destroy(&ce->default_properties);
			zend_hash_destroy(&ce->properties_info);
			zend_hash_destroy(&ce->default_static_members);
			free(ce->name);
			zend_hash_destroy(&ce->function_table);
			zend_hash_destroy(&ce->constants_table);
			if (ce->num_interfaces > 0) {
				free(ce->interfaces);
			}
			if (ce->doc_comment) {
				free(ce->doc_comment);
			}
			free(ce);
			break;
	}
}

void zend_class_add_ref(zend_class_entry **ce)
{
	(*ce)->refcount++;
}

ZEND_API void destroy_op_array(zend_op_array *op_array TSRMLS_DC)
{
	zend_op *opline = op_array->opcodes;
	zend_op *end = op_array->opcodes+op_array->last;
	zend_uint i;

	if (op_array->static_variables) {
		zend_hash_destroy(op_array->static_variables);
		FREE_HASHTABLE(op_array->static_variables);
	}

	if (--(*op_array->refcount)>0) {
		return;
	}

	efree(op_array->refcount);

	if (op_array->vars) {
		i = op_array->last_var;
		while (i > 0) {
			i--;
			efree(op_array->vars[i].name);
		}
		efree(op_array->vars);
	}

	while (opline<end) {
		if (opline->op1.op_type==IS_CONST) {
#if DEBUG_ZEND>2
			printf("Reducing refcount for %x 1=>0 (destroying)\n", &opline->op1.u.constant);
#endif
			zval_dtor(&opline->op1.u.constant);
		}
		if (opline->op2.op_type==IS_CONST) {
#if DEBUG_ZEND>2
			printf("Reducing refcount for %x 1=>0 (destroying)\n", &opline->op2.u.constant);
#endif
			zval_dtor(&opline->op2.u.constant);
		}
		opline++;
	}
	efree(op_array->opcodes);

	if (op_array->function_name) {
		efree(op_array->function_name);
	}
	if (op_array->doc_comment) {
		efree(op_array->doc_comment);
	}
	if (op_array->brk_cont_array) {
		efree(op_array->brk_cont_array);
	}
	if (op_array->try_catch_array) {
		efree(op_array->try_catch_array);
	}
	if (op_array->done_pass_two) {
		zend_llist_apply_with_argument(&zend_extensions, (llist_apply_with_arg_func_t) zend_extension_op_array_dtor_handler, op_array TSRMLS_CC);
	}
	if (op_array->arg_info) {
		for (i=0; i<op_array->num_args; i++) {
			efree(op_array->arg_info[i].name);
			if (op_array->arg_info[i].class_name) {
				efree(op_array->arg_info[i].class_name);
			}
		}
		efree(op_array->arg_info);
	}
}

void init_op(zend_op *op TSRMLS_DC)
{
	memset(op, 0, sizeof(zend_op));
	op->lineno = CG(zend_lineno);
	SET_UNUSED(op->result);
}

zend_op *get_next_op(zend_op_array *op_array TSRMLS_DC)
{
	zend_uint next_op_num = op_array->last++;
	zend_op *next_op;

	if (next_op_num >= op_array->size) {
		if (op_array->fn_flags & ZEND_ACC_INTERACTIVE) {
			/* we messed up */
			zend_printf("Ran out of opcode space!\n"
						"You should probably consider writing this huge script into a file!\n");
			zend_bailout();
		}
		op_array->size *= 4;
		op_array_alloc_ops(op_array);
	}
	
	next_op = &(op_array->opcodes[next_op_num]);
	
	init_op(next_op TSRMLS_CC);

	return next_op;
}

int get_next_op_number(zend_op_array *op_array)
{
	return op_array->last;
}

zend_brk_cont_element *get_next_brk_cont_element(zend_op_array *op_array)
{
	op_array->last_brk_cont++;
	op_array->brk_cont_array = erealloc(op_array->brk_cont_array, sizeof(zend_brk_cont_element)*op_array->last_brk_cont);
	return &op_array->brk_cont_array[op_array->last_brk_cont-1];
}

static void zend_update_extended_info(zend_op_array *op_array TSRMLS_DC)
{
	zend_op *opline = op_array->opcodes, *end=opline+op_array->last;

	while (opline<end) {
		if (opline->opcode == ZEND_EXT_STMT) {
			if (opline+1<end) {
				if ((opline+1)->opcode == ZEND_EXT_STMT) {
					opline->opcode = ZEND_NOP;
					opline++;
					continue;
				}
				if (opline+1<end) {
					opline->lineno = (opline+1)->lineno;
				}
			} else {
				opline->opcode = ZEND_NOP;
			}
		}
		opline++;
	}
}

static void zend_extension_op_array_handler(zend_extension *extension, zend_op_array *op_array TSRMLS_DC)
{
	if (extension->op_array_handler) {
		extension->op_array_handler(op_array);
	}
}

inline void delete_znode(znode *node)
{
	if(node->u.var) {
		/* printf("DELETE ZNODE var: %d type: %d e_type: %d const: %d\n", node->u.var, node->op_type, node->u.EA.type, node->u.constant); */
		if(node->op_type == IS_CONSTANT) {
			zval_dtor(&node->u.constant);
		}
		
		node->u.var = 0;
		node->op_type = IS_UNUSED;
	}
}

void delete_op(zend_op_array *op_array, zend_uint op_num TSRMLS_DC)
{
	zend_op *opline, *opline_src, *opline_dest, *end;
	/* printf("DELETING OP: %d last: %d\n", op_num, op_array->last); */
	if(op_array->last == op_num) {
		op_array->last--;
	} else if(op_num < op_array->last) {
		opline = op_array->opcodes;
		end = opline + op_array->last;
		
		opline_dest = opline + op_num++;
		opline_src = opline + op_num;
		
		delete_znode(&opline_dest->result);
		delete_znode(&opline_dest->op1);
		delete_znode(&opline_dest->op2);
	
		while(opline < end) {
			switch(opline->opcode) {
				/* just op1 */
				case ZEND_JMP:
				case ZEND_BRK:
				case ZEND_CONT:
					if(opline->op1.u.opline_num > op_num) {
						opline->op1.u.opline_num--;
					}
				
				break;
				
				/* extended + op2 values */
				case ZEND_JMPZNZ:
				case ZEND_CATCH:
					if(opline->extended_value > op_num) {
						opline->extended_value--;
					}
				
				/* just op2 */
				case ZEND_JMPZ:
				case ZEND_JMPNZ:
				case ZEND_JMPZ_EX:
				case ZEND_JMPNZ_EX:
				case ZEND_NEW:
				case ZEND_FE_RESET:
				case ZEND_FE_FETCH:
					if(opline->op2.u.opline_num > op_num) {
						opline->op2.u.opline_num--;
					}
				
				break;
			}
		
			
		
			if(opline >= opline_src) {
				memcpy(opline_dest++, opline_src++, sizeof(zend_op));
			}
		
			opline++;
		}
	
		op_array->last--;
	}
}

int var_used_again(zend_op_array *op_array, zend_uint op_num, znode* zn TSRMLS_DC)
{
	zend_op *opline, *end;
	opline = op_array->opcodes + (++op_num);
	end = op_array->opcodes + op_array->last;
	/* printf("searching for next use of var: %d with type: %d\n", zn->u.var, zn->op_type); */
	
	for(; opline < end; opline++, op_num++) {
		if((opline->result.u.var == zn->u.var && opline->result.op_type == zn->op_type) ||
			(opline->op1.u.var == zn->u.var && opline->op1.op_type == zn->op_type) ||
			(opline->op2.u.var == zn->u.var && opline->op2.op_type == zn->op_type)) {
			return op_num;
		}
	}
	
	/* return value can never be zero above because you can never start at a negative op_num */
	return 0;
}

int var_change(zend_op_array *op_array, zend_uint old_var, zend_uint new_var, zend_uint type TSRMLS_DC)
{
	zend_op *opline, *end;
	opline = op_array->opcodes;
	end = opline + op_array->last;
	
	for(; opline < end; opline++) {
		if((opline->result.u.var == old_var && opline->result.op_type == type)) {
			opline->result.u.var = new_var;
		}
		
		if(opline->op1.u.var == old_var && opline->op1.op_type == type) {
			opline->op1.u.var = new_var;
		}
		
		if(opline->op2.u.var == old_var && opline->op2.op_type == type) {
			opline->op2.u.var = new_var;
		}
	}
}

void helper_remove_ret(zend_op_array *op_array, zend_uint op_num TSRMLS_DC)
{
	zend_op* opline = op_array->opcodes + op_num;
	opline->result.op_type = IS_VAR;
	opline->result.u.EA.type = ZEND_FETCH_LOCAL; /* I think this should be 0, but it tells me I'm leaking memory, so something is wrong */
	delete_znode(&opline->result);
	delete_op(op_array, ++op_num TSRMLS_CC);
}

int pass_two(zend_op_array *op_array TSRMLS_DC)
{
	zend_op *opline, *end;
	zend_uint cur;

	if (op_array->type!=ZEND_USER_FUNCTION && op_array->type!=ZEND_EVAL_CODE) {
		return 0;
	}
	if (CG(extended_info)) {
		zend_update_extended_info(op_array TSRMLS_CC);
	}
	if (CG(handle_op_arrays)) {
		zend_llist_apply_with_argument(&zend_extensions, (llist_apply_with_arg_func_t) zend_extension_op_array_handler, op_array TSRMLS_CC);
	}
	
	if(!CG(opcode_optimize)) {
		goto no_optimize;
	}
	
	if (!(op_array->fn_flags & ZEND_ACC_INTERACTIVE) && op_array->size != op_array->last) {
		op_array->opcodes = (zend_op *) erealloc(op_array->opcodes, sizeof(zend_op)*op_array->last);
		op_array->size = op_array->last;
	}
	
	printf("# ops (before): %d\n", op_array->last);
	
	/* optimization pass 1 - delete unnecessary ops */
	optimize: {
		int changes = 0;
		
		opline = op_array->opcodes;
		end = opline + op_array->last;
		for(cur = 0; opline < end; cur++, opline++) {
			switch (opline->opcode) {
				case ZEND_NOP:
					/* I *hope* these are useless! */
					delete_op(op_array, cur TSRMLS_CC);
					changes++;
					break;
				
				case ZEND_JMP:
					/* delete ops that jump to the next line */
					/* !!delete ops that jump right after a jmp */
					if(/*(opline-1)->opcode == ZEND_JMP ||*/ opline->op1.u.opline_num == cur + 1) {
						delete_op(op_array, cur TSRMLS_CC);
						changes++;
						break;
					}
					
					/* if we're jumping to a jump, it's silly */
					if(op_array->opcodes[opline->op1.u.opline_num].opcode == ZEND_JMP) {
						opline->op1.u.opline_num = op_array->opcodes[opline->op1.u.opline_num].op1.u.opline_num;
						changes++;
					}
					
					break;
				
				case ZEND_JMPZ:
				case ZEND_JMPNZ:
				case ZEND_JMPZ_EX:
				case ZEND_JMPNZ_EX:
					/* delete ops that jump to the next line */
					if(opline->op2.u.opline_num == cur + 1) {
						delete_op(op_array, cur TSRMLS_CC);
						changes++;
						break;
					}
					
					/* don't jump to a jmp */
					if(op_array->opcodes[opline->op2.u.opline_num].opcode == ZEND_JMP) {
						opline->op2.u.opline_num = op_array->opcodes[opline->op2.u.opline_num].op1.u.opline_num;
						changes++;
					}
					
					break;
				/*
				case ZEND_PRE_INC:
					printf("PRE_INC-- op_type: %d, u.var %d, EA.type %d\n", opline->result.op_type, opline->result.u.var, opline->result.u.EA.type);
					break;
				*/
				
				case ZEND_POST_DEC:
					if((opline+1)->op1.u.var == opline->result.u.var) {
						opline->opcode = ZEND_PRE_DEC;
						helper_remove_ret(op_array, cur TSRMLS_CC);
						changes++;
					}
					break;
					
				case ZEND_POST_INC:
					if((opline+1)->op1.u.var == opline->result.u.var) {
						/* printf("POST_INC-- op_type: %d, u.var %d, EA.type %d\n", opline->result.op_type, opline->result.u.var, opline->result.u.EA.type); */
						opline->opcode = ZEND_PRE_INC;
						helper_remove_ret(op_array, cur TSRMLS_CC);
						changes++;
					}
					break;
				
				case ZEND_ASSIGN:
					/* this breaks functioning php code and causes a segfault. until I have the full globals change implemented, best to keep this commented */
					/*if(opline->op2.op_type == IS_VAR) {
						zend_uint next_use = var_used_again(op_array, cur, &opline->op1);
						if(next_use == 0 || (op_array->opcodes[next_use].opcode == ZEND_ASSIGN && op_array->opcodes[next_use].op1.u.var == opline->op1.u.var)) {
							delete_op(op_array, cur TSRMLS_CC);
							changes++;
							break;
						}
					}*/
					break;
				
				case ZEND_ADD:
				case ZEND_SUB:
				case ZEND_MUL:
				case ZEND_DIV:
				case ZEND_MOD:
				case ZEND_SL:
				case ZEND_SR:
				case ZEND_CONCAT:
				case ZEND_IS_IDENTICAL:
				case ZEND_IS_NOT_IDENTICAL:
				case ZEND_IS_EQUAL:
				case ZEND_IS_NOT_EQUAL:
				case ZEND_IS_SMALLER:
				case ZEND_IS_SMALLER_OR_EQUAL:
				case ZEND_BW_OR:
				case ZEND_BW_AND:
				case ZEND_BW_XOR:
				case ZEND_BOOL_XOR:
					if(opline->op1.op_type == IS_CONST && opline->op2.op_type == IS_CONST) {
						/*printf("%d:: result.op_type: %d result.u.var %d constant.type %d\n", cur, opline->result.op_type, opline->result.u.var, opline->result.u.constant.type);
						printf("%d:: op1.op_type: %d op1.u.var %d constant.type %d\n", cur, opline->op1.op_type, opline->op1.u.var, opline->op1.u.constant.type);
						printf("%d:: op2.op_type: %d op2.u.var %d constant.type %d\n", cur, opline->op2.op_type, opline->op2.u.var, opline->op2.u.constant.type);//*/
						
						zend_uint next_use = var_used_again(op_array, cur, &opline->result);
						for(; next_use > 0; next_use = var_used_again(op_array, next_use, &opline->result)) {
							znode* zn;
							if(op_array->opcodes[next_use].op1.u.var == opline->result.u.var) {
								zn = &op_array->opcodes[next_use].op1;
							} else if(op_array->opcodes[next_use].op2.u.var == opline->result.u.var) {
								zn = &op_array->opcodes[next_use].op2;
							} else if(op_array->opcodes[next_use].result.u.var == opline->result.u.var) {
								zn = &op_array->opcodes[next_use].result;
							}
							
							switch(opline->opcode) {
								case ZEND_ADD:
									add_function(&opline->op1.u.constant, &opline->op1.u.constant, &opline->op2.u.constant TSRMLS_CC);
									break;
								case ZEND_SUB:
									sub_function(&opline->op1.u.constant, &opline->op1.u.constant, &opline->op2.u.constant TSRMLS_CC);
									break;
								case ZEND_MUL:
									mul_function(&opline->op1.u.constant, &opline->op1.u.constant, &opline->op2.u.constant TSRMLS_CC);
									break;
								case ZEND_DIV:
									div_function(&opline->op1.u.constant, &opline->op1.u.constant, &opline->op2.u.constant TSRMLS_CC);
									break;
								case ZEND_MOD:
									mod_function(&opline->op1.u.constant, &opline->op1.u.constant, &opline->op2.u.constant TSRMLS_CC);
									break;
								case ZEND_SL:
									shift_left_function(&opline->op1.u.constant, &opline->op1.u.constant, &opline->op2.u.constant TSRMLS_CC);
									break;
								case ZEND_SR:
									shift_right_function(&opline->op1.u.constant, &opline->op1.u.constant, &opline->op2.u.constant TSRMLS_CC);
									break;
								case ZEND_CONCAT:
									concat_function(&opline->op1.u.constant, &opline->op1.u.constant, &opline->op2.u.constant TSRMLS_CC);
									break;
								case ZEND_IS_IDENTICAL:
									is_identical_function(&opline->op1.u.constant, &opline->op1.u.constant, &opline->op2.u.constant TSRMLS_CC);
									break;
								case ZEND_IS_NOT_IDENTICAL:
									is_not_identical_function(&opline->op1.u.constant, &opline->op1.u.constant, &opline->op2.u.constant TSRMLS_CC);
									break;
								case ZEND_IS_EQUAL:
									is_equal_function(&opline->op1.u.constant, &opline->op1.u.constant, &opline->op2.u.constant TSRMLS_CC);
									break;
								case ZEND_IS_NOT_EQUAL:
									is_not_equal_function(&opline->op1.u.constant, &opline->op1.u.constant, &opline->op2.u.constant TSRMLS_CC);
									break;
								case ZEND_IS_SMALLER:
									is_smaller_function(&opline->op1.u.constant, &opline->op1.u.constant, &opline->op2.u.constant TSRMLS_CC);
									break;
								case ZEND_IS_SMALLER_OR_EQUAL:
									is_smaller_or_equal_function(&opline->op1.u.constant, &opline->op1.u.constant, &opline->op2.u.constant TSRMLS_CC);
									break;
								case ZEND_BW_OR:
									bitwise_or_function(&opline->op1.u.constant, &opline->op1.u.constant, &opline->op2.u.constant TSRMLS_CC);
									break;
								case ZEND_BW_AND:
									bitwise_and_function(&opline->op1.u.constant, &opline->op1.u.constant, &opline->op2.u.constant TSRMLS_CC);
									break;
								case ZEND_BW_XOR:
									bitwise_xor_function(&opline->op1.u.constant, &opline->op1.u.constant, &opline->op2.u.constant TSRMLS_CC);
									break;
								case ZEND_BOOL_XOR:
									boolean_xor_function(&opline->op1.u.constant, &opline->op1.u.constant, &opline->op2.u.constant TSRMLS_CC);
									break;
								EMPTY_SWITCH_DEFAULT_CASE()
							}
							
							*zn = opline->op1;
							delete_op(op_array, cur TSRMLS_CC);
							changes++;
						}
					}
					break;
					
				case ZEND_PRINT:
					/* convert all prints without the return value used into echos */
					if((opline+1)->op1.u.var == opline->result.u.var && (opline+1)->opcode == ZEND_FREE) {
						opline->opcode = ZEND_ECHO;
						helper_remove_ret(op_array, cur TSRMLS_CC);
						changes++;
					}
					break;
			}
		}
		
		if(changes) {
			goto optimize;
		}
	}

	/* optimization pass 2 - shift all unused tmp variables down and free their memory */
	printf("# tmp vars (before): %d\n", op_array->T);
	optimize2: {
		
		for(cur = op_array->T; cur > 0; cur--) { 
			opline = op_array->opcodes;
			end = opline + op_array->last;
			int is_used = 0;
			int size = cur * sizeof(temp_variable);
			for(; opline < end; opline++) {
				zend_uint type = opline->result.op_type == IS_TMP_VAR;
				
				if(((opline->result.op_type == IS_TMP_VAR || opline->result.op_type == IS_VAR) && opline->result.u.var == size) ||
					((opline->op1.op_type == IS_TMP_VAR || opline->op1.op_type == IS_VAR) && opline->op1.u.var == size) ||
					((opline->op2.op_type == IS_TMP_VAR || opline->op2.op_type == IS_VAR) && opline->op2.u.var == size)) {
					is_used = 1;
					break;
				}
				
				/*printf("%d:: result.op_type: %d result.u.var %d \n", size, opline->result.op_type, opline->result.u.var);
				printf("%d:: op1.op_type: %d op1.u.var %d \n", size, opline->op1.op_type, opline->op1.u.var);
				printf("%d:: op2.op_type: %d op2.u.var %d \n", size, opline->op2.op_type, opline->op2.u.var);*/
			}
			
			/*printf("IS_USED: %d\n", is_used);*/
		
			if(is_used == 0) {
				/*printf("DELEING TMP: %d size: %d total: %d\n", cur, size, op_array->T);*/
				if(cur == op_array->T) {
					(op_array->T)--;
				} else if(cur < op_array->T) {
					/* shift everything above downward */
					(op_array->T)--;
					opline = op_array->opcodes;
					for(; opline < end; opline++) {
						if(opline->result.op_type == IS_TMP_VAR && opline->result.u.var >= size) {
							opline->result.u.var -= sizeof(temp_variable);
						}
					
						/*printf("size: %d op1: %d op1.type: %d\n", size, opline->op1.u.var, opline->op1.op_type);*/
						if(opline->op1.op_type == IS_TMP_VAR && opline->op1.u.var >= size) {
							opline->op1.u.var -= sizeof(temp_variable);
						}
					
						if(opline->op2.op_type == IS_TMP_VAR && opline->op2.u.var >= size) {
							opline->op2.u.var -= sizeof(temp_variable);
						}
					}
				}
			}
		}
		
		op_array->T++;
	}

	printf("# tmp vars (after): %d\n", op_array->T);
	printf("# ops (after): %d\n", op_array->last);
	printf("optimization complete!\n");
	
no_optimize:
	if (!(op_array->fn_flags & ZEND_ACC_INTERACTIVE) && op_array->size != op_array->last) {
		op_array->opcodes = (zend_op *) erealloc(op_array->opcodes, sizeof(zend_op)*op_array->last);
		op_array->size = op_array->last;
	}

	opline = op_array->opcodes;
	end = opline + op_array->last;
	while (opline < end) {
		if (opline->op1.op_type == IS_CONST) {
			opline->op1.u.constant.is_ref = 1;
			opline->op1.u.constant.refcount = 2; /* Make sure is_ref won't be reset */
		}
		if (opline->op2.op_type == IS_CONST) {
			opline->op2.u.constant.is_ref = 1;
			opline->op2.u.constant.refcount = 2;
		}
		switch (opline->opcode) {
			case ZEND_JMP:
				opline->op1.u.jmp_addr = &op_array->opcodes[opline->op1.u.opline_num];
				break;
			case ZEND_JMPZ:
			case ZEND_JMPNZ:
			case ZEND_JMPZ_EX:
			case ZEND_JMPNZ_EX:
				opline->op2.u.jmp_addr = &op_array->opcodes[opline->op2.u.opline_num];
				break;
		}
		ZEND_VM_SET_OPCODE_HANDLER(opline);
		opline++;
	}

	op_array->done_pass_two = 1;
	return 0;
}

int print_class(zend_class_entry *class_entry TSRMLS_DC)
{
	printf("Class %s:\n", class_entry->name);
	zend_hash_apply(&class_entry->function_table, (apply_func_t) pass_two TSRMLS_CC);
	printf("End of class %s.\n\n", class_entry->name);
	return 0;
}

ZEND_API unary_op_type get_unary_op(int opcode)
{
	switch (opcode) {
		case ZEND_BW_NOT:
			return (unary_op_type) bitwise_not_function;
			break;
		case ZEND_BOOL_NOT:
			return (unary_op_type) boolean_not_function;
			break;
		default:
			return (unary_op_type) NULL;
			break;
	}
}

ZEND_API void *get_binary_op(int opcode)
{
	switch (opcode) {
		case ZEND_ADD:
		case ZEND_ASSIGN_ADD:
			return (void *) add_function;
			break;
		case ZEND_SUB:
		case ZEND_ASSIGN_SUB:
			return (void *) sub_function;
			break;
		case ZEND_MUL:
		case ZEND_ASSIGN_MUL:
			return (void *) mul_function;
			break;
		case ZEND_DIV:
		case ZEND_ASSIGN_DIV:
			return (void *) div_function;
			break;
		case ZEND_MOD:
		case ZEND_ASSIGN_MOD:
			return (void *) mod_function;
			break;
		case ZEND_SL:
		case ZEND_ASSIGN_SL:
			return (void *) shift_left_function;
			break;
		case ZEND_SR:
		case ZEND_ASSIGN_SR:
			return (void *) shift_right_function;
			break;
		case ZEND_CONCAT:
		case ZEND_ASSIGN_CONCAT:
			return (void *) concat_function;
			break;
		case ZEND_IS_IDENTICAL:
			return (void *) is_identical_function;
			break;
		case ZEND_IS_NOT_IDENTICAL:
			return (void *) is_not_identical_function;
			break;
		case ZEND_IS_EQUAL:
			return (void *) is_equal_function;
			break;
		case ZEND_IS_NOT_EQUAL:
			return (void *) is_not_equal_function;
			break;
		case ZEND_IS_SMALLER:
			return (void *) is_smaller_function;
			break;
		case ZEND_IS_SMALLER_OR_EQUAL:
			return (void *) is_smaller_or_equal_function;
			break;
		case ZEND_BW_OR:
		case ZEND_ASSIGN_BW_OR:
			return (void *) bitwise_or_function;
			break;
		case ZEND_BW_AND:
		case ZEND_ASSIGN_BW_AND:
			return (void *) bitwise_and_function;
			break;
		case ZEND_BW_XOR:
		case ZEND_ASSIGN_BW_XOR:
			return (void *) bitwise_xor_function;
			break;
		default:
			return (void *) NULL;
			break;
	}
}

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * indent-tabs-mode: t
 * End:
 */
