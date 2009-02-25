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

/* $Id: zend_constants.c,v 1.71.2.5.2.9 2008/02/19 12:00:36 dmitry Exp $ */

#include "zend.h"
#include "zend_constants.h"
#include "zend_execute.h"
#include "zend_variables.h"
#include "zend_operators.h"
#include "zend_globals.h"


void copy_zend_constant(zend_constant *c)
{
	zval_copy_ctor(&c->value);
}


void zend_copy_constants(HashTable *target, HashTable *source)
{
	zend_constant tmp_constant;

	zend_hash_copy(target, source, (copy_ctor_func_t) copy_zend_constant, &tmp_constant, sizeof(zend_constant));
}


static int clean_module_constant(zend_constant *c, int *module_number TSRMLS_DC)
{
	if (c->module_number == *module_number) {
		return 1;
	} else {
		return 0;
	}
}


void clean_module_constants(int module_number TSRMLS_DC)
{
	zend_hash_apply_with_argument(EG(zend_constants), (apply_func_arg_t) clean_module_constant, (void *) &module_number TSRMLS_CC);
}


int zend_startup_constants(TSRMLS_D)
{
	EG(zend_constants) = (HashTable *) malloc(sizeof(HashTable));

	if (zend_hash_init(EG(zend_constants), INITIAL_CONSTANT_ARRAY_SIZE, NULL, NULL, 1)==FAILURE) {
		return FAILURE;
	}
	return SUCCESS;
}



void zend_register_standard_constants(TSRMLS_D)
{
	REGISTER_MAIN_LONG_CONSTANT("E_ERROR", E_ERROR, CONST_PERSISTENT | CONST_CS);
	REGISTER_MAIN_LONG_CONSTANT("E_RECOVERABLE_ERROR", E_RECOVERABLE_ERROR, CONST_PERSISTENT | CONST_CS);
	REGISTER_MAIN_LONG_CONSTANT("E_WARNING", E_WARNING, CONST_PERSISTENT | CONST_CS);
	REGISTER_MAIN_LONG_CONSTANT("E_PARSE", E_PARSE, CONST_PERSISTENT | CONST_CS);
	REGISTER_MAIN_LONG_CONSTANT("E_NOTICE", E_NOTICE, CONST_PERSISTENT | CONST_CS);
	REGISTER_MAIN_LONG_CONSTANT("E_STRICT", E_STRICT, CONST_PERSISTENT | CONST_CS);
	REGISTER_MAIN_LONG_CONSTANT("E_CORE_ERROR", E_CORE_ERROR, CONST_PERSISTENT | CONST_CS);
	REGISTER_MAIN_LONG_CONSTANT("E_CORE_WARNING", E_CORE_WARNING, CONST_PERSISTENT | CONST_CS);
	REGISTER_MAIN_LONG_CONSTANT("E_COMPILE_ERROR", E_COMPILE_ERROR, CONST_PERSISTENT | CONST_CS);
	REGISTER_MAIN_LONG_CONSTANT("E_COMPILE_WARNING", E_COMPILE_WARNING, CONST_PERSISTENT | CONST_CS);
	REGISTER_MAIN_LONG_CONSTANT("E_USER_ERROR", E_USER_ERROR, CONST_PERSISTENT | CONST_CS);
	REGISTER_MAIN_LONG_CONSTANT("E_USER_WARNING", E_USER_WARNING, CONST_PERSISTENT | CONST_CS);
	REGISTER_MAIN_LONG_CONSTANT("E_USER_NOTICE", E_USER_NOTICE, CONST_PERSISTENT | CONST_CS);

	REGISTER_MAIN_LONG_CONSTANT("E_ALL", E_ALL, CONST_PERSISTENT | CONST_CS);

	/* true/false constants */
	{
		zend_constant c;
	
		c.module_number = 0;

		c.value.value.lval = 1;
		c.value.type = IS_BOOL;
		zend_register_constant("true", sizeof("true"), &c TSRMLS_CC);
		
		c.value.value.lval = 0;
		c.value.type = IS_BOOL;
		zend_register_constant("false", sizeof("false"), &c TSRMLS_CC);

		c.value.type = IS_NULL;
		zend_register_constant("null", sizeof("null"), &c TSRMLS_CC);
		zend_register_constant("NULL", sizeof("NULL"), &c TSRMLS_CC);

		c.value.value.lval = ZTS_V;
		c.value.type = IS_BOOL;
		zend_register_constant("ZEND_THREAD_SAFE", sizeof("ZEND_THREAD_SAFE"), &c TSRMLS_CC);
	}
}


ZEND_API void zend_register_long_constant(char *name, uint name_len, long lval, int flags, int module_number TSRMLS_DC)
{
	zend_constant c;
	
	c.value.type = IS_LONG;
	c.value.value.lval = lval;
	c.module_number = module_number;
	zend_register_constant(name, name_len, &c TSRMLS_CC);
}


ZEND_API void zend_register_double_constant(char *name, uint name_len, double dval, int flags, int module_number TSRMLS_DC)
{
	zend_constant c;
	
	c.value.type = IS_DOUBLE;
	c.value.value.dval = dval;
	c.module_number = module_number;
	zend_register_constant(name, name_len, &c TSRMLS_CC);
}


ZEND_API void zend_register_stringl_constant(char *name, uint name_len, char *strval, uint strlen, int flags, int module_number TSRMLS_DC)
{
	zend_constant c;
	
	c.value.type = IS_STRING;
	c.value.value.str.val = strval;
	c.value.value.str.len = strlen;
	c.module_number = module_number;
	zend_register_constant(name, name_len, &c TSRMLS_CC);
}


ZEND_API void zend_register_string_constant(char *name, uint name_len, char *strval, int flags, int module_number TSRMLS_DC)
{
	zend_register_stringl_constant(name, name_len, strval, strlen(strval), flags, module_number TSRMLS_CC);
}

ZEND_API int const_name(char* name, int name_len, char* scope, int scope_len, char** out)
{
	int lookup_name_len = scope_len + 2 + name_len;
	char* lookup_name = emalloc(lookup_name_len + 1);
	
	memcpy(lookup_name, scope, scope_len);
	memcpy((lookup_name + (scope_len + 2)), name, name_len);
	
	lookup_name[scope_len++] = ':';
	lookup_name[scope_len] = ':';
	lookup_name[lookup_name_len] = 0;
	*out = lookup_name;
	
	return lookup_name_len;
}

ZEND_API int zend_get_constant(char *name, uint name_len, zval *result TSRMLS_DC)
{
	zend_constant *c;
	int retval = 1;
	char *lookup_name;
	int lookup_name_len;
	char *colon;

	if ((colon = memchr(name, ':', name_len)) && colon[1] == ':') {
		/* class constant */
		int class_name_len = colon-name;
		int const_name_len = name_len - class_name_len - 2;
		char *constant_name = colon+2;
		zval **ret_constant;
		char *class_name;

		class_name = estrndup(name, class_name_len);
		if (class_name_len == sizeof("self")-1 && strcmp(class_name, "self") == 0) {
			if (CG(active_class_entry)) {
				efree(class_name);
				class_name_len = CG(active_class_entry)->name_length;
				class_name = estrndup(CG(active_class_entry)->name, class_name_len);
			} else {
				zend_error(E_ERROR, "Cannot access self:: when no class scope is active");
				retval = 0;
			}
		} else if (class_name_len == sizeof("parent")-1 && strcmp(class_name, "parent") == 0) {
			if (!CG(active_class_entry)) {
				zend_error(E_ERROR, "Cannot access parent:: when no class scope is active");
			} else if (!CG(active_class_entry)->parent) { 	 
				zend_error(E_ERROR, "Cannot access parent:: when current class scope has no parent"); 	 
			} else {
				efree(class_name);
				class_name_len = CG(active_class_entry)->parent->name_length;
				class_name = estrndup(CG(active_class_entry)->parent->name, class_name_len);
			}
		}
		
		lookup_name_len = const_name(name, name_len, class_name, class_name_len, &lookup_name);
		efree(class_name);
	} else {
		lookup_name = name;
		lookup_name_len = name_len;
	}

	if (zend_hash_find(EG(zend_constants), lookup_name, lookup_name_len + 1, (void **) &c) == FAILURE) {
		retval = 0;
	}
	
	if(name != lookup_name) {
		efree(lookup_name);
	}

	if(retval) {
		*result = c->value;
		zval_copy_ctor(result);
		result->refcount = 1;
		result->is_ref = 0;
	}

	return retval;
}

ZEND_API int zend_register_constant(char* name, int name_len, zend_constant *c TSRMLS_DC)
{
	int ret = SUCCESS;
	char* hash_name = estrndup(name, name_len);

#if 0
	printf("Registering '%.*s' for module %d\n", name_len, hash_name, c->module_number);
#endif

	if(
#if 0
		(strncmp(name, "__COMPILER_HALT_OFFSET__", sizeof("__COMPILER_HALT_OFFSET__") - 1) == 0) ||
#endif
		zend_hash_add(EG(zend_constants), hash_name, name_len, (void *) c, sizeof(zend_constant), NULL) == FAILURE) {
		zend_error(E_NOTICE,"Constant %s already defined", name);
		ret = FAILURE;
	}
	
	efree(hash_name);
	return ret;
}


/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * indent-tabs-mode: t
 * End:
 */
