<?php
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
   | Authors: Dmitry Stogov <dmitry@zend.com>                             |
   +----------------------------------------------------------------------+

	 $Id: zend_vm_gen.php,v 1.12.2.5.2.5 2007/12/31 07:25:08 sebastian Exp $
*/

$header_text = <<< DATA
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
   |          Dmitry Stogov <dmitry@zend.com>                             |
   +----------------------------------------------------------------------+
*/


DATA;

/*
	This script creates zend_vm_execute.h and zend_vm_opcodes.h
	from existing zend_vm_def.h and zend_vm_execute.skl
*/

error_reporting(E_ALL);

/*
echo "rebuilding ini scanner...\n";
system("flex -B -8 -L -Sflex.skl -Pini_ -ozend_ini_scanner.c zend_ini_scanner.l");

echo "rebuilding language scanner...\n";
system("flex -B -8 -L -Sflex.skl -Pzend -ozend_language_scanner.c zend_language_scanner.l"); //-i

echo "rebuilding language parser...\n";
system("yacc -l -p zend -d zend_language_parser.y -o zend_language_parser.c");

echo "rebuilding ini parser...\n";
system("yacc -l -p ini_ -d zend_ini_parser.y -o zend_ini_parser.c");
//exit;
*/

define("ZEND_VM_KIND_CALL",   1);
define("ZEND_VM_KIND_SWITCH", 2);
define("ZEND_VM_KIND_GOTO",   3);
define("ZEND_VM_KIND_GOTO2",   4);

$op_types = array(
	"ANY",
	"CONST",
	"TMP",
	"VAR",
	"UNUSED",
	"CV"
);

$prefix = array(
	"ANY"    => "",
	"TMP"    => "_TMP",
	"VAR"    => "_VAR",
	"CONST"  => "_CONST",
	"UNUSED" => "_UNUSED",
	"CV"     => "_CV",
);

$typecode = array(
	"ANY"    => 0,
	"TMP"    => 1,
	"VAR"    => 2,
	"CONST"  => 0,
	"UNUSED" => 3,
	"CV"     => 4,
);

$op1_type = array(
	"ANY"    => "opline->op1.op_type",
	"TMP"    => "IS_TMP_VAR",
	"VAR"    => "IS_VAR",
	"CONST"  => "IS_CONST",
	"UNUSED" => "IS_UNUSED",
	"CV"     => "IS_CV",
);

$op2_type = array(
	"ANY"    => "opline->op2.op_type",
	"TMP"    => "IS_TMP_VAR",
	"VAR"    => "IS_VAR",
	"CONST"  => "IS_CONST",
	"UNUSED" => "IS_UNUSED",
	"CV"     => "IS_CV",
);

$op1_free = array(
	"ANY"    => "(free_op1.var != NULL)",
	"TMP"    => "1",
	"VAR"    => "(free_op1.var != NULL)",
	"CONST"  => "0",
	"UNUSED" => "0",
	"CV"     => "0",
);

$op2_free = array(
	"ANY"    => "(free_op2.var != NULL)",
	"TMP"    => "1",
	"VAR"    => "(free_op2.var != NULL)",
	"CONST"  => "0",
	"UNUSED" => "0",
	"CV"     => "0",
);

$op1_get_zval_ptr = array(
	"ANY"    => "get_zval_ptr(&opline->op1, EX(Ts), &free_op1, \\1)",
	"TMP"    => "_get_zval_ptr_tmp(&opline->op1, EX(Ts), &free_op1 TSRMLS_CC)",
	"VAR"    => "_get_zval_ptr_var(&opline->op1, EX(Ts), &free_op1 TSRMLS_CC)",
	"CONST"  => "&opline->op1.u.constant",
	"UNUSED" => "NULL",
	"CV"     => "_get_zval_ptr_cv(&opline->op1, EX(Ts), \\1 TSRMLS_CC)",
);

$op2_get_zval_ptr = array(
	"ANY"    => "get_zval_ptr(&opline->op2, EX(Ts), &free_op2, \\1)",
	"TMP"    => "_get_zval_ptr_tmp(&opline->op2, EX(Ts), &free_op2 TSRMLS_CC)",
	"VAR"    => "_get_zval_ptr_var(&opline->op2, EX(Ts), &free_op2 TSRMLS_CC)",
	"CONST"  => "&opline->op2.u.constant",
	"UNUSED" => "NULL",
	"CV"     => "_get_zval_ptr_cv(&opline->op2, EX(Ts), \\1 TSRMLS_CC)",
);

$op1_get_zval_ptr_ptr = array(
	"ANY"    => "get_zval_ptr_ptr(&opline->op1, EX(Ts), &free_op1, \\1)",
	"TMP"    => "NULL",
	"VAR"    => "_get_zval_ptr_ptr_var(&opline->op1, EX(Ts), &free_op1 TSRMLS_CC)",
	"CONST"  => "NULL",
	"UNUSED" => "NULL",
	"CV"     => "_get_zval_ptr_ptr_cv(&opline->op1, EX(Ts), \\1 TSRMLS_CC)",
);

$op2_get_zval_ptr_ptr = array(
	"ANY"    => "get_zval_ptr_ptr(&opline->op2, EX(Ts), &free_op2, \\1)",
	"TMP"    => "NULL",
	"VAR"    => "_get_zval_ptr_ptr_var(&opline->op2, EX(Ts), &free_op2 TSRMLS_CC)",
	"CONST"  => "NULL",
	"UNUSED" => "NULL",
	"CV"     => "_get_zval_ptr_ptr_cv(&opline->op2, EX(Ts), \\1 TSRMLS_CC)",
);

$op1_get_obj_zval_ptr = array(
	"ANY"    => "get_obj_zval_ptr(&opline->op1, EX(Ts), &free_op1, \\1)",
	"TMP"    => "_get_zval_ptr_tmp(&opline->op1, EX(Ts), &free_op1 TSRMLS_CC)",
	"VAR"    => "_get_zval_ptr_var(&opline->op1, EX(Ts), &free_op1 TSRMLS_CC)",
	"CONST"  => "&opline->op1.u.constant",
	"UNUSED" => "_get_obj_zval_ptr_unused(TSRMLS_C)",
	"CV"     => "_get_zval_ptr_cv(&opline->op1, EX(Ts), \\1 TSRMLS_CC)",
);

$op2_get_obj_zval_ptr = array(
	"ANY"    => "get_obj_zval_ptr(&opline->op2, EX(Ts), &free_op2, \\1)",
	"TMP"    => "_get_zval_ptr_tmp(&opline->op2, EX(Ts), &free_op2 TSRMLS_CC)",
	"VAR"    => "_get_zval_ptr_var(&opline->op2, EX(Ts), &free_op2 TSRMLS_CC)",
	"CONST"  => "&opline->op2.u.constant",
	"UNUSED" => "_get_obj_zval_ptr_unused(TSRMLS_C)",
	"CV"     => "_get_zval_ptr_cv(&opline->op2, EX(Ts), \\1 TSRMLS_CC)",
);

$op1_get_obj_zval_ptr_ptr = array(
	"ANY"    => "get_obj_zval_ptr_ptr(&opline->op1, EX(Ts), &free_op1, \\1)",
	"TMP"    => "NULL",
	"VAR"    => "_get_zval_ptr_ptr_var(&opline->op1, EX(Ts), &free_op1 TSRMLS_CC)",
	"CONST"  => "NULL",
	"UNUSED" => "_get_obj_zval_ptr_ptr_unused(TSRMLS_C)",
	"CV"     => "_get_zval_ptr_ptr_cv(&opline->op1, EX(Ts), \\1 TSRMLS_CC)",
);

$op2_get_obj_zval_ptr_ptr = array(
	"ANY"    => "get_obj_zval_ptr_ptr(&opline->op2, EX(Ts), &free_op2, \\1)",
	"TMP"    => "NULL",
	"VAR"    => "_get_zval_ptr_ptr_var(&opline->op2, EX(Ts), &free_op2 TSRMLS_CC)",
	"CONST"  => "NULL",
	"UNUSED" => "_get_obj_zval_ptr_ptr_unused(TSRMLS_C)",
	"CV"     => "_get_zval_ptr_ptr_cv(&opline->op2, EX(Ts), \\1 TSRMLS_CC)",
);

$op1_is_tmp_free = array(
	"ANY"    => "IS_TMP_FREE(free_op1)",
	"TMP"    => "1",
	"VAR"    => "0",
	"CONST"  => "0",
	"UNUSED" => "0",
	"CV"     => "0",
);

$op2_is_tmp_free = array(
	"ANY"    => "IS_TMP_FREE(free_op2)",
	"TMP"    => "1",
	"VAR"    => "0",
	"CONST"  => "0",
	"UNUSED" => "0",
	"CV"     => "0",
);

$op1_free_op = array(
	"ANY"    => "FREE_OP(free_op1)",
	"TMP"    => "zval_dtor(free_op1.var)",
	"VAR"    => "if (free_op1.var) {zval_ptr_dtor(&free_op1.var);}",
	"CONST"  => "",
	"UNUSED" => "",
	"CV"     => "",
);

$op2_free_op = array(
	"ANY"    => "FREE_OP(free_op2)",
	"TMP"    => "zval_dtor(free_op2.var)",
	"VAR"    => "if (free_op2.var) {zval_ptr_dtor(&free_op2.var);}",
	"CONST"  => "",
	"UNUSED" => "",
	"CV"     => "",
);

$op1_free_op_if_var = array(
	"ANY"    => "FREE_OP_IF_VAR(free_op1)",
	"TMP"    => "",
	"VAR"    => "if (free_op1.var) {zval_ptr_dtor(&free_op1.var);}",
	"CONST"  => "",
	"UNUSED" => "",
	"CV"     => "",
);

$op2_free_op_if_var = array(
	"ANY"    => "FREE_OP_IF_VAR(free_op2)",
	"TMP"    => "",
	"VAR"    => "if (free_op2.var) {zval_ptr_dtor(&free_op2.var);}",
	"CONST"  => "",
	"UNUSED" => "",
	"CV"     => "",
);

$op1_free_op_var_ptr = array(
	"ANY"    => "if (free_op1.var) {zval_ptr_dtor(&free_op1.var);}",
	"TMP"    => "",
	"VAR"    => "if (free_op1.var) {zval_ptr_dtor(&free_op1.var);}",
	"CONST"  => "",
	"UNUSED" => "",
	"CV"     => "",
);

$op2_free_op_var_ptr = array(
	"ANY"    => "if (free_op2.var) {zval_ptr_dtor(&free_op2.var);}",
	"TMP"    => "",
	"VAR"    => "if (free_op2.var) {zval_ptr_dtor(&free_op2.var);}",
	"CONST"  => "",
	"UNUSED" => "",
	"CV"     => "",
);

$list    = array(); // list of opcode handlers and helpers in original order
$opcodes = array(); // opcode handlers by code
$helpers = array(); // opcode helpers by name
$params  = array(); // parameters of helpers
$opnames = array(); // opcode name to code mapping
$line_no = 1;

// Writes $s into resulting executor
function out($f, $s) {
	global $line_no;

	fputs($f,$s);
	$line_no += substr_count($s, "\n");
}

// Resets #line directives in resulting executor
function out_line($f) {
	global $line_no, $executor_file;

	fputs($f,"#line ".($line_no+1)." \"".$executor_file."\"\n");
	++$line_no;
}

// Returns name of specialized helper
function helper_name($name, $spec, $op1, $op2) {
	global $prefix, $helpers;

	if (isset($helpers[$name])) {
		// If we haven't helper with specified spicialized operands then
		// using unspecialized helper
		if (!isset($helpers[$name]["op1"][$op1]) &&
		    isset($helpers[$name]["op1"]["ANY"])) {
			$op1 = "ANY";
		}
		if (!isset($helpers[$name]["op2"][$op2]) &&
		    isset($helpers[$name]["op2"]["ANY"])) {
			$op2 = "ANY";
		}
	}
	return $name.($spec?"_SPEC":"").$prefix[$op1].$prefix[$op2];
}

// Generates code for opcode handler or helper
function gen_code($f, $spec, $kind, $code, $op1, $op2) {
	global $op1_type, $op2_type, $op1_get_zval_ptr, $op2_get_zval_ptr,
		$op1_get_zval_ptr_ptr, $op2_get_zval_ptr_ptr,
		$op1_get_obj_zval_ptr, $op2_get_obj_zval_ptr,
		$op1_get_obj_zval_ptr_ptr, $op2_get_obj_zval_ptr_ptr,
		$op1_is_tmp_free, $op2_is_tmp_free, $op1_free, $op2_free,
		$op1_free_op, $op2_free_op, $op1_free_op_if_var, $op2_free_op_if_var,
		$op1_free_op_var_ptr, $op2_free_op_var_ptr, $prefix;

	// Specializing
	$code = preg_replace(
		array(
			"/OP1_TYPE/",
			"/OP2_TYPE/",
			"/OP1_FREE/",
			"/OP2_FREE/",
			"/GET_OP1_ZVAL_PTR\(([^)]*)\)/",
			"/GET_OP2_ZVAL_PTR\(([^)]*)\)/",
			"/GET_OP1_ZVAL_PTR_PTR\(([^)]*)\)/",
			"/GET_OP2_ZVAL_PTR_PTR\(([^)]*)\)/",
			"/GET_OP1_OBJ_ZVAL_PTR\(([^)]*)\)/",
			"/GET_OP2_OBJ_ZVAL_PTR\(([^)]*)\)/",
			"/GET_OP1_OBJ_ZVAL_PTR_PTR\(([^)]*)\)/",
			"/GET_OP2_OBJ_ZVAL_PTR_PTR\(([^)]*)\)/",
			"/IS_OP1_TMP_FREE\(\)/",
			"/IS_OP2_TMP_FREE\(\)/",
			"/FREE_OP1\(\)/",
			"/FREE_OP2\(\)/",
			"/FREE_OP1_IF_VAR\(\)/",
			"/FREE_OP2_IF_VAR\(\)/",
			"/FREE_OP1_VAR_PTR\(\)/",
			"/FREE_OP2_VAR_PTR\(\)/",
			"/^#ifdef\s+ZEND_VM_SPEC\s*\n/m",
			"/^#ifndef\s+ZEND_VM_SPEC\s*\n/m",
			"/\!defined\(ZEND_VM_SPEC\)/m",
			"/defined\(ZEND_VM_SPEC\)/m",
			"/ZEND_VM_C_LABEL\(\s*([A-Za-z_]*)\s*\)/m",
			"/ZEND_VM_C_GOTO\(\s*([A-Za-z_]*)\s*\)/m",
			"/^#if\s+1\s*\\|\\|.*[^\\\\]$/m",
			"/^#if\s+0\s*&&.*[^\\\\]$/m"
		),
		array(
			$op1_type[$op1],
			$op2_type[$op2],
			$op1_free[$op1],
			$op2_free[$op2],
			$op1_get_zval_ptr[$op1],
			$op2_get_zval_ptr[$op2],
			$op1_get_zval_ptr_ptr[$op1],
			$op2_get_zval_ptr_ptr[$op2],
			$op1_get_obj_zval_ptr[$op1],
			$op2_get_obj_zval_ptr[$op2],
			$op1_get_obj_zval_ptr_ptr[$op1],
			$op2_get_obj_zval_ptr_ptr[$op2],
			$op1_is_tmp_free[$op1],
			$op2_is_tmp_free[$op2],
			$op1_free_op[$op1],
			$op2_free_op[$op2],
			$op1_free_op_if_var[$op1],
			$op2_free_op_if_var[$op2],
			$op1_free_op_var_ptr[$op1],
			$op2_free_op_var_ptr[$op2],
			($op1!="ANY"||$op2!="ANY")?"#if 1\n":"#if 0\n",
			($op1!="ANY"||$op2!="ANY")?"#if 0\n":"#if 1\n",
			($op1!="ANY"||$op2!="ANY")?"0":"1",
			($op1!="ANY"||$op2!="ANY")?"1":"0",
			"\\1".(($spec && $kind != ZEND_VM_KIND_CALL)?("_SPEC".$prefix[$op1].$prefix[$op2]):""),
			"goto \\1".(($spec && $kind != ZEND_VM_KIND_CALL)?("_SPEC".$prefix[$op1].$prefix[$op2]):""),
			"#if 1",
			"#if 0",
		),
		$code);

	// Updating code according to selected threading model
	switch($kind) {
		case ZEND_VM_KIND_CALL:
			$code = preg_replace(
				array(
					"/EXECUTE_DATA/m",
					"/ZEND_VM_DISPATCH_TO_HANDLER\(\s*([A-Z_]*)\s*\)/m",
					"/ZEND_VM_DISPATCH_TO_HELPER\(\s*([A-Za-z_]*)\s*\)/me",
					"/ZEND_VM_DISPATCH_TO_HELPER_EX\(\s*([A-Za-z_]*)\s*,\s*[A-Za-z_]*\s*,\s*(.*)\s*\);/me",
				),
				array(
					"execute_data",
					"return \\1".($spec?"_SPEC":"").$prefix[$op1].$prefix[$op2]."_HANDLER(ZEND_OPCODE_HANDLER_ARGS_PASSTHRU)",
					"'return '.helper_name('\\1',$spec,'$op1','$op2').'(ZEND_OPCODE_HANDLER_ARGS_PASSTHRU)'",
					"'return '.helper_name('\\1',$spec,'$op1','$op2').'(\\2, ZEND_OPCODE_HANDLER_ARGS_PASSTHRU);'",
				),
				$code);
			break;
		case ZEND_VM_KIND_SWITCH:
			$code = preg_replace(
				array(
					"/EXECUTE_DATA/m",
					"/ZEND_VM_DISPATCH_TO_HANDLER\(\s*([A-Z_]*)\s*\)/m",
					"/ZEND_VM_DISPATCH_TO_HELPER\(\s*([A-Za-z_]*)\s*\)/me",
					"/ZEND_VM_DISPATCH_TO_HELPER_EX\(\s*([A-Za-z_]*)\s*,\s*([A-Za-z_]*)\s*,\s*(.*)\s*\);/me",
				),
				array(
					"&execute_data",
					"goto \\1".($spec?"_SPEC":"").$prefix[$op1].$prefix[$op2]."_LABEL",
					"'goto '.helper_name('\\1',$spec,'$op1','$op2')",
					"'\\2 = \\3; goto '.helper_name('\\1',$spec,'$op1','$op2').';'",
				),
				$code);
			break;
		case ZEND_VM_KIND_GOTO:
			$code = preg_replace(
				array(
					"/EXECUTE_DATA/m",
					"/ZEND_VM_DISPATCH_TO_HANDLER\(\s*([A-Z_]*)\s*\)/m",
					"/ZEND_VM_DISPATCH_TO_HELPER\(\s*([A-Za-z_]*)\s*\)/me",
					"/ZEND_VM_DISPATCH_TO_HELPER_EX\(\s*([A-Za-z_]*)\s*,\s*([A-Za-z_]*)\s*,\s*(.*)\s*\);/me",
				),
				array(
					"&execute_data",
					"goto \\1".($spec?"_SPEC":"").$prefix[$op1].$prefix[$op2]."_HANDLER",
					"'goto '.helper_name('\\1',$spec,'$op1','$op2')",
					"'\\2 = \\3; goto '.helper_name('\\1',$spec,'$op1','$op2').';'",
				),
				$code);
			break;
		case ZEND_VM_KIND_GOTO2:
			$code = preg_replace(
				array(
					"/EXECUTE_DATA/m",
					"/ZEND_VM_DISPATCH_TO_HANDLER\(\s*([A-Z_]*)\s*\)/m",
					"/ZEND_VM_DISPATCH_TO_HELPER\(\s*([A-Za-z_]*)\s*\)/me",
					"/ZEND_VM_DISPATCH_TO_HELPER_EX\(\s*([A-Za-z_]*)\s*,\s*([A-Za-z_]*)\s*,\s*(.*)\s*\);/me",
				),
				array(
					"execute_data",
					"goto \\1".($spec?"_SPEC":"").$prefix[$op1].$prefix[$op2]."_HANDLER",
					"'goto '.helper_name('\\1',$spec,'$op1','$op2')",
					"'\\2 = \\3; goto '.helper_name('\\1',$spec,'$op1','$op2').';'",
				),
				$code);
			break;
	}

	/* Remove unused free_op1 and free_op2 declarations */
	if ($spec && preg_match_all('/^\s*zend_free_op\s+[^;]+;\s*$/me', $code, $matches, PREG_SET_ORDER)) {
		$n = 0;
		foreach ($matches as $match) {
		  $code = preg_replace('/'.preg_quote($match[0],'/').'/', "\$D$n", $code);
		  ++$n;
		}
		$del_free_op1 = (strpos($code, "free_op1") === false);
		$del_free_op2 = (strpos($code, "free_op2") === false);
		$n = 0;
		foreach ($matches as $match) {
			$dcl = $match[0];
			$changed = 0;
			if ($del_free_op1 && strpos($dcl, "free_op1") !== false) {
				$dcl = preg_replace("/free_op1\s*,\s*/", "", $dcl);
				$dcl = preg_replace("/free_op1\s*;/", ";", $dcl);
				$changed = 1;
			}
			if ($del_free_op2 && strpos($dcl, "free_op2") !== false) {
				$dcl = preg_replace("/free_op2\s*,\s*/", "", $dcl);
				$dcl = preg_replace("/free_op2\s*;/", ";", $dcl);
				$changed = 1;
			}
			if ($changed) {
				$dcl = preg_replace("/,\s*;/", ";", $dcl);
				$dcl = preg_replace("/zend_free_op\s*;/", "", $dcl);
			}
		  $code = preg_replace("/\\\$D$n/", $dcl, $code);
		  ++$n;
		}
	}

	/* Remove unnecessary ';' */
	$code = preg_replace('/^\s*;\s*$/m', '', $code);

	/* Remove WS */
	$code = preg_replace('/[ \t]+\n/m', "\n", $code);

	out($f, $code);
}

// Generates opcode handler
function gen_handler($f, $spec, $kind, $name, $op1, $op2, $define, $use, $code, $lineno) {
	global $definition_file, $prefix, $typecode, $opnames;

	if (ZEND_VM_LINES) {
		out($f, "#line $lineno \"$definition_file\"\n");
	}
	
	if($define !== "") {
		out($f, "#if $define\n");
	}

	// Generate opcode handler's entry point according to selected threading model
	switch($kind) {
		case ZEND_VM_KIND_CALL:
			out($f,"static int ".$name.($spec?"_SPEC":"").$prefix[$op1].$prefix[$op2]."_HANDLER(ZEND_OPCODE_HANDLER_ARGS)\n");
			break;
		case ZEND_VM_KIND_SWITCH:
			if ($spec) {
				out($f,"case ".((string)($opnames[$name]*25+($typecode[$op1]*5)+$typecode[$op2])).": /*".$name."_SPEC".$prefix[$op1].$prefix[$op2]."_HANDLER*/");
			} else {
				out($f,"case ".$name.":");
			}
			if ($use) {
				// This handler is used by other handlers. We will add label to call it.
				out($f," ".$name.($spec?"_SPEC":"").$prefix[$op1].$prefix[$op2]."_LABEL:\n");
			} else {
				out($f,"\n");
			}
			break;
		case ZEND_VM_KIND_GOTO:
		case ZEND_VM_KIND_GOTO2:
			if(ZEND_VM_ALIGNMENT) {
				out($f,"asm(\".align ".ZEND_VM_ALIGNMENT."\");\n");
			}
			
			out($f,$name.($spec?"_SPEC":"").$prefix[$op1].$prefix[$op2]."_HANDLER:\n");
			break;
	}

	// Generate opcode handler's code
	gen_code($f, $spec, $kind, $code, $op1, $op2);
	
	if($define !== "") {
		out($f, "#endif\n");
	}
}

// Generates helper
function gen_helper($f, $spec, $kind, $name, $op1, $op2, $param, $code, $lineno) {
	global $definition_file, $prefix;

	if (ZEND_VM_LINES) {
		out($f, "#line $lineno \"$definition_file\"\n");
	}

	// Generate helper's entry point according to selected threading model
	switch($kind) {
		case ZEND_VM_KIND_CALL:
			if ($param == null) {
			  // Helper without parameters
				out($f, "static int ".$name.($spec?"_SPEC":"").$prefix[$op1].$prefix[$op2]."(ZEND_OPCODE_HANDLER_ARGS)\n");
			} else {
			  // Helper with parameter
				out($f, "static int ".$name.($spec?"_SPEC":"").$prefix[$op1].$prefix[$op2]."(".$param.", ZEND_OPCODE_HANDLER_ARGS)\n");
			}
			break;
		case ZEND_VM_KIND_SWITCH:
			out($f, $name.($spec?"_SPEC":"").$prefix[$op1].$prefix[$op2].":\n");
			break;
		case ZEND_VM_KIND_GOTO:
		case ZEND_VM_KIND_GOTO2:
			out($f, $name.($spec?"_SPEC":"").$prefix[$op1].$prefix[$op2].":\n");
			break;
	}

	// Generate helper's code
	gen_code($f, $spec, $kind, $code, $op1, $op2);
}

// Generates array of opcode handlers (specialized or unspecialized)
function gen_labels($f, $spec, $kind, $prolog) {
	global $opcodes, $op_types, $prefix, $typecode;

	$next = 0;
	if ($spec) {
	  // Emit labels for specialized executor

	  // For each opcode in opcode number order
		foreach($opcodes as $num => $dsc) {
			if($kind !== ZEND_VM_KIND_CALL && $dsc["define"] !== "") {
				out($f, "#if {$dsc["define"]}\n");
			}
			
			while ($next != $num) {
			  // If some opcode numbers are not used then fill hole with pointers
			  // to handler of undefined opcode
				$op1t = $op_types;
				// For each op1.op_type except ANY
				foreach($op1t as $op1) {
					if ($op1 != "ANY") {
						$op2t = $op_types;
						// For each op2.op_type except ANY
						foreach($op2t as $op2) {
							if ($op2 != "ANY") {
							  // Emit pointer to handler of undefined opcode
								switch ($kind) {
									case ZEND_VM_KIND_CALL:
										out($f,$prolog."ZEND_NULL_HANDLER,\n");
										break;
									case ZEND_VM_KIND_SWITCH:
										out($f,$prolog."(opcode_handler_t)-1,\n");
										break;
									case ZEND_VM_KIND_GOTO:
									case ZEND_VM_KIND_GOTO2:
										out($f,$prolog."(opcode_handler_t)&&ZEND_NULL_HANDLER,\n");
										break;
								}
							}
						}
					}
				}
				$next++;
			}
			$next = $num + 1;
			$op1t = $op_types;
			// For each op1.op_type except ANY
			foreach($op1t as $op1) {
				if ($op1 != "ANY") {
					if (!isset($dsc["op1"][$op1])) {
						// Try to use unspecialized handler
						$op1 = "ANY";
					}
					$op2t = $op_types;
					// For each op2.op_type except ANY
					foreach($op2t as $op2) {
						if ($op2 != "ANY") {
							if (!isset($dsc["op2"][$op2])) {
								// Try to use unspecialized handler
								$op2 = "ANY";
							}
							// Check if specialized handler is defined
							if (isset($dsc["op1"][$op1]) &&
							    isset($dsc["op2"][$op2])) {
							  // Emit pointer to specialized handler
								switch ($kind) {
									case ZEND_VM_KIND_CALL:
										if($dsc["define"] !== "") {
											out($f, "#if {$dsc["define"]}\n");
										}
										
										out($f,$prolog.$dsc["op"]."_SPEC".$prefix[$op1].$prefix[$op2]."_HANDLER,\n");
										
										if($dsc["define"] !== "") {
											out($f, "#else\n");
											out($f,$prolog."ZEND_NULL_HANDLER,\n");
											out($f,"#endif\n");
										}
										
										break;
									case ZEND_VM_KIND_SWITCH:
										out($f,$prolog."(opcode_handler_t)".((string)($num*25+$typecode[$op1]*5+$typecode[$op2])).",\n");
										break;
									case ZEND_VM_KIND_GOTO:
									case ZEND_VM_KIND_GOTO2:
										out($f,$prolog."(opcode_handler_t)&&".$dsc["op"]."_SPEC".$prefix[$op1].$prefix[$op2]."_HANDLER,\n");
										break;
								}
							} else {
							  // Emit pinter to handler of undefined opcode
								switch ($kind) {
									case ZEND_VM_KIND_CALL:
										out($f,$prolog."ZEND_NULL_HANDLER,\n");
										break;
									case ZEND_VM_KIND_SWITCH:
										out($f,$prolog."(opcode_handler_t)-1,\n");
										break;
									case ZEND_VM_KIND_GOTO:
									case ZEND_VM_KIND_GOTO2:
										out($f,$prolog."(opcode_handler_t)&&ZEND_NULL_HANDLER,\n");
										break;
								}
							}
						}
					}
				}
			}
			
			if($kind !== ZEND_VM_KIND_CALL && $dsc["define"] !== "") {
				out($f, "#endif\n");
			}
		}
	} else {
	  // Emit labels for unspecialized executor

	  // For each opcode in opcode number order
		foreach($opcodes as $num => $dsc) {
			while ($next != $num) {
			  // If some opcode numbers are not used then fill hole with pointers
			  // to handler of undefined opcode
				switch ($kind) {
					case ZEND_VM_KIND_CALL:
						out($f,$prolog."ZEND_NULL_HANDLER,\n");
						break;
					case ZEND_VM_KIND_SWITCH:
						out($f,$prolog."(opcode_handler_t)-1,\n");
						break;
					case ZEND_VM_KIND_GOTO:
					case ZEND_VM_KIND_GOTO2:
						out($f,$prolog."(opcode_handler_t)&&ZEND_NULL_HANDLER,\n");
						break;
				}
				$next++;
			}
			$next = $num+1;
		  // Emit pointer to unspecialized handler
			switch ($kind) {
				case ZEND_VM_KIND_CALL:
					out($f,$prolog.$dsc["op"]."_HANDLER,\n");
					break;
				case ZEND_VM_KIND_SWITCH:
					out($f,$prolog."(opcode_handler_t)".((string)$num).",\n");
					break;
				case ZEND_VM_KIND_GOTO:
				case ZEND_VM_KIND_GOTO2:
					out($f,$prolog."(opcode_handler_t)&&".$dsc["op"]."_HANDLER,\n");
					break;
			}
		}
	}

	// Emit last handler's label (undefined opcode)
	switch ($kind) {
		case ZEND_VM_KIND_CALL:
			out($f,$prolog."ZEND_NULL_HANDLER\n");
			break;
		case ZEND_VM_KIND_SWITCH:
			out($f,$prolog."(opcode_handler_t)-1\n");
			break;
		case ZEND_VM_KIND_GOTO:
		case ZEND_VM_KIND_GOTO2:
			out($f,$prolog."(opcode_handler_t)&&ZEND_NULL_HANDLER\n");
			break;
	}
}

// Generates handler for undefined opcodes (CALL threading model)
function gen_null_handler($f) {
	static $done = 0;

	// New and all executors with CALL threading model can use the same handler
	// for undefined opcodes, do we emit code for it only once
	if (!$done) {
		$done = 1;
		out($f,"static int ZEND_NULL_HANDLER(ZEND_OPCODE_HANDLER_ARGS)\n");
		out($f,"{\n");
		out($f,"\tzend_error_noreturn(E_ERROR, \"Invalid opcode %d/%d/%d.\", EX(opline)->opcode, EX(opline)->op1.op_type, EX(opline)->op2.op_type);\n");
		out($f,"\tZEND_VM_RETURN_FROM_EXECUTE_LOOP();\n");
		out($f,"}\n\n");
	}
}

// Generates all opcode handlers and helpers (specialized or unspecilaized)
function gen_executor_code($f, $spec, $kind, $prolog) {
	global $list, $opcodes, $helpers, $op_types, $typecode;

	if ($spec) {
		$op1t = $op_types;
		$op2t = $op_types;
		
		if(ZEND_OP_TYPE_DEFINES) {
			// build the spec defines...
			foreach ($list as $lineno => $dsc) {
				if (isset($dsc["handler"])) {
					$num = $dsc["handler"];
					$val = 0;
					foreach($opcodes[$num]["op1"] as $t => $bleh) {
						foreach($typecode as $tt => $v) {
							if($t === "ANY" || $t === $tt) {
								$val += (1 << $v);
							}
						}
					}
					
					out($f, "#define {$opcodes[$num]['op']}_TYPES_OP1 $val\n");
					
					$val = 0;
					foreach($opcodes[$num]["op2"] as $t => $bleh) {
						foreach($typecode as $tt => $v) {
							if($t === "ANY" || $t === $tt) {
								$val += (1 << $v);
							}
						}
					}
					
					out($f, "#define {$opcodes[$num]['op']}_TYPES_OP2 $val\n");
				}
			}
		}
	
		// Produce specialized executor
		// for each op1.op_type
		foreach($op1t as $op1) {
			// for each op2.op_type
			foreach($op2t as $op2) {
				// for each handlers in helpers in original order
				foreach ($list as $lineno => $dsc) {
					if (isset($dsc["handler"])) {
						$num = $dsc["handler"];
						// Check if handler accepts such types of operands (op1 and op2)
						if (isset($opcodes[$num]["op1"][$op1]) &&
						    isset($opcodes[$num]["op2"][$op2])) {
						  // Generate handler code
							gen_handler($f, 1, $kind, $opcodes[$num]["op"], $op1, $op2, $opcodes[$num]["define"], isset($opcodes[$num]["use"]), $opcodes[$num]["code"], $lineno);
						}
					} else if (isset($dsc["helper"])) {
						$num = $dsc["helper"];
						// Check if handler accepts such types of operands (op1 and op2)
						if (isset($helpers[$num]["op1"][$op1]) &&
						    isset($helpers[$num]["op2"][$op2])) {
						  // Generate helper code
							gen_helper($f, 1, $kind, $num, $op1, $op2, $helpers[$num]["param"], $helpers[$num]["code"], $lineno);
						}
					} else {
						var_dump($dsc);
						die("??? $kind:$num\n");
					}
				}
			}
		}
	} else {
		// Produce unspecialized executor

		// for each handlers in helpers in original order
		foreach ($list as $lineno => $dsc) {
			if (isset($dsc["handler"])) {
				$num = $dsc["handler"];
			  // Generate handler code
				gen_handler($f, 0, $kind, $opcodes[$num]["op"], "ANY", "ANY", $opcodes[$num]["define"], isset($opcodes[$num]["use"]), $opcodes[$num]["code"], $lineno);
			} else if (isset($dsc["helper"])) {
				$num = $dsc["helper"];
			  // Generate helper code
				gen_helper($f, 0, $kind, $num, "ANY", "ANY", $helpers[$num]["param"], $helpers[$num]["code"], $lineno);
			} else {
				var_dump($dsc);
				die("??? $kind:$num\n");
			}
		}
	}

	if (ZEND_VM_LINES) {
		// Reset #line directives
		out_line($f);
	}

	// Generate handler for undefined opcodes
	switch ($kind) {
		case ZEND_VM_KIND_CALL:
			gen_null_handler($f);
			break;
		case ZEND_VM_KIND_SWITCH:
			out($f,"default:\n");
			out($f,"\tzend_error_noreturn(E_ERROR, \"Invalid opcode %d/%d/%d.\", EX(opline)->opcode, EX(opline)->op1.op_type, EX(opline)->op2.op_type);\n");
			out($f,"\tZEND_VM_RETURN_FROM_EXECUTE_LOOP();\n");
			break;
		case ZEND_VM_KIND_GOTO2:
			if(ZEND_VM_ALIGNMENT) {
				out($f,"asm(\".align ".ZEND_VM_ALIGNMENT."\");\n");
			}
			
			out($f,"ZEND_RETURN_HANDLER:\n\treturn;\n");
		case ZEND_VM_KIND_GOTO:
			if(ZEND_VM_ALIGNMENT) {
				out($f,"asm(\".align ".ZEND_VM_ALIGNMENT."\");\n");
			}
			
			out($f,"ZEND_NULL_HANDLER:\n");
			out($f,"\tzend_error_noreturn(E_ERROR, \"Invalid opcode %d/%d/%d.\", EX(opline)->opcode, EX(opline)->op1.op_type, EX(opline)->op2.op_type);\n");
			out($f,"\tZEND_VM_RETURN_FROM_EXECUTE_LOOP();\n");
			break;
	}
}

function skip_blanks($f, $prolog, $epilog) {
	if (trim($prolog) != "" || trim($epilog) != "") {
		out($f, $prolog.$epilog);
	}
}

// Generates executor from skeleton file and definition (specialized or unspecialized)
function gen_executor($f, $skl, $spec, $kind, $executor_name, $initializer_name, $old) {
	global $params, $skeleton_file, $line_no;

	$lineno      = 0;
	foreach ($skl as $line) {
	  // Skeleton file contains special markers in form %NAME% those are
	  // substituted by custom code
		if (preg_match("/(.*)[{][%]([A-Z_]*)[%][}](.*)/", $line, $m)) {
			switch ($m[2]) {
				case "DEFINES":
					if (ZEND_VM_OLD_EXECUTOR) {
						out($f,"static int zend_vm_old_executor = 0;\n\n");
					}
					out($f,"static opcode_handler_t zend_vm_get_opcode_handler(zend_uchar opcode, int op1_type, int op2_type);\n\n");
					switch ($kind) {
						case ZEND_VM_KIND_CALL:
							out($f,"\n");
							out($f,"#define ZEND_VM_CONTINUE() return 0\n");
							out($f,"#define ZEND_VM_RETURN() return 1\n");
							out($f,"#define ZEND_VM_DISPATCH(opcode, opline) return zend_vm_get_opcode_handler(opcode, opline->op1.op_type, opline->op2.op_type)(ZEND_OPCODE_HANDLER_ARGS_PASSTHRU);\n\n");
							out($f,"#define ZEND_OPCODE_HANDLER_ARGS_PASSTHRU_INTERNAL execute_data TSRMLS_CC\n");
							break;
						case ZEND_VM_KIND_SWITCH:
							out($f,"\n");
							out($f,"#define ZEND_VM_CONTINUE() goto zend_vm_continue\n");
							out($f,"#define ZEND_VM_RETURN()   return\n");
							out($f,"#define ZEND_VM_DISPATCH(opcode, opline) dispatch_handler = zend_vm_get_opcode_handler(opcode, opline->op1.op_type, opline->op2.op_type); goto zend_vm_dispatch;\n\n");
							out($f,"#define ZEND_OPCODE_HANDLER_ARGS_PASSTHRU_INTERNAL &execute_data TSRMLS_CC\n");
							break;
						case ZEND_VM_KIND_GOTO:
							out($f,"\n");
							out($f,"#define ZEND_VM_CONTINUE() goto *(void**)(EX(opline)->handler)\n");
							out($f,"#define ZEND_VM_RETURN()   return\n");
							out($f,"#define ZEND_VM_DISPATCH(opcode, opline) goto *(void**)(zend_vm_get_opcode_handler(opcode, opline->op1.op_type, opline->op2.op_type));\n\n");
							out($f,"#define ZEND_OPCODE_HANDLER_ARGS_PASSTHRU_INTERNAL &execute_data TSRMLS_CC\n");
							break;
						case ZEND_VM_KIND_GOTO2:
							out($f,"\n");
							out($f,"#define ZEND_VM_CONTINUE() goto *(void**)(EX(opline)->handler)\n");
							//out($f,"#define ZEND_VM_RETURN()   return\n");
							out($f,"#define ZEND_VM_RETURN()   goto ZEND_RETURN_HANDLER\n");
							out($f,"#define ZEND_VM_DISPATCH(opcode, opline) goto *(void**)(zend_vm_get_opcode_handler(opcode, opline->op1.op_type, opline->op2.op_type));\n\n");
							out($f,"#define ZEND_OPCODE_HANDLER_ARGS_PASSTHRU_INTERNAL execute_data TSRMLS_CC\n");
							break;
					}
					
					out($f,"#undef EX\n");
					if($kind == ZEND_VM_KIND_GOTO2) {
						out($f,"#define EX(element) execute_data->element\n");
					} else {
						out($f,"#define EX(element) execute_data.element\n");
					}
					
					out($f,"#define ZEND_OPCODE_HANDLER_ARGS zend_execute_data *execute_data TSRMLS_DC\n");
					out($f,"#define ZEND_OPCODE_HANDLER_ARGS_PASSTHRU execute_data TSRMLS_CC\n");
					
					break;
				case "EXECUTOR_NAME":
					out($f, $m[1].$executor_name.$m[3]."\n");
					break;
				case "HELPER_VARS":
					if ($kind != ZEND_VM_KIND_CALL) {
						if ($kind == ZEND_VM_KIND_SWITCH) {
							out($f,$m[1]."opcode_handler_t dispatch_handler;\n");
						}
					  // Emit local variables those are used for helpers' parameters
						foreach ($params as $param => $x) {
							out($f,$m[1].$param.";\n");
						}
					} else {
						skip_blanks($f, $m[1], $m[3]."\n");
					}
					if($kind == ZEND_VM_KIND_GOTO2) {
						out($f, $m[1]."zend_execute_data* execute_data = do_alloca(sizeof(zend_execute_data));\n");
					} else {
						out($f, $m[1]."zend_execute_data execute_data;\n");
					}
					break;
				case "INTERNAL_LABELS":
					if ($kind == ZEND_VM_KIND_GOTO || $kind == ZEND_VM_KIND_GOTO2) {
					  // Emit array of labels of opcode handlers and code for
					  // zend_opcode_handlers initialization
						$prolog = $m[1];
						out($f,$prolog."if (op_array == NULL) {\n");
						out($f,$prolog."\tstatic const opcode_handler_t labels[] = {\n");
						gen_labels($f, $spec, $kind, $prolog."\t\t");
						out($f,$prolog."\t};\n");
						out($f,$prolog."\tzend_opcode_handlers = (opcode_handler_t*)labels;\n");
						out($f,$prolog."\treturn;\n");
						out($f,$prolog."}\n");
					} else {
						skip_blanks($f, $m[1], $m[3]);
					}
					break;
				case "ZEND_VM_CONTINUE_LABEL":
					if ($kind == ZEND_VM_KIND_SWITCH) {
					  // Only SWITCH dispatch method use it
						out($f,"zend_vm_continue:".$m[3]."\n");
					} else {
						skip_blanks($f, $m[1], $m[3]);
					}
					break;
				case "ZEND_VM_DISPATCH":
				  // Emit code that dispatches to opcode handler
					switch ($kind) {
						case ZEND_VM_KIND_CALL:
							out($f, $m[1]."if (EX(opline)->handler(&execute_data TSRMLS_CC) > 0)".$m[3]."\n");
							break;
						case ZEND_VM_KIND_SWITCH:
							out($f, $m[1]."dispatch_handler = EX(opline)->handler;\nzend_vm_dispatch:\n".$m[1]."switch ((int)dispatch_handler)".$m[3]."\n");
							break;
						case ZEND_VM_KIND_GOTO:
						case ZEND_VM_KIND_GOTO2:
							out($f, $m[1]."goto *(void**)(EX(opline)->handler);".$m[3]."\n");
							break;
					}
					break;
				case "INTERNAL_EXECUTOR":
					if ($kind == ZEND_VM_KIND_CALL) {
					  // Executor is defined as a set of functions
						out($f, $m[1]."return;".$m[3]."\n");
					} else {
					  // Emit executor code
						gen_executor_code($f, $spec, $kind, $m[1]);
					}
					break;
				case "EXTERNAL_EXECUTOR":
					if ($kind == ZEND_VM_KIND_CALL) {
					  // Unspecialized executor with CALL threading is the same as the
					  // old one, so we don't need to produce code twitch
						if (!$old || ZEND_VM_SPEC || (ZEND_VM_KIND != ZEND_VM_KIND_CALL)) {
							out($f,"#undef EX\n");
							out($f,"#define EX(element) execute_data->element\n\n");
						  // Emit executor code
							gen_executor_code($f, $spec, $kind, $m[1]);
						}
					}
					break;
				case "EXECUTE_DATA_ASSIGN":
					if($kind == ZEND_VM_KIND_GOTO2) {
						out($f, $m[1]."EG(current_execute_data) = execute_data;".$m[3]."\n");
					} else {
						out($f, $m[1]."EG(current_execute_data) = &execute_data;".$m[3]."\n");
					}
					break;
				case "INITIALIZER_NAME":
					out($f, $m[1].$initializer_name.$m[3]."\n");
					break;
				case "EXTERNAL_LABELS":
				  // Emit code that initializes zend_opcode_handlers array
					$prolog = $m[1];
					if ($kind == ZEND_VM_KIND_GOTO || $kind == ZEND_VM_KIND_GOTO2) {
					  // Labels are defined in the executor itself, so we call it
					  // with op_array NULL and it sets zend_opcode_handlers array
						out($f,$prolog."TSRMLS_FETCH();\n");
						out($f,$prolog."zend_execute(NULL TSRMLS_CC);\n");
					} else {
						if ($old) {
						  // Reserving space for user-defined opcodes
							out($f,$prolog."static opcode_handler_t labels[512] = {\n");
						} else {
							out($f,$prolog."static const opcode_handler_t labels[] = {\n");
						}
						gen_labels($f, $spec, $kind, $prolog."\t");
						out($f,$prolog."};\n");
						out($f,$prolog."zend_opcode_handlers = (opcode_handler_t*)labels;\n");
						if ($old) {
						  // Setup old executor
							out($f,$prolog."zend_vm_old_executor = 1;\n");
							out($f,$prolog."zend_execute = old_execute;\n");
						}
					}
					break;
				default:
					die("ERROR: Unknown keyword ".$m[2]." in skeleton file.\n");
			}
		} else {
		  // Copy the line as is
			out($f, $line);
		}
	}
}

function gen_vm($def, $skel) {
	global $definition_file, $skeleton_file, $executor_file,
		$op_types, $list, $opcodes, $helpers, $params, $opnames;

	// Load definition file
	$in = @file($def);
	if (!$in) {
		die("ERROR: Can not open definition file '$def'\n");
	}
	// We need absolute path to definition file to use it in #line directives
	$definition_file = realpath($def);

	// Load skeleton file
	$skl = @file($skel);
	if (!$skl) {
		die("ERROR: Can not open skeleton file '$skel'\n");
	}
	// We need absolute path to skeleton file to use it in #line directives
	$skeleton_file = realpath($skel);

	// Parse definition file into tree
	$lineno         = 0;
	$handler        = null;
	$helper         = null;
	$max_opcode_len = 0;
	$max_opcode     = 0;
	$export         = array();
	foreach ($in as $line) {
		++$lineno;
		if (strpos($line,"ZEND_VM_HANDLER(") === 0 || strpos($line,"ZEND_VM_HANDLER_EX(") === 0) {
		  // Parsing opcode handler's definition
			$define = '';
			if(strpos($line,"ZEND_VM_HANDLER(") === 0) {
				if(preg_match(
					"/^ZEND_VM_HANDLER\(\s*([0-9]+)\s*,\s*([A-Z_]+)\s*,\s*([A-Z|]+)\s*,\s*([A-Z|]+)\s*\)/",
					$line,
					$m) == 0) {
						die("ERROR ($def:$lineno): Invalid ZEND_VM_HANDLER definition.\n");
				}
			} else {
				if(strpos($line,"ZEND_VM_HANDLER_EX(") === 0) {
					if(preg_match(
						"/^ZEND_VM_HANDLER_EX\(\s*([0-9]+)\s*,\s*([A-Z_]+)\s*,\s*([A-Z|]+)\s*,\s*([A-Z|]+)\s*,\s*([A-Z|_]+)\s*\)/",
						$line,
						$m) == 0) {
							die("ERROR ($def:$lineno): Invalid ZEND_VM_HANDLER_EX definition.\n");
					} else {
						$define = $m[5];
					}
				}
			}
			
			
			$code = (int)$m[1];
			$op   = $m[2];
			$len  = strlen($op);
			$op1  = array_flip(explode("|",$m[3]));
			$op2  = array_flip(explode("|",$m[4]));

			if ($len > $max_opcode_len) {
				$max_opcode_len = $len;
			}
			if ($code > $max_opcode) {
				$max_opcode = $code;
			}
			if (isset($opcodes[$code])) {
				die("ERROR ($def:$lineno): Opcode with code '$code' is already defined.\n");
			}
			if (isset($opnames[$op])) {
				die("ERROR ($def:$lineno): Opcode with name '$op' is already defined.\n");
			}
			$opcodes[$code] = array("op"=>$op,"op1"=>$op1,"op2"=>$op2,"code"=>"", "define" => $define);
			$opnames[$op] = $code;
			$handler = $code;
			$helper = null;
			$list[$lineno] = array("handler"=>$handler);
		} else if (strpos($line,"ZEND_VM_HELPER(") === 0) {
		  // Parsing helper's definition
			if (preg_match(
					"/^ZEND_VM_HELPER\(\s*([A-Za-z_]+)\s*,\s*([A-Z|]+)\s*,\s*([A-Z|]+)\s*\)/",
					$line,
					$m) == 0) {
				die("ERROR ($def:$lineno): Invalid ZEND_VM_HELPER definition.\n");
			}
			$helper = $m[1];
			$op1    = array_flip(explode("|",$m[2]));
			$op2    = array_flip(explode("|",$m[3]));
			if (isset($helpers[$helper])) {
				die("ERROR ($def:$lineno): Helper with name '$helper' is already defined.\n");
			}
			$helpers[$helper] = array("op1"=>$op1,"op2"=>$op2,"param"=>null,"code"=>"");
			$handler = null;
			$list[$lineno] = array("helper"=>$helper);
		} else if (strpos($line,"ZEND_VM_HELPER_EX(") === 0) {
		  // Parsing helper with parameter definition
			if (preg_match(
					"/^ZEND_VM_HELPER_EX\(\s*([A-Za-z_]+)\s*,\s*([A-Z|]+)\s*,\s*([A-Z|]+)\s*,\s*(.*)\s*\)/",
					$line,
					$m) == 0) {
				die("ERROR ($def:$lineno): Invalid ZEND_VM_HELPER definition.\n");
			}
			$helper = $m[1];
			$op1    = array_flip(explode("|",$m[2]));
			$op2    = array_flip(explode("|",$m[3]));
			$param  = $m[4];
			if (isset($helpers[$helper])) {
				die("ERROR ($def:$lineno): Helper with name '$helper' is already defined.\n");
			}

			// Store parameter
			$params[$param] = 1;

			$helpers[$helper] = array("op1"=>$op1,"op2"=>$op2,"param"=>$param,"code"=>"");
			$handler = null;
			$list[$lineno] = array("helper"=>$helper);
		} else if (strpos($line,"ZEND_VM_EXPORT_HANDLER(") === 0) {
			if (preg_match(
					"/^ZEND_VM_EXPORT_HANDLER\(\s*([A-Za-z_]+)\s*,\s*([A-Z_]+)\s*\)/",
					$line,
					$m) == 0) {
				die("ERROR ($def:$lineno): Invalid ZEND_VM_EXPORT_HANDLER definition.\n");
			}
			if (!isset($opnames[$m[2]])) {
				die("ERROR ($def:$lineno): opcode '{$m[2]}' is not defined.\n");
			}
			$export[] = array("handler",$m[1],$m[2]);
		} else if (strpos($line,"ZEND_VM_EXPORT_HELPER(") === 0) {
			if (preg_match(
					"/^ZEND_VM_EXPORT_HELPER\(\s*([A-Za-z_]+)\s*,\s*([A-Za-z_]+)\s*\)/",
					$line,
					$m) == 0) {
				die("ERROR ($def:$lineno): Invalid ZEND_VM_EXPORT_HELPER definition.\n");
			}
			if (!isset($helpers[$m[2]])) {
				die("ERROR ($def:$lineno): helper '{$m[2]}' is not defined.\n");
			}
			$export[] = array("helper",$m[1],$m[2]);
		} else if ($handler !== null) {
		  // Add line of code to current opcode handler
			$opcodes[$handler]["code"] .= $line;
		} else if ($helper !== null) {
		  // Add line of code to current helper
			$helpers[$helper]["code"] .= $line;
		}
	}

	ksort($opcodes);

	// Search for opcode handlers those are used by other opcode handlers
	foreach ($opcodes as $dsc) {
		if (preg_match("/ZEND_VM_DISPATCH_TO_HANDLER\(\s*([A-Z_]*)\s*\)/m", $dsc["code"], $m)) {
			$op = $m[1];
			if (!isset($opnames[$op])) {
				die("ERROR ($def:$lineno): Opcode with name '$op' is not defined.\n");
			}
			$code = $opnames[$op];
			$opcodes[$code]['use'] = 1;
		}
	}

	// Generate opcode #defines (zend_vm_opcodes.h)
	$code_len = strlen((string)$max_opcode);
	$f = fopen("zend_vm_opcodes.h", "w+") or die("ERROR: Cannot create zend_vm_opcodes.h\n");

	// Insert header
	out($f, $GLOBALS['header_text']);

	for($i = 0; $i < $max_opcode; $i++) {
		if(empty($opcodes[$i])) {
			echo "op #$i ($max_opcode) is available\n";
		}
	}

	foreach ($opcodes as $code => $dsc) {
		$code = str_pad((string)$code,$code_len," ",STR_PAD_LEFT);
		$op = str_pad($dsc["op"],$max_opcode_len);
		fputs($f,"#define $op $code\n");
	}
	
	// output the final OP_DATA used for the foreach...
	$code++;
	$op = str_pad("ZEND_OP_DATA", $max_opcode_len);
	fputs($f,"#define $op $code\n");
	
	fclose($f);
	echo "zend_vm_opcodes.h generated successfully.\n";

	// Generate zend_vm_execute.h
	$f = fopen("zend_vm_execute.h", "w+") or die("ERROR: Cannot create zend_vm_execute.h\n");
	$executor_file = realpath("zend_vm_execute.h");

	// Insert header
	out($f, $GLOBALS['header_text']);

	// Support for ZEND_USER_OPCODE
	out($f, "static opcode_handler_t zend_user_opcode_handlers[256] = {");
	for ($i = 0; $i < 255; ++$i) {
		out($f, "(opcode_handler_t)NULL,");
	}
	out($f, "(opcode_handler_t)NULL};\n\n");

	out($f, "static zend_uchar zend_user_opcodes[256] = {");
	for ($i = 0; $i < 255; ++$i) {
		out($f, "$i,");
	}
	out($f, "255};\n\n");

	// Generate specialized executor
	gen_executor($f, $skl, ZEND_VM_SPEC, ZEND_VM_KIND, "execute", "zend_init_opcodes_handlers", 0);

	// Generate un-specialized executor
	if (ZEND_VM_OLD_EXECUTOR) {
		out($f,"\n/* Old executor */\n\n");
		out($f,"#undef EX\n");
		out($f,"#define EX(element) execute_data.element\n\n");
		out($f,"#undef ZEND_VM_CONTINUE\n\n");
		out($f,"#undef ZEND_VM_RETURN\n\n");
		out($f,"#undef ZEND_VM_DISPATCH\n\n");
		out($f,"#undef ZEND_OPCODE_HANDLER_ARGS_PASSTHRU_INTERNAL\n\n");
		gen_executor($f, $skl, 0, ZEND_VM_KIND_CALL, "old_execute", "zend_vm_use_old_executor", 1);
	}

	// Generate zend_vm_get_opcode_handler() function
	out($f, "static opcode_handler_t zend_vm_get_opcode_handler(zend_uchar opcode, int op1_type, int op2_type)\n");
	out($f, "{\n");
	if (!ZEND_VM_SPEC) {
		out($f, "\treturn zend_opcode_handlers[opcode];\n");
	} else {
		if (ZEND_VM_OLD_EXECUTOR) {
			out($f, "\tif (zend_vm_old_executor) {\n");
			out($f, "\t\treturn zend_opcode_handlers[opcode];\n");
			out($f, "\t} else {\n");
		}
		out($f, "\t\tstatic const int zend_vm_decode[] = {\n");
		out($f, "\t\t\t_UNUSED_CODE, /* 0              */\n");
		out($f, "\t\t\t_CONST_CODE,  /* 1 = IS_CONST   */\n");
		out($f, "\t\t\t_TMP_CODE,    /* 2 = IS_TMP_VAR */\n");
		out($f, "\t\t\t_UNUSED_CODE, /* 3              */\n");
		out($f, "\t\t\t_VAR_CODE,    /* 4 = IS_VAR     */\n");
		out($f, "\t\t\t_UNUSED_CODE, /* 5              */\n");
		out($f, "\t\t\t_UNUSED_CODE, /* 6              */\n");
		out($f, "\t\t\t_UNUSED_CODE, /* 7              */\n");
		out($f, "\t\t\t_UNUSED_CODE, /* 8 = IS_UNUSED  */\n");
		out($f, "\t\t\t_UNUSED_CODE, /* 9              */\n");
		out($f, "\t\t\t_UNUSED_CODE, /* 10             */\n");
		out($f, "\t\t\t_UNUSED_CODE, /* 11             */\n");
		out($f, "\t\t\t_UNUSED_CODE, /* 12             */\n");
		out($f, "\t\t\t_UNUSED_CODE, /* 13             */\n");
		out($f, "\t\t\t_UNUSED_CODE, /* 14             */\n");
		out($f, "\t\t\t_UNUSED_CODE, /* 15             */\n");
		out($f, "\t\t\t_CV_CODE      /* 16 = IS_CV     */\n");
		out($f, "\t\t};\n");
		out($f, "\t\treturn zend_opcode_handlers[opcode * 25 + zend_vm_decode[op1_type] * 5 + zend_vm_decode[op2_type]];\n");
		if (ZEND_VM_OLD_EXECUTOR) {
			out($f, "\t}\n");
		}
	}
	out($f, "}\n\n");
	
	// Generate zend_is_valid_opcode() function
	out($f, "ZEND_API int zend_is_valid_opcode(zend_uchar opcode, int op1_type, int op2_type)\n");
	out($f, "{\n");
	if (!ZEND_VM_SPEC) {
		out($f, "\treturn zend_opcode_handlers[opcode] != ZEND_NULL_HANDLER;\n");
	} else {
		if (ZEND_VM_OLD_EXECUTOR) {
			out($f, "\tif (zend_vm_old_executor) {\n");
			out($f, "\t\treturn zend_opcode_handlers[opcode];\n");
			out($f, "\t} else {\n");
		}
		out($f, "\t\tstatic const int zend_vm_decode[] = {\n");
		out($f, "\t\t\t_UNUSED_CODE, /* 0              */\n");
		out($f, "\t\t\t_CONST_CODE,  /* 1 = IS_CONST   */\n");
		out($f, "\t\t\t_TMP_CODE,    /* 2 = IS_TMP_VAR */\n");
		out($f, "\t\t\t_UNUSED_CODE, /* 3              */\n");
		out($f, "\t\t\t_VAR_CODE,    /* 4 = IS_VAR     */\n");
		out($f, "\t\t\t_UNUSED_CODE, /* 5              */\n");
		out($f, "\t\t\t_UNUSED_CODE, /* 6              */\n");
		out($f, "\t\t\t_UNUSED_CODE, /* 7              */\n");
		out($f, "\t\t\t_UNUSED_CODE, /* 8 = IS_UNUSED  */\n");
		out($f, "\t\t\t_UNUSED_CODE, /* 9              */\n");
		out($f, "\t\t\t_UNUSED_CODE, /* 10             */\n");
		out($f, "\t\t\t_UNUSED_CODE, /* 11             */\n");
		out($f, "\t\t\t_UNUSED_CODE, /* 12             */\n");
		out($f, "\t\t\t_UNUSED_CODE, /* 13             */\n");
		out($f, "\t\t\t_UNUSED_CODE, /* 14             */\n");
		out($f, "\t\t\t_UNUSED_CODE, /* 15             */\n");
		out($f, "\t\t\t_CV_CODE      /* 16 = IS_CV     */\n");
		out($f, "\t\t};\n");
		if(ZEND_VM_KIND == ZEND_VM_KIND_CALL) {
			out($f, "\t\treturn zend_opcode_handlers[opcode * 25 + zend_vm_decode[op1_type] * 5 + zend_vm_decode[op2_type]] != ZEND_NULL_HANDLER;\n");
		} else if(ZEND_VM_KIND == ZEND_VM_KIND_SWITCH) {
			out($f, "\t\treturn zend_opcode_handlers[opcode * 25 + zend_vm_decode[op1_type] * 5 + zend_vm_decode[op2_type]] != (opcode_handler_t)-1;\n");
		} else {
			out($f, "\t\treturn zend_opcode_handlers[opcode * 25 + zend_vm_decode[op1_type] * 5 + zend_vm_decode[op2_type]] != zend_opcode_handlers[ZEND_ASSIGN_REF * 25 + 1 + 1];\n");
		}
		if (ZEND_VM_OLD_EXECUTOR) {
			out($f, "\t}\n");
		}
	}
	out($f, "}\n\n");

	// Generate zend_vm_get_opcode_handler() function
	out($f, "ZEND_API void zend_vm_set_opcode_handler(zend_op* op)\n");
	out($f, "{\n");
	out($f, "\top->handler = zend_vm_get_opcode_handler(zend_user_opcodes[op->opcode], op->op1.op_type, op->op2.op_type);\n");
	out($f, "}\n\n");

	// Export handlers and helpers
	if (count($export) > 0 &&
	    !ZEND_VM_OLD_EXECUTOR &&
	    ZEND_VM_KIND != ZEND_VM_KIND_CALL) {
		out($f,"#undef EX\n");
		out($f,"#define EX(element) execute_data->element\n\n");
		out($f,"#undef ZEND_VM_CONTINUE\n");
		out($f,"#undef ZEND_VM_RETURN\n");
		out($f,"#undef ZEND_VM_DISPATCH\n");
		out($f,"#undef ZEND_OPCODE_HANDLER_ARGS_PASSTHRU_INTERNAL\n\n");
		out($f,"#define ZEND_VM_CONTINUE() return 0\n");
		out($f,"#define ZEND_VM_RETURN() return 1\n");
		out($f,"#define ZEND_VM_DISPATCH(opcode, opline) return zend_vm_get_opcode_handler(opcode, opline)(ZEND_OPCODE_HANDLER_ARGS_PASSTHRU);\n\n");
		out($f,"#define ZEND_OPCODE_HANDLER_ARGS_PASSTHRU_INTERNAL execute_data TSRMLS_CC\n\n");
	}
	foreach ($export as $dsk) {
		list($kind, $func, $name) = $dsk;
		out($f, "ZEND_API int $func(");
		if ($kind == "handler") {
			out($f, "ZEND_OPCODE_HANDLER_ARGS)\n");
			$code = $opcodes[$opnames[$name]]['code'];
		} else {
			$h = $helpers[$name];
			if ($h['param'] == null) {
				out($f, "ZEND_OPCODE_HANDLER_ARGS)\n");
			} else {
				out($f, $h['param']. ", ZEND_OPCODE_HANDLER_ARGS)\n");
			}
			$code = $h['code'];
		}
		$done = 0;
		if (ZEND_VM_OLD_EXECUTOR) {
			if ($kind == "handler") {
				out($f, "{\n\treturn ".$name."_HANDLER(ZEND_OPCODE_HANDLER_ARGS_PASSTHRU);\n}\n\n");
				$done = 1;
			} else if ($helpers[$name]["param"] == null) {
				out($f, "{\n\treturn ".$name."(ZEND_OPCODE_HANDLER_ARGS_PASSTHRU);\n}\n\n");
				$done = 1;
			}
		} else if (ZEND_VM_KIND == ZEND_VM_KIND_CALL) {
			if ($kind == "handler") {
				$op = $opcodes[$opnames[$name]];
				if (isset($op['op1']["ANY"]) && isset($op['op2']["ANY"])) {
					out($f, "{\n\treturn ".$name.(ZEND_VM_SPEC?"_SPEC":"")."_HANDLER(ZEND_OPCODE_HANDLER_ARGS_PASSTHRU);\n}\n\n");
					$done = 1;
				}
			} else if ($helpers[$name]["param"] == null) {
				$h = $helpers[$name];
				if (isset($h['op1']["ANY"]) && isset($h['op2']["ANY"])) {
					out($f, "{\n\treturn ".$name.(ZEND_VM_SPEC?"_SPEC":"")."(ZEND_OPCODE_HANDLER_ARGS_PASSTHRU);\n}\n\n");
					$done = 1;
				}
			}
		}
		if (!$done) {
			gen_code($f, 0, ZEND_VM_KIND_CALL, $code, 'ANY', 'ANY');
		}
	}

	fclose($f);
	echo "zend_vm_execute.h generated successfully.\n";
}

function usage() {
	echo("\nUsage: php zend_vm_gen.php [options]\n".
	     "\nOptions:".
	     "\n  --with-vm-kind=CALL|SWITCH|GOTO - select threading model (default is CALL)".
	     "\n  --without-specializer           - disable executor specialization".
	     "\n  --with-old-executor             - enable old executor".
	     "\n  --with-lines                    - enable #line directives".
	     "\n  --with-op-type-defines          - enable op type #defines".
	     "\n\n");
}

// Parse arguments
for ($i = 1;  $i < $argc; $i++) {
	if (strpos($argv[$i],"--with-vm-kind=") === 0) {
		$kind = substr($argv[$i], strlen("--with-vm-kind="));
		switch ($kind) {
			case "CALL":
				define("ZEND_VM_KIND", ZEND_VM_KIND_CALL);
				break;
			case "SWITCH":
				define("ZEND_VM_KIND", ZEND_VM_KIND_SWITCH);
				break;
			case "GOTO":
				define("ZEND_VM_KIND", ZEND_VM_KIND_GOTO);
				break;
			case "GOTO2":
				define("ZEND_VM_KIND", ZEND_VM_KIND_GOTO2);
				break;
			default:
				echo("ERROR: Invalid vm kind '$kind'\n");
				usage();
				die();
		}
	} else if ($argv[$i] == "--without-specializer") {
	  // Disabling specialization
		define("ZEND_VM_SPEC", 0);
	} else if ($argv[$i] == "--with-old-executor") {
	  // Disabling code for old-style executor
		define("ZEND_VM_OLD_EXECUTOR", 1);
	} else if ($argv[$i] == "--with-lines") {
		// Enabling debuging using original zend_vm_def.h
		define("ZEND_VM_LINES", 1);
	} else if ($argv[$i] == "--with-op-type-defines") {
		// Enabling debuging using original zend_vm_def.h
		define("ZEND_OP_TYPE_DEFINES", 1);
	} else if (strpos($argv[$i],"--goto-align=") === 0) {
		// Enabling debuging using original zend_vm_def.h
		define("ZEND_VM_ALIGNMENT", (int)substr($argv[$i], strlen("--goto-align=")));
	} else if ($argv[$i] == "--help") {
		usage();
		exit();
	} else {
		echo("ERROR: Invalid option '".$argv[$i]."'\n");
		usage();
		die();
	}
}

// Using defaults
if (!defined("ZEND_VM_KIND")) {
  // Using CALL threading by default
	define("ZEND_VM_KIND", ZEND_VM_KIND_CALL);
}
if (!defined("ZEND_VM_SPEC")) {
  // Using specialized executor by default
	define("ZEND_VM_SPEC", 1);
}
if (!defined("ZEND_VM_OLD_EXECUTOR")) {
  // Include old-style executor by default
	define("ZEND_VM_OLD_EXECUTOR", 0);
}
if (!defined("ZEND_VM_LINES")) {
  // Disabling #line directives
	define("ZEND_VM_LINES", 0);
}
if (!defined("ZEND_OP_TYPE_DEFINES")) {
  // Disabling op type #defines
	define("ZEND_OP_TYPE_DEFINES", 0);
}
if (!defined("ZEND_VM_ALIGNMENT")) {
  // Disabling goto op alignment
	define("ZEND_VM_ALIGNMENT", 0);
}

gen_vm("zend_vm_def.h", "zend_vm_execute.skl");

?>
