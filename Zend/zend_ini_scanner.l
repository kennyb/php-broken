%{
/*
   +----------------------------------------------------------------------+
   | Zend Engine                                                          |
   +----------------------------------------------------------------------+
   | Copyright (c) 1998-2006 Zend Technologies Ltd. (http://www.zend.com) |
   +----------------------------------------------------------------------+
   | This source file is subject to version 2.00 of the Zend license,     |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.zend.com/license/2_00.txt.                                |
   | If you did not receive a copy of the Zend license and are unable to  |
   | obtain it through the world-wide-web, please send a note to          |
   | license@zend.com so we can mail you a copy immediately.              |
   +----------------------------------------------------------------------+
   | Author: Zeev Suraski <zeev@zend.com>                                 |
   +----------------------------------------------------------------------+
*/

/* $Id: zend_ini_scanner.l,v 1.41.2.2.2.2 2007/07/23 16:17:10 jani Exp $ */

#define yyleng SCNG(yy_leng)
#define yytext SCNG(yy_text)
#define yytext_ptr SCNG(yy_text)
#define yyin SCNG(yy_in)
#define yyout SCNG(yy_out)
#define yy_last_accepting_state SCNG(_yy_last_accepting_state)
#define yy_last_accepting_cpos SCNG(_yy_last_accepting_cpos)
#define yy_more_flag SCNG(_yy_more_flag)
#define yy_more_len SCNG(_yy_more_len)

#include <errno.h>
#include "zend.h"
#include "zend_globals.h"
#include <zend_ini_parser.h>
#include "zend_ini_scanner.h"

#undef YYSTYPE
#define YYSTYPE zval

#define YY_DECL int ini_lex(zval *ini_lval TSRMLS_DC)

/* Globals Macros */
#define SCNG	INI_SCNG
#ifdef ZTS
ZEND_API ts_rsrc_id ini_scanner_globals_id;
#else
ZEND_API zend_scanner_globals ini_scanner_globals;
#endif

# define YY_INPUT(buf, result, max_size) \
	if ( ((result = zend_stream_read(yyin, buf, max_size TSRMLS_CC)) == 0) \
		  && zend_stream_ferror( yyin TSRMLS_CC) ) \
		YY_FATAL_ERROR( "input in flex scanner failed" );

static char *ini_filename;

void init_ini_scanner(TSRMLS_D)
{
	SCNG(lineno)=1;
}

int zend_ini_scanner_get_lineno(TSRMLS_D)
{
	return SCNG(lineno);
}

char *zend_ini_scanner_get_filename(TSRMLS_D)
{
	return ini_filename;
}

int zend_ini_open_file_for_scanning(zend_file_handle *fh TSRMLS_DC)
{
	if (FAILURE == zend_stream_fixup(fh TSRMLS_CC)) {
		return FAILURE;
	}

	init_ini_scanner(TSRMLS_C);
	yyin = fh;
	yy_switch_to_buffer(yy_create_buffer(yyin, YY_BUF_SIZE TSRMLS_CC) TSRMLS_CC);
	ini_filename = fh->filename;
	return SUCCESS;
}

int zend_ini_prepare_string_for_scanning(char *str TSRMLS_DC)
{
	int len = strlen(str);

	yyin = NULL;
	yy_scan_buffer(str, len + 2 TSRMLS_CC);
	ini_filename = NULL;
	return SUCCESS;
}

void zend_ini_close_file(zend_file_handle *fh TSRMLS_DC)
{
	zend_stream_close(fh);
}

%}

NEWLINE ("\r"|"\n"|"\r\n")

%option noyywrap
%option never-interactive

%%

<INITIAL>[ ]*[\[][ ]*[\]][ ]* {
	return BRACK;
}

<INITIAL>[ ]*("true"|"on"|"yes")[ ]* {
	Z_STRVAL_P(ini_lval) = zend_strndup("1", 1);
	Z_STRLEN_P(ini_lval) = 1;
	Z_TYPE_P(ini_lval) = IS_STRING;
	return CFG_TRUE;
}


<INITIAL>[ ]*("false"|"off"|"no"|"none"|"null")[ ]* {
	Z_STRVAL_P(ini_lval) = zend_strndup("", 0);
	Z_STRLEN_P(ini_lval) = 0;
	Z_TYPE_P(ini_lval) = IS_STRING;
	return CFG_FALSE;
}

<INITIAL>[[][^\]\n]+[\]][ ]*{NEWLINE}? {
	/* SECTION */

	/* eat trailing ] and spaces */
	while (yyleng>0 && (yytext[yyleng-1]=='\n' || yytext[yyleng-1]=='\r' || yytext[yyleng-1]==']' || yytext[yyleng-1]==' ')) {
		yyleng--;
		yytext[yyleng]=0;
	}

	SCNG(lineno)++;

	/* eat leading [ */
	yytext++;
	yyleng--;

	Z_STRVAL_P(ini_lval) = zend_strndup(yytext, yyleng);
	Z_STRLEN_P(ini_lval) = yyleng;
	Z_TYPE_P(ini_lval) = IS_STRING;
	return SECTION;
}

<INITIAL>["][^"]*["] {
	char *p = yytext;

	/* ENCAPSULATED TC_STRING */

	while ((p = strpbrk(p, "\r\n"))) {
		if (*p == '\r' && *(p + 1) == '\n') {
			p++;
		}
		SCNG(lineno)++;
		p++;
	}

	/* eat trailing " */
	yytext[yyleng-1]=0;

	/* eat leading " */
	yytext++;

	Z_STRVAL_P(ini_lval) = zend_strndup(yytext, yyleng - 2);
	Z_STRLEN_P(ini_lval) = yyleng - 2;
	Z_TYPE_P(ini_lval) = IS_STRING;
	return TC_ENCAPSULATED_STRING;
}

<INITIAL>"${" {
	return TC_DOLLAR_CURLY;
}

<INITIAL>"}" {
	Z_LVAL_P(ini_lval) = (long) yytext[0];
	return yytext[0];
}

<INITIAL>[&|~$(){}!] {
	return yytext[0];
}

<INITIAL>[^=\n\r\t;|&$~(){}!"\[]+ {
	/* STRING */
	register int i;

	/* eat trailing whitespace */
	for (i=yyleng-1; i>=0; i--) {
		if (yytext[i]==' ' || yytext[i]=='\t') {
			yytext[i]=0;
			yyleng--;
		} else {
			break;
		}
	}
	/* eat leading whitespace */
	while (yytext[0]) {
		if (yytext[0]==' ' || yytext[0]=='\t') {
			yytext++;
			yyleng--;
		} else {
			break;
		}
	}
	if (yyleng!=0) {
		Z_STRVAL_P(ini_lval) = zend_strndup(yytext, yyleng);
		Z_STRLEN_P(ini_lval) = yyleng;
		Z_TYPE_P(ini_lval) = IS_STRING;
		return TC_STRING;
	} else {
		/* whitespace */
	}
}

<INITIAL>[=\n] {
	if (yytext[0] == '\n') {
		SCNG(lineno)++;
	}
	return yytext[0];
}

<INITIAL>{NEWLINE} {
	SCNG(lineno)++;
	return '\n';
}

<INITIAL>[;][^\r\n]*{NEWLINE}? {
	/* comment */
	SCNG(lineno)++;
	return '\n';
}

<INITIAL>[ \t] {
	/* eat whitespace */
}

<INITIAL>. {
#if DEBUG
	php_error(E_NOTICE,"Unexpected character on line %d:  '%s' (ASCII %d)\n", yylineno, yytext, yytext[0]);
#endif
}

<<EOF>> {
	yy_delete_buffer(YY_CURRENT_BUFFER TSRMLS_CC);
	yyterminate();
}
