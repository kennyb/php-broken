/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse zendparse
#define yylex   zendlex
#define yyerror zenderror
#define yylval  zendlval
#define yychar  zendchar
#define yydebug zenddebug
#define yynerrs zendnerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_REQUIRE_ONCE = 258,
     T_REQUIRE = 259,
     T_EVAL = 260,
     T_INCLUDE_ONCE = 261,
     T_INCLUDE = 262,
     T_LOGICAL_OR = 263,
     T_LOGICAL_XOR = 264,
     T_LOGICAL_AND = 265,
     T_PRINT = 266,
     T_SR_EQUAL = 267,
     T_SL_EQUAL = 268,
     T_XOR_EQUAL = 269,
     T_OR_EQUAL = 270,
     T_AND_EQUAL = 271,
     T_MOD_EQUAL = 272,
     T_CONCAT_EQUAL = 273,
     T_DIV_EQUAL = 274,
     T_MUL_EQUAL = 275,
     T_MINUS_EQUAL = 276,
     T_PLUS_EQUAL = 277,
     T_BOOLEAN_OR = 278,
     T_BOOLEAN_AND = 279,
     T_IS_NOT_IDENTICAL = 280,
     T_IS_IDENTICAL = 281,
     T_IS_NOT_EQUAL = 282,
     T_IS_EQUAL = 283,
     T_IS_GREATER_OR_EQUAL = 284,
     T_IS_SMALLER_OR_EQUAL = 285,
     T_SR = 286,
     T_SL = 287,
     T_INSTANCEOF = 288,
     T_UNSET_CAST = 289,
     T_BOOL_CAST = 290,
     T_OBJECT_CAST = 291,
     T_ARRAY_CAST = 292,
     T_STRING_CAST = 293,
     T_DOUBLE_CAST = 294,
     T_INT_CAST = 295,
     T_DEC = 296,
     T_INC = 297,
     T_CLONE = 298,
     T_NEW = 299,
     T_EXIT = 300,
     T_IF = 301,
     T_ELSE = 302,
     T_ENDIF = 303,
     T_LNUMBER = 304,
     T_DNUMBER = 305,
     T_STRING = 306,
     T_STRING_VARNAME = 307,
     T_VARIABLE = 308,
     T_NUM_STRING = 309,
     T_INLINE_HTML = 310,
     T_CHARACTER = 311,
     T_BAD_CHARACTER = 312,
     T_ENCAPSED_AND_WHITESPACE = 313,
     T_CONSTANT_ENCAPSED_STRING = 314,
     T_ECHO = 315,
     T_DO = 316,
     T_WHILE = 317,
     T_ENDWHILE = 318,
     T_FOR = 319,
     T_ENDFOR = 320,
     T_FOREACH = 321,
     T_ENDFOREACH = 322,
     T_DECLARE = 323,
     T_ENDDECLARE = 324,
     T_AS = 325,
     T_SWITCH = 326,
     T_ENDSWITCH = 327,
     T_CASE = 328,
     T_DEFAULT = 329,
     T_BREAK = 330,
     T_CONTINUE = 331,
     T_FUNCTION = 332,
     T_CONST = 333,
     T_RETURN = 334,
     T_TRY = 335,
     T_CATCH = 336,
     T_THROW = 337,
     T_USE = 338,
     T_GLOBAL = 339,
     T_PUBLIC = 340,
     T_PROTECTED = 341,
     T_PRIVATE = 342,
     T_FINAL = 343,
     T_ABSTRACT = 344,
     T_STATIC = 345,
     T_VAR = 346,
     T_UNSET = 347,
     T_ISSET = 348,
     T_EMPTY = 349,
     T_HALT_COMPILER = 350,
     T_CLASS = 351,
     T_INTERFACE = 352,
     T_EXTENDS = 353,
     T_IMPLEMENTS = 354,
     T_OBJECT_OPERATOR = 355,
     T_DOUBLE_ARROW = 356,
     T_LIST = 357,
     T_ARRAY = 358,
     T_CLASS_C = 359,
     T_METHOD_C = 360,
     T_FUNC_C = 361,
     T_LINE = 362,
     T_FILE = 363,
     T_COMMENT = 364,
     T_DOC_COMMENT = 365,
     T_OPEN_TAG = 366,
     T_OPEN_TAG_WITH_ECHO = 367,
     T_CLOSE_TAG = 368,
     T_WHITESPACE = 369,
     T_START_HEREDOC = 370,
     T_END_HEREDOC = 371,
     T_DOLLAR_OPEN_CURLY_BRACES = 372,
     T_CURLY_OPEN = 373,
     T_PAAMAYIM_NEKUDOTAYIM = 374
   };
#endif
/* Tokens.  */
#define T_REQUIRE_ONCE 258
#define T_REQUIRE 259
#define T_EVAL 260
#define T_INCLUDE_ONCE 261
#define T_INCLUDE 262
#define T_LOGICAL_OR 263
#define T_LOGICAL_XOR 264
#define T_LOGICAL_AND 265
#define T_PRINT 266
#define T_SR_EQUAL 267
#define T_SL_EQUAL 268
#define T_XOR_EQUAL 269
#define T_OR_EQUAL 270
#define T_AND_EQUAL 271
#define T_MOD_EQUAL 272
#define T_CONCAT_EQUAL 273
#define T_DIV_EQUAL 274
#define T_MUL_EQUAL 275
#define T_MINUS_EQUAL 276
#define T_PLUS_EQUAL 277
#define T_BOOLEAN_OR 278
#define T_BOOLEAN_AND 279
#define T_IS_NOT_IDENTICAL 280
#define T_IS_IDENTICAL 281
#define T_IS_NOT_EQUAL 282
#define T_IS_EQUAL 283
#define T_IS_GREATER_OR_EQUAL 284
#define T_IS_SMALLER_OR_EQUAL 285
#define T_SR 286
#define T_SL 287
#define T_INSTANCEOF 288
#define T_UNSET_CAST 289
#define T_BOOL_CAST 290
#define T_OBJECT_CAST 291
#define T_ARRAY_CAST 292
#define T_STRING_CAST 293
#define T_DOUBLE_CAST 294
#define T_INT_CAST 295
#define T_DEC 296
#define T_INC 297
#define T_CLONE 298
#define T_NEW 299
#define T_EXIT 300
#define T_IF 301
#define T_ELSE 302
#define T_ENDIF 303
#define T_LNUMBER 304
#define T_DNUMBER 305
#define T_STRING 306
#define T_STRING_VARNAME 307
#define T_VARIABLE 308
#define T_NUM_STRING 309
#define T_INLINE_HTML 310
#define T_CHARACTER 311
#define T_BAD_CHARACTER 312
#define T_ENCAPSED_AND_WHITESPACE 313
#define T_CONSTANT_ENCAPSED_STRING 314
#define T_ECHO 315
#define T_DO 316
#define T_WHILE 317
#define T_ENDWHILE 318
#define T_FOR 319
#define T_ENDFOR 320
#define T_FOREACH 321
#define T_ENDFOREACH 322
#define T_DECLARE 323
#define T_ENDDECLARE 324
#define T_AS 325
#define T_SWITCH 326
#define T_ENDSWITCH 327
#define T_CASE 328
#define T_DEFAULT 329
#define T_BREAK 330
#define T_CONTINUE 331
#define T_FUNCTION 332
#define T_CONST 333
#define T_RETURN 334
#define T_TRY 335
#define T_CATCH 336
#define T_THROW 337
#define T_USE 338
#define T_GLOBAL 339
#define T_PUBLIC 340
#define T_PROTECTED 341
#define T_PRIVATE 342
#define T_FINAL 343
#define T_ABSTRACT 344
#define T_STATIC 345
#define T_VAR 346
#define T_UNSET 347
#define T_ISSET 348
#define T_EMPTY 349
#define T_HALT_COMPILER 350
#define T_CLASS 351
#define T_INTERFACE 352
#define T_EXTENDS 353
#define T_IMPLEMENTS 354
#define T_OBJECT_OPERATOR 355
#define T_DOUBLE_ARROW 356
#define T_LIST 357
#define T_ARRAY 358
#define T_CLASS_C 359
#define T_METHOD_C 360
#define T_FUNC_C 361
#define T_LINE 362
#define T_FILE 363
#define T_COMMENT 364
#define T_DOC_COMMENT 365
#define T_OPEN_TAG 366
#define T_OPEN_TAG_WITH_ECHO 367
#define T_CLOSE_TAG 368
#define T_WHITESPACE 369
#define T_START_HEREDOC 370
#define T_END_HEREDOC 371
#define T_DOLLAR_OPEN_CURLY_BRACES 372
#define T_CURLY_OPEN 373
#define T_PAAMAYIM_NEKUDOTAYIM 374




/* Copy the first part of user declarations.  */


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
   | Authors: Andi Gutmans <andi@zend.com>                                |
   |          Zeev Suraski <zeev@zend.com>                                |
   +----------------------------------------------------------------------+
*/

/* $Id: zend_language_parser.y,v 1.160.2.4.2.10 2008/03/10 14:54:47 felipe Exp $ */

/*
 * LALR shift/reduce conflicts and how they are resolved:
 *
 * - 2 shift/reduce conflicts due to the dangeling elseif/else ambiguity.  Solved by shift.
 *
 */


#include "zend_compile.h"
#include "zend.h"
#include "zend_list.h"
#include "zend_globals.h"
#include "zend_API.h"
#include "zend_constants.h"


#define YYERROR_VERBOSE
#define YYSTYPE znode
#ifdef ZTS
# define YYPARSE_PARAM tsrm_ls
# define YYLEX_PARAM tsrm_ls
#endif




/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */


#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3322

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  148
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  154
/* YYNRULES -- Number of rules.  */
#define YYNRULES  388
/* YYNRULES -- Number of states.  */
#define YYNSTATES  717

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   374

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,   146,     2,   144,    47,    31,     2,
     139,   140,    45,    42,     8,    43,    44,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    26,   141,
      36,    13,    37,    25,    51,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,   147,    30,     2,   145,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   142,    29,   143,    50,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     9,    10,    11,    12,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    27,    28,
      32,    33,    34,    35,    38,    39,    40,    41,    49,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,    10,    11,    13,    15,    17,
      22,    23,    27,    28,    30,    32,    34,    39,    41,    45,
      46,    47,    56,    57,    58,    66,    67,    68,    78,    79,
      80,    81,    94,    95,   102,   105,   109,   112,   116,   119,
     123,   127,   131,   135,   138,   142,   144,   147,   151,   157,
     158,   159,   170,   171,   172,   183,   184,   191,   193,   194,
     195,   196,   197,   198,   217,   221,   223,   224,   226,   229,
     230,   231,   242,   244,   248,   250,   252,   256,   258,   260,
     261,   263,   264,   265,   277,   278,   287,   288,   296,   298,
     301,   304,   305,   308,   310,   311,   314,   315,   318,   320,
     324,   325,   328,   330,   333,   337,   343,   347,   352,   357,
     363,   364,   365,   372,   373,   379,   381,   383,   384,   387,
     389,   390,   393,   397,   403,   408,   413,   419,   427,   434,
     435,   437,   439,   441,   442,   444,   446,   449,   453,   457,
     462,   466,   468,   470,   473,   478,   482,   488,   490,   494,
     497,   498,   499,   504,   507,   508,   509,   520,   522,   526,
     528,   530,   531,   533,   535,   538,   540,   542,   544,   546,
     548,   550,   554,   560,   562,   566,   572,   577,   581,   583,
     584,   586,   587,   592,   594,   595,   603,   607,   612,   613,
     621,   622,   627,   630,   634,   638,   642,   646,   650,   654,
     658,   662,   666,   670,   674,   677,   680,   683,   686,   687,
     692,   693,   698,   699,   704,   705,   710,   714,   718,   722,
     726,   730,   734,   738,   742,   746,   750,   754,   758,   761,
     764,   767,   770,   774,   778,   782,   786,   790,   794,   798,
     802,   806,   810,   811,   812,   820,   822,   825,   828,   831,
     834,   837,   840,   843,   846,   847,   851,   853,   858,   862,
     865,   866,   872,   873,   881,   882,   890,   891,   897,   899,
     901,   903,   904,   905,   912,   914,   917,   918,   921,   922,
     925,   929,   930,   934,   936,   938,   940,   942,   944,   946,
     948,   950,   952,   954,   957,   960,   965,   967,   971,   973,
     975,   977,   979,   983,   987,   988,   991,   992,   994,  1000,
    1004,  1008,  1010,  1012,  1014,  1016,  1018,  1020,  1021,  1022,
    1030,  1032,  1035,  1036,  1037,  1042,  1043,  1048,  1049,  1051,
    1054,  1058,  1060,  1062,  1064,  1067,  1069,  1074,  1079,  1081,
    1083,  1088,  1089,  1091,  1093,  1094,  1097,  1102,  1107,  1109,
    1111,  1115,  1117,  1120,  1124,  1126,  1128,  1129,  1135,  1136,
    1137,  1140,  1146,  1150,  1154,  1156,  1163,  1168,  1173,  1176,
    1179,  1182,  1183,  1185,  1186,  1192,  1196,  1200,  1207,  1211,
    1213,  1215,  1217,  1222,  1227,  1230,  1233,  1235,  1236
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     149,     0,    -1,   150,    -1,    -1,   150,   151,   152,    -1,
      -1,   156,    -1,   186,    -1,   187,    -1,   114,   139,   140,
     141,    -1,    -1,   153,   154,   155,    -1,    -1,   156,    -1,
     186,    -1,   187,    -1,   114,   139,   140,   141,    -1,   157,
      -1,   142,   153,   143,    -1,    -1,    -1,    65,   139,   266,
     140,   158,   156,   159,   209,    -1,    -1,    -1,    81,   139,
     160,   266,   140,   161,   156,    -1,    -1,    -1,    80,   162,
     156,    81,   139,   163,   266,   140,   141,    -1,    -1,    -1,
      -1,    83,   139,   231,   141,   164,   231,   141,   165,   231,
     140,   166,   156,    -1,    -1,    90,   139,   266,   140,   167,
     204,    -1,    94,   141,    -1,    94,   266,   141,    -1,    95,
     141,    -1,    95,   266,   141,    -1,    98,   141,    -1,    98,
     234,   141,    -1,    98,   270,   141,    -1,   103,   215,   141,
      -1,   109,   217,   141,    -1,   229,   141,    -1,    79,   230,
     141,    -1,    74,    -1,   266,   141,    -1,   102,   185,   141,
      -1,   111,   139,   183,   140,   141,    -1,    -1,    -1,    85,
     139,   270,    89,   168,   202,   201,   140,   169,   156,    -1,
      -1,    -1,    85,   139,   234,    89,   170,   270,   201,   140,
     171,   156,    -1,    -1,    87,   172,   139,   203,   140,   156,
      -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,    99,   173,
     142,   153,   143,   100,   139,   174,   250,   175,    72,   140,
     176,   142,   153,   143,   177,   178,    -1,   101,   266,   141,
      -1,   179,    -1,    -1,   180,    -1,   179,   180,    -1,    -1,
      -1,   100,   139,   250,   181,    72,   140,   182,   142,   153,
     143,    -1,   184,    -1,   183,     8,   184,    -1,   270,    -1,
      78,    -1,   139,    78,   140,    -1,   189,    -1,   192,    -1,
      -1,    31,    -1,    -1,    -1,    96,   190,   188,    70,   191,
     139,   210,   140,   142,   153,   143,    -1,    -1,   195,    70,
     196,   193,   199,   142,   218,   143,    -1,    -1,   197,    70,
     194,   198,   142,   218,   143,    -1,   115,    -1,   108,   115,
      -1,   107,   115,    -1,    -1,   117,   250,    -1,   116,    -1,
      -1,   117,   200,    -1,    -1,   118,   200,    -1,   250,    -1,
     200,     8,   250,    -1,    -1,   120,   202,    -1,   270,    -1,
      31,   270,    -1,    70,    13,   260,    -1,   203,     8,    70,
      13,   260,    -1,   142,   205,   143,    -1,   142,   141,   205,
     143,    -1,    26,   205,    91,   141,    -1,    26,   141,   205,
      91,   141,    -1,    -1,    -1,   205,    92,   266,   208,   206,
     153,    -1,    -1,   205,    93,   208,   207,   153,    -1,    26,
      -1,   141,    -1,    -1,    66,   156,    -1,   211,    -1,    -1,
     212,    72,    -1,   212,    31,    72,    -1,   212,    31,    72,
      13,   260,    -1,   212,    72,    13,   260,    -1,   211,     8,
     212,    72,    -1,   211,     8,   212,    31,    72,    -1,   211,
       8,   212,    31,    72,    13,   260,    -1,   211,     8,   212,
      72,    13,   260,    -1,    -1,    70,    -1,   122,    -1,   214,
      -1,    -1,   234,    -1,   270,    -1,    31,   268,    -1,   214,
       8,   234,    -1,   214,     8,   270,    -1,   214,     8,    31,
     268,    -1,   215,     8,   216,    -1,   216,    -1,    72,    -1,
     144,   267,    -1,   144,   142,   266,   143,    -1,   217,     8,
      72,    -1,   217,     8,    72,    13,   260,    -1,    72,    -1,
      72,    13,   260,    -1,   218,   219,    -1,    -1,    -1,   224,
     220,   228,   141,    -1,   229,   141,    -1,    -1,    -1,   225,
      96,   221,   188,    70,   222,   139,   210,   140,   223,    -1,
     141,    -1,   142,   153,   143,    -1,   226,    -1,   110,    -1,
      -1,   226,    -1,   227,    -1,   226,   227,    -1,   104,    -1,
     105,    -1,   106,    -1,   109,    -1,   108,    -1,   107,    -1,
     228,     8,    72,    -1,   228,     8,    72,    13,   260,    -1,
      72,    -1,    72,    13,   260,    -1,   229,     8,    70,    13,
     260,    -1,    97,    70,    13,   260,    -1,   230,     8,   266,
      -1,   266,    -1,    -1,   232,    -1,    -1,   232,     8,   233,
     266,    -1,   266,    -1,    -1,   121,   139,   235,   290,   140,
      13,   266,    -1,   270,    13,   266,    -1,   270,    13,    31,
     270,    -1,    -1,   270,    13,    31,    63,   251,   236,   258,
      -1,    -1,    63,   251,   237,   258,    -1,    62,   266,    -1,
     270,    24,   266,    -1,   270,    23,   266,    -1,   270,    22,
     266,    -1,   270,    21,   266,    -1,   270,    20,   266,    -1,
     270,    19,   266,    -1,   270,    18,   266,    -1,   270,    17,
     266,    -1,   270,    16,   266,    -1,   270,    15,   266,    -1,
     270,    14,   266,    -1,   269,    60,    -1,    60,   269,    -1,
     269,    59,    -1,    59,   269,    -1,    -1,   266,    27,   238,
     266,    -1,    -1,   266,    28,   239,   266,    -1,    -1,   266,
       9,   240,   266,    -1,    -1,   266,    11,   241,   266,    -1,
     266,    10,   266,    -1,   266,    29,   266,    -1,   266,    31,
     266,    -1,   266,    30,   266,    -1,   266,    44,   266,    -1,
     266,    42,   266,    -1,   266,    43,   266,    -1,   266,    45,
     266,    -1,   266,    46,   266,    -1,   266,    47,   266,    -1,
     266,    41,   266,    -1,   266,    40,   266,    -1,    42,   266,
      -1,    43,   266,    -1,    48,   266,    -1,    50,   266,    -1,
     266,    33,   266,    -1,   266,    32,   266,    -1,   266,    35,
     266,    -1,   266,    34,   266,    -1,   266,    36,   266,    -1,
     266,    39,   266,    -1,   266,    37,   266,    -1,   266,    38,
     266,    -1,   266,    49,   251,    -1,   139,   266,   140,    -1,
      -1,    -1,   266,    25,   242,   266,    26,   243,   266,    -1,
     299,    -1,    58,   266,    -1,    57,   266,    -1,    56,   266,
      -1,    55,   266,    -1,    54,   266,    -1,    53,   266,    -1,
      52,   266,    -1,    64,   257,    -1,    -1,    51,   244,   266,
      -1,   262,    -1,   122,   139,   293,   140,    -1,   145,   295,
     145,    -1,    12,   266,    -1,    -1,    70,   139,   246,   213,
     140,    -1,    -1,   250,   138,    70,   139,   247,   213,   140,
      -1,    -1,   250,   138,   278,   139,   248,   213,   140,    -1,
      -1,   278,   139,   249,   213,   140,    -1,    70,    -1,    70,
      -1,   252,    -1,    -1,    -1,   281,   119,   253,   285,   254,
     255,    -1,   281,    -1,   255,   256,    -1,    -1,   119,   285,
      -1,    -1,   139,   140,    -1,   139,   266,   140,    -1,    -1,
     139,   213,   140,    -1,    68,    -1,    69,    -1,    78,    -1,
     126,    -1,   127,    -1,   123,    -1,   124,    -1,   125,    -1,
     259,    -1,    70,    -1,    42,   260,    -1,    43,   260,    -1,
     122,   139,   263,   140,    -1,   261,    -1,    70,   138,    70,
      -1,    70,    -1,    71,    -1,   261,    -1,   259,    -1,   146,
     295,   146,    -1,   134,   295,   135,    -1,    -1,   265,   264,
      -1,    -1,     8,    -1,   265,     8,   260,   120,   260,    -1,
     265,     8,   260,    -1,   260,   120,   260,    -1,   260,    -1,
     267,    -1,   234,    -1,   270,    -1,   270,    -1,   270,    -1,
      -1,    -1,   280,   119,   271,   285,   272,   276,   273,    -1,
     280,    -1,   273,   274,    -1,    -1,    -1,   119,   285,   275,
     276,    -1,    -1,   139,   277,   213,   140,    -1,    -1,   282,
      -1,   289,   282,    -1,   250,   138,   278,    -1,   281,    -1,
     245,    -1,   282,    -1,   289,   282,    -1,   279,    -1,   282,
      61,   284,   147,    -1,   282,   142,   266,   143,    -1,   283,
      -1,    72,    -1,   144,   142,   266,   143,    -1,    -1,   266,
      -1,   287,    -1,    -1,   278,   286,    -1,   287,    61,   284,
     147,    -1,   287,   142,   266,   143,    -1,   288,    -1,    70,
      -1,   142,   266,   143,    -1,   144,    -1,   289,   144,    -1,
     290,     8,   291,    -1,   291,    -1,   270,    -1,    -1,   121,
     139,   292,   290,   140,    -1,    -1,    -1,   294,   264,    -1,
     294,     8,   266,   120,   266,    -1,   294,     8,   266,    -1,
     266,   120,   266,    -1,   266,    -1,   294,     8,   266,   120,
      31,   268,    -1,   294,     8,    31,   268,    -1,   266,   120,
      31,   268,    -1,    31,   268,    -1,   295,   296,    -1,   295,
      77,    -1,    -1,    72,    -1,    -1,    72,    61,   297,   298,
     147,    -1,    72,   119,    70,    -1,   136,   266,   143,    -1,
     136,    71,    61,   266,   147,   143,    -1,   137,   270,   143,
      -1,    70,    -1,    73,    -1,    72,    -1,   112,   139,   300,
     140,    -1,   113,   139,   270,   140,    -1,     7,   266,    -1,
       6,   266,    -1,   270,    -1,    -1,   300,     8,   301,   270,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   148,   148,   152,   152,   153,   158,   159,   160,   161,
     166,   166,   167,   172,   173,   174,   175,   180,   184,   185,
     185,   185,   186,   186,   186,   187,   187,   187,   191,   193,
     195,   188,   197,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   214,
     215,   213,   218,   219,   217,   221,   221,   222,   223,   224,
     225,   226,   227,   223,   229,   234,   235,   239,   240,   245,
     245,   245,   250,   251,   255,   259,   260,   265,   269,   274,
     275,   280,   280,   280,   286,   285,   292,   291,   301,   302,
     303,   307,   308,   312,   315,   317,   320,   322,   326,   327,
     331,   332,   337,   338,   343,   344,   349,   350,   351,   352,
     357,   358,   358,   359,   359,   364,   365,   370,   372,   377,
     378,   383,   384,   385,   386,   387,   388,   389,   390,   395,
     396,   397,   402,   403,   408,   409,   410,   411,   412,   413,
     417,   418,   423,   424,   425,   430,   431,   432,   433,   438,
     439,   444,   444,   445,   446,   446,   446,   452,   453,   457,
     458,   462,   463,   467,   468,   472,   473,   474,   475,   476,
     477,   481,   482,   483,   484,   488,   489,   493,   494,   499,
     500,   504,   504,   505,   509,   509,   510,   511,   512,   512,
     513,   513,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,   530,
     531,   531,   532,   532,   533,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   550,   551,   552,   553,   554,   555,   556,   557,
     558,   559,   560,   561,   560,   563,   564,   565,   566,   567,
     568,   569,   570,   571,   572,   572,   573,   574,   575,   576,
     580,   580,   583,   583,   586,   586,   589,   589,   595,   599,
     600,   605,   606,   605,   608,   613,   614,   619,   623,   624,
     625,   630,   631,   636,   637,   638,   639,   640,   641,   642,
     643,   648,   649,   650,   651,   652,   653,   657,   661,   662,
     663,   664,   665,   666,   671,   672,   675,   677,   681,   682,
     683,   684,   688,   689,   694,   699,   704,   709,   710,   709,
     712,   716,   717,   722,   722,   726,   726,   730,   734,   735,
     739,   744,   745,   750,   751,   752,   756,   757,   758,   763,
     764,   768,   769,   774,   775,   775,   779,   780,   781,   785,
     786,   790,   791,   795,   796,   801,   802,   802,   803,   808,
     809,   813,   814,   815,   816,   817,   818,   819,   820,   824,
     825,   826,   832,   833,   833,   834,   835,   836,   837,   842,
     843,   844,   849,   850,   851,   852,   856,   857,   857
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_REQUIRE_ONCE", "T_REQUIRE", "T_EVAL",
  "T_INCLUDE_ONCE", "T_INCLUDE", "','", "T_LOGICAL_OR", "T_LOGICAL_XOR",
  "T_LOGICAL_AND", "T_PRINT", "'='", "T_SR_EQUAL", "T_SL_EQUAL",
  "T_XOR_EQUAL", "T_OR_EQUAL", "T_AND_EQUAL", "T_MOD_EQUAL",
  "T_CONCAT_EQUAL", "T_DIV_EQUAL", "T_MUL_EQUAL", "T_MINUS_EQUAL",
  "T_PLUS_EQUAL", "'?'", "':'", "T_BOOLEAN_OR", "T_BOOLEAN_AND", "'|'",
  "'^'", "'&'", "T_IS_NOT_IDENTICAL", "T_IS_IDENTICAL", "T_IS_NOT_EQUAL",
  "T_IS_EQUAL", "'<'", "'>'", "T_IS_GREATER_OR_EQUAL",
  "T_IS_SMALLER_OR_EQUAL", "T_SR", "T_SL", "'+'", "'-'", "'.'", "'*'",
  "'/'", "'%'", "'!'", "T_INSTANCEOF", "'~'", "'@'", "T_UNSET_CAST",
  "T_BOOL_CAST", "T_OBJECT_CAST", "T_ARRAY_CAST", "T_STRING_CAST",
  "T_DOUBLE_CAST", "T_INT_CAST", "T_DEC", "T_INC", "'['", "T_CLONE",
  "T_NEW", "T_EXIT", "T_IF", "T_ELSE", "T_ENDIF", "T_LNUMBER", "T_DNUMBER",
  "T_STRING", "T_STRING_VARNAME", "T_VARIABLE", "T_NUM_STRING",
  "T_INLINE_HTML", "T_CHARACTER", "T_BAD_CHARACTER",
  "T_ENCAPSED_AND_WHITESPACE", "T_CONSTANT_ENCAPSED_STRING", "T_ECHO",
  "T_DO", "T_WHILE", "T_ENDWHILE", "T_FOR", "T_ENDFOR", "T_FOREACH",
  "T_ENDFOREACH", "T_DECLARE", "T_ENDDECLARE", "T_AS", "T_SWITCH",
  "T_ENDSWITCH", "T_CASE", "T_DEFAULT", "T_BREAK", "T_CONTINUE",
  "T_FUNCTION", "T_CONST", "T_RETURN", "T_TRY", "T_CATCH", "T_THROW",
  "T_USE", "T_GLOBAL", "T_PUBLIC", "T_PROTECTED", "T_PRIVATE", "T_FINAL",
  "T_ABSTRACT", "T_STATIC", "T_VAR", "T_UNSET", "T_ISSET", "T_EMPTY",
  "T_HALT_COMPILER", "T_CLASS", "T_INTERFACE", "T_EXTENDS", "T_IMPLEMENTS",
  "T_OBJECT_OPERATOR", "T_DOUBLE_ARROW", "T_LIST", "T_ARRAY", "T_CLASS_C",
  "T_METHOD_C", "T_FUNC_C", "T_LINE", "T_FILE", "T_COMMENT",
  "T_DOC_COMMENT", "T_OPEN_TAG", "T_OPEN_TAG_WITH_ECHO", "T_CLOSE_TAG",
  "T_WHITESPACE", "T_START_HEREDOC", "T_END_HEREDOC",
  "T_DOLLAR_OPEN_CURLY_BRACES", "T_CURLY_OPEN", "T_PAAMAYIM_NEKUDOTAYIM",
  "'('", "')'", "';'", "'{'", "'}'", "'$'", "'`'", "'\"'", "']'",
  "$accept", "start", "top_statement_list", "@1", "top_statement",
  "inner_statement_list", "@2", "inner_statement", "statement",
  "unticked_statement", "@3", "@4", "@5", "@6", "@7", "@8", "@9", "@10",
  "@11", "@12", "@13", "@14", "@15", "@16", "@17", "@18", "@19", "@20",
  "@21", "@22", "additional_catches", "non_empty_additional_catches",
  "additional_catch", "@23", "@24", "unset_variables", "unset_variable",
  "use_filename", "function_declaration_statement",
  "class_declaration_statement", "is_reference",
  "unticked_function_declaration_statement", "@25", "@26",
  "unticked_class_declaration_statement", "@27", "@28", "class_entry_type",
  "extends_from", "interface_entry", "interface_extends_list",
  "implements_list", "interface_list", "foreach_optional_arg",
  "foreach_variable", "declare_list", "switch_case_list", "case_list",
  "@29", "@30", "case_separator", "else_single", "parameter_list",
  "non_empty_parameter_list", "optional_class_type",
  "function_call_parameter_list", "non_empty_function_call_parameter_list",
  "global_var_list", "global_var", "static_var_list",
  "class_statement_list", "class_statement", "@31", "@32", "@33",
  "method_body", "variable_modifiers", "method_modifiers",
  "non_empty_member_modifiers", "member_modifier",
  "class_variable_declaration", "class_constant_declaration",
  "echo_expr_list", "for_expr", "non_empty_for_expr", "@34",
  "expr_without_variable", "@35", "@36", "@37", "@38", "@39", "@40", "@41",
  "@42", "@43", "@44", "function_call", "@45", "@46", "@47", "@48",
  "fully_qualified_class_name", "class_name_reference",
  "dynamic_class_name_reference", "@49", "@50",
  "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "ctor_arguments",
  "common_scalar", "static_scalar", "static_class_constant", "scalar",
  "static_array_pair_list", "possible_comma",
  "non_empty_static_array_pair_list", "expr", "r_variable", "w_variable",
  "rw_variable", "variable", "@51", "@52", "variable_properties",
  "variable_property", "@53", "method_or_not", "@54",
  "variable_without_objects", "static_member",
  "base_variable_with_function_calls", "base_variable",
  "reference_variable", "compound_variable", "dim_offset",
  "object_property", "@55", "object_dim_list", "variable_name",
  "simple_indirect_reference", "assignment_list",
  "assignment_list_element", "@56", "array_pair_list",
  "non_empty_array_pair_list", "encaps_list", "encaps_var", "@57",
  "encaps_var_offset", "internal_functions_in_yacc", "isset_variables",
  "@58", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,    44,   263,
     264,   265,   266,    61,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,    63,    58,   278,   279,   124,
      94,    38,   280,   281,   282,   283,    60,    62,   284,   285,
     286,   287,    43,    45,    46,    42,    47,    37,    33,   288,
     126,    64,   289,   290,   291,   292,   293,   294,   295,   296,
     297,    91,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,    40,
      41,    59,   123,   125,    36,    96,    34,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   148,   149,   151,   150,   150,   152,   152,   152,   152,
     154,   153,   153,   155,   155,   155,   155,   156,   157,   158,
     159,   157,   160,   161,   157,   162,   163,   157,   164,   165,
     166,   157,   167,   157,   157,   157,   157,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   168,
     169,   157,   170,   171,   157,   172,   157,   157,   173,   174,
     175,   176,   177,   157,   157,   178,   178,   179,   179,   181,
     182,   180,   183,   183,   184,   185,   185,   186,   187,   188,
     188,   190,   191,   189,   193,   192,   194,   192,   195,   195,
     195,   196,   196,   197,   198,   198,   199,   199,   200,   200,
     201,   201,   202,   202,   203,   203,   204,   204,   204,   204,
     205,   206,   205,   207,   205,   208,   208,   209,   209,   210,
     210,   211,   211,   211,   211,   211,   211,   211,   211,   212,
     212,   212,   213,   213,   214,   214,   214,   214,   214,   214,
     215,   215,   216,   216,   216,   217,   217,   217,   217,   218,
     218,   220,   219,   219,   221,   222,   219,   223,   223,   224,
     224,   225,   225,   226,   226,   227,   227,   227,   227,   227,
     227,   228,   228,   228,   228,   229,   229,   230,   230,   231,
     231,   233,   232,   232,   235,   234,   234,   234,   236,   234,
     237,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   238,   234,
     239,   234,   240,   234,   241,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   242,   243,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   244,   234,   234,   234,   234,   234,
     246,   245,   247,   245,   248,   245,   249,   245,   250,   251,
     251,   253,   254,   252,   252,   255,   255,   256,   257,   257,
     257,   258,   258,   259,   259,   259,   259,   259,   259,   259,
     259,   260,   260,   260,   260,   260,   260,   261,   262,   262,
     262,   262,   262,   262,   263,   263,   264,   264,   265,   265,
     265,   265,   266,   266,   267,   268,   269,   271,   272,   270,
     270,   273,   273,   275,   274,   277,   276,   276,   278,   278,
     279,   280,   280,   281,   281,   281,   282,   282,   282,   283,
     283,   284,   284,   285,   286,   285,   287,   287,   287,   288,
     288,   289,   289,   290,   290,   291,   292,   291,   291,   293,
     293,   294,   294,   294,   294,   294,   294,   294,   294,   295,
     295,   295,   296,   297,   296,   296,   296,   296,   296,   298,
     298,   298,   299,   299,   299,   299,   300,   301,   300
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     3,     0,     1,     1,     1,     4,
       0,     3,     0,     1,     1,     1,     4,     1,     3,     0,
       0,     8,     0,     0,     7,     0,     0,     9,     0,     0,
       0,    12,     0,     6,     2,     3,     2,     3,     2,     3,
       3,     3,     3,     2,     3,     1,     2,     3,     5,     0,
       0,    10,     0,     0,    10,     0,     6,     1,     0,     0,
       0,     0,     0,    18,     3,     1,     0,     1,     2,     0,
       0,    10,     1,     3,     1,     1,     3,     1,     1,     0,
       1,     0,     0,    11,     0,     8,     0,     7,     1,     2,
       2,     0,     2,     1,     0,     2,     0,     2,     1,     3,
       0,     2,     1,     2,     3,     5,     3,     4,     4,     5,
       0,     0,     6,     0,     5,     1,     1,     0,     2,     1,
       0,     2,     3,     5,     4,     4,     5,     7,     6,     0,
       1,     1,     1,     0,     1,     1,     2,     3,     3,     4,
       3,     1,     1,     2,     4,     3,     5,     1,     3,     2,
       0,     0,     4,     2,     0,     0,    10,     1,     3,     1,
       1,     0,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     3,     5,     1,     3,     5,     4,     3,     1,     0,
       1,     0,     4,     1,     0,     7,     3,     4,     0,     7,
       0,     4,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     0,     4,
       0,     4,     0,     4,     0,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     0,     0,     7,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     0,     3,     1,     4,     3,     2,
       0,     5,     0,     7,     0,     7,     0,     5,     1,     1,
       1,     0,     0,     6,     1,     2,     0,     2,     0,     2,
       3,     0,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     4,     1,     3,     1,     1,
       1,     1,     3,     3,     0,     2,     0,     1,     5,     3,
       3,     1,     1,     1,     1,     1,     1,     0,     0,     7,
       1,     2,     0,     0,     4,     0,     4,     0,     1,     2,
       3,     1,     1,     1,     2,     1,     4,     4,     1,     1,
       4,     0,     1,     1,     0,     2,     4,     4,     1,     1,
       3,     1,     2,     3,     1,     1,     0,     5,     0,     0,
       2,     5,     3,     3,     1,     6,     4,     4,     2,     2,
       2,     0,     1,     0,     5,     3,     3,     6,     3,     1,
       1,     1,     4,     4,     2,     2,     1,     0,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     3,     1,     0,     0,     0,     0,     0,     0,
       0,     0,   254,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   278,     0,   283,   284,   298,   299,
     339,    45,   285,     0,    25,     0,     0,     0,    55,     0,
       0,     0,    81,     0,     0,    58,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,    93,     0,     0,
     288,   289,   290,   286,   287,   371,     0,    57,    12,   351,
     371,   371,     4,     6,    17,     7,     8,    77,    78,     0,
       0,     0,   313,   332,     0,   301,   300,   256,     0,   312,
       0,   314,     0,   335,   320,   331,   333,   338,     0,   245,
     385,   384,   259,   228,   229,   230,   231,     0,   252,   251,
     250,   249,   248,   247,   246,   268,   207,   316,   205,   192,
     269,     0,   190,   270,   274,   333,     0,     0,   253,     0,
       0,   260,     0,   178,     0,    22,   179,     0,     0,     0,
      34,     0,    36,     0,    79,     0,    38,   313,     0,   314,
       0,     0,    75,     0,     0,   142,     0,     0,   141,    90,
      89,   147,     0,     0,     0,     0,     0,   184,   359,     0,
       0,    10,     0,     0,     0,    91,    86,     0,    43,     0,
     212,     0,   214,   242,   208,   210,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    46,   206,   204,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   266,   317,   341,     0,   352,   334,   255,     0,   281,
     271,   334,   279,     0,     0,   297,   133,     0,    44,     0,
       0,     0,   180,   183,   313,   314,     0,     0,    35,    37,
      80,     0,     0,    39,    40,    12,    64,     0,    47,     0,
     143,   314,     0,    41,     0,     0,    42,     0,    72,    74,
     386,     0,     0,     0,   358,     0,   364,     0,   306,   372,
     370,   303,     0,     0,   369,   241,    18,     0,     0,   258,
     302,     0,    84,    94,     0,     0,   330,   328,     0,     0,
     216,     0,     0,     0,     0,   217,   219,   218,   233,   232,
     235,   234,   236,   238,   239,   237,   227,   226,   221,   222,
     220,   223,   224,   225,   240,     0,   186,   203,   202,   201,
     200,   199,   198,   197,   196,   195,   194,   193,   133,     0,
     342,     0,     0,   330,   133,   191,     0,   280,    19,     0,
       0,   132,   313,   314,   177,     0,     0,    28,   181,    52,
      49,     0,     0,    32,    82,     0,     0,   292,     0,   291,
     176,   296,    10,    76,     0,   140,   148,   145,     0,     0,
     387,   382,   383,     9,     0,   355,     0,   354,   368,   315,
       0,   257,   307,   360,   373,     0,   299,     0,     0,     0,
      11,    13,    14,    15,   340,   268,    92,    96,     0,     0,
       0,   262,   264,   329,   213,   215,     0,   209,   211,     0,
     187,     0,   349,     0,   344,   318,   343,   348,   336,   337,
       0,   272,     0,   136,   261,     0,    26,    23,   179,     0,
       0,     0,     0,     0,     0,     0,     0,   293,   294,   304,
       0,   144,     0,    73,    48,     0,   356,   358,     0,     0,
     363,     0,   362,     0,   375,     0,   376,   378,     0,     0,
       0,    95,    98,   150,   175,   133,   133,   243,   188,   267,
       0,   345,   327,   341,     0,   282,   276,    20,     0,   313,
     314,     0,     0,     0,   182,   100,     0,   100,   102,   104,
       0,    56,   110,   110,    33,   129,   311,     0,   306,     0,
     146,   388,   358,   353,     0,   367,   366,     0,   379,   381,
     380,     0,     0,     0,    97,   150,     0,   161,     0,     0,
       0,   281,   350,   325,   322,     0,     0,   273,   117,   139,
       0,    24,    29,     0,     0,   103,     0,     0,   110,     0,
     110,     0,   130,   131,     0,   119,     0,     0,   295,   307,
     305,    59,     0,   185,     0,   361,   374,     0,    16,   161,
      99,   165,   166,   167,   170,   169,   168,   160,    87,   149,
     151,     0,   159,   163,     0,   263,   265,   244,   189,   133,
     319,   346,   347,     0,   275,     0,    21,     0,   179,   101,
      53,    50,   105,     0,     0,     0,     0,     0,   106,     0,
     129,     0,   121,   310,   309,     0,   357,   365,   377,    85,
       0,   154,   164,   153,     0,     0,   321,   277,   118,    27,
       0,     0,     0,     0,   108,     0,   115,   116,   113,   107,
      12,     0,   122,     0,     0,    60,   173,     0,    79,   326,
     323,    30,    54,    51,   109,   111,    12,    10,     0,   125,
       0,   124,   308,     0,     0,     0,   152,     0,   327,     0,
      12,    10,    83,   126,     0,   123,     0,   174,   171,   155,
     324,    31,    10,     0,   128,    61,     0,     0,   127,     0,
     172,   129,    12,     0,    10,     0,    62,   157,    12,   156,
      66,    10,     0,    63,    65,    67,   158,     0,    68,    69,
       0,     0,    70,     0,    12,    10,    71
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    72,   171,   287,   400,    73,    74,
     432,   538,   240,   492,   134,   491,   438,   598,   669,   445,
     441,   632,   440,   631,   138,   150,   615,   663,   689,   700,
     703,   704,   705,   710,   713,   267,   268,   154,    75,    76,
     251,    77,   144,   446,    78,   407,   293,    79,   292,    80,
     409,   470,   471,   544,   497,   362,   504,   549,   670,   656,
     638,   596,   554,   555,   556,   350,   351,   157,   158,   162,
     527,   579,   620,   648,   687,   699,   580,   581,   582,   583,
     647,    81,   132,   241,   242,   439,    82,   274,   531,   229,
     303,   304,   299,   301,   302,   530,   107,    83,   236,   475,
     476,   338,    84,   122,   123,   346,   486,   537,   594,   128,
     345,    85,   370,    86,    87,   507,   393,   508,    88,    89,
     388,    90,    91,   339,   482,   590,   626,   668,   534,   589,
      92,    93,    94,    95,    96,    97,   341,   425,   481,   426,
     427,    98,   386,   387,   512,   277,   278,   169,   284,   463,
     521,    99,   271,   455
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -479
static const yytype_int16 yypact[] =
{
    -479,    98,   115,  -479,   818,  2288,  2288,  2288,  2288,  2288,
    2288,  2288,  -479,  2288,  2288,  2288,  2288,  2288,  2288,  2288,
      33,    33,  2288,   161,   -20,   -13,  -479,  -479,   -37,  -479,
    -479,  -479,  -479,  2288,  -479,    16,    37,    93,  -479,    95,
    1172,  1280,  -479,    77,  1388,  -479,  2288,   -27,   -34,    29,
      63,   166,   103,   110,   125,   127,  -479,  -479,   147,   154,
    -479,  -479,  -479,  -479,  -479,  -479,  2288,  -479,  -479,   112,
    -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,   224,
     227,     4,  -479,  -479,   162,  -479,  -479,  -479,  2726,  -479,
      74,   722,   169,  -479,   197,  -479,   -19,  -479,    -2,  -479,
    3273,  3273,  1845,  -479,  -479,   271,  -479,  2288,  -479,  -479,
    -479,  -479,  -479,  -479,  -479,   195,  -479,  -479,  -479,  -479,
     184,   199,  -479,  -479,   220,     6,    -2,  1496,  -479,  2288,
     270,  -479,    15,  3273,  1064,  -479,  2288,  2288,   202,  2288,
    -479,  2767,  -479,  2808,   314,   333,  -479,   218,  3273,   613,
     219,  2849,  -479,   286,   225,  -479,   188,    23,  -479,  -479,
    -479,   354,    24,    33,    33,    33,   232,  -479,  1595,   291,
    2890,   238,  2288,   288,   190,   274,  -479,   317,  -479,   171,
    -479,  2288,  -479,  -479,  -479,  -479,  2288,  2288,  2288,  2288,
    2288,  2288,  2288,  2288,  2288,  2288,  2288,  2288,  2288,  2288,
    2288,  2288,  2288,  2288,  2288,   161,  -479,  -479,  -479,  1694,
    2288,  2288,  2288,  2288,  2288,  2288,  2288,  2288,  2288,  2288,
    2288,  -479,  -479,  2288,  2288,   112,   -11,  -479,     2,   256,
    -479,     6,  -479,  2931,  2972,  -479,  1793,  2288,  -479,   318,
    2288,   260,   394,  3273,   315,    65,   336,  3013,  -479,  -479,
    -479,   340,   187,  -479,  -479,  -479,  -479,   263,  -479,  2288,
    -479,  -479,   -34,  -479,   187,   335,  -479,    20,  -479,  -479,
    -479,    31,   272,   273,    22,    33,  3136,   275,   403,    34,
    -479,  -479,  2387,    33,  -479,  -479,  -479,   941,  1444,  -479,
    -479,   343,  -479,   299,   405,   282,   290,     6,    -2,  2288,
    1748,  2288,  2288,  2288,  2288,  2238,  2336,   933,  1056,  1056,
    1056,  1056,   521,   521,   521,   521,   331,   331,   337,   337,
     337,   271,   271,   271,  -479,     5,  1845,  1845,  1845,  1845,
    1845,  1845,  1845,  1845,  1845,  1845,  1845,  1845,  1793,   191,
    3273,   283,  2443,  -479,  1793,  -479,   191,  -479,  -479,    33,
     292,   423,    35,    40,  3273,   295,  3054,  -479,  -479,  -479,
    -479,   427,    39,  -479,  -479,   187,   187,   298,   304,  -479,
    -479,  -479,   301,  -479,  2509,  -479,  -479,   432,    33,   307,
    -479,  -479,  -479,  -479,   311,  -479,    82,  -479,  -479,  -479,
    1892,  -479,  1991,  -479,  -479,   381,   391,  2560,   312,   319,
    -479,  -479,  -479,  -479,  -479,  -479,  -479,   338,   343,   320,
     187,  -479,  -479,     6,  1650,  1845,  3232,  2042,  2140,   161,
    -479,   324,  -479,  2288,  -479,  -479,     8,  -479,  -479,  -479,
     339,  -479,  1064,  -479,  -479,  2090,  -479,  -479,  2288,  2288,
      33,    41,   187,   384,  1064,     9,   347,  -479,  -479,   187,
     357,  -479,   187,  -479,  -479,    33,  -479,    22,   460,    33,
    3273,    33,  3177,    36,  -479,  2288,  -479,  -479,   348,   343,
     345,   469,  -479,  -479,  -479,  1793,  1793,  -479,  -479,  -479,
    2601,  -479,   351,  2288,  2288,  -479,  -479,  -479,    33,    85,
     334,  2288,  1064,   352,  3273,   358,    33,   358,  -479,  -479,
     481,  -479,   355,   356,  -479,    -5,   378,   360,   496,   374,
    -479,  -479,    22,  -479,  2288,  -479,  -479,  2189,  -479,  -479,
    -479,   368,  1228,   375,   469,  -479,   343,   362,   380,   382,
    2288,   256,  -479,  -479,  -479,   376,  2644,   406,   455,  -479,
    3095,  -479,  -479,    41,   386,  -479,   387,   187,  -479,   160,
    -479,   155,  -479,  -479,   388,   516,    42,   187,  -479,   187,
    -479,  -479,    88,  1845,    33,  3273,  -479,   389,  -479,   402,
    -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
    -479,   433,   183,  -479,    26,  -479,  -479,  1944,  -479,  1793,
     414,  -479,  -479,   191,  -479,  1064,  -479,   393,  2288,  -479,
    -479,  -479,  -479,   192,   395,  2288,    11,   185,  -479,   398,
      51,   463,   524,  -479,   421,   343,  -479,  -479,  -479,  -479,
     470,  -479,  -479,  -479,   407,   191,  -479,  -479,  -479,  -479,
     408,  1064,  1064,   410,  -479,  2685,  -479,  -479,  -479,  -479,
    -479,    66,   530,   187,   187,  -479,   536,    28,   314,  -479,
    -479,  -479,  -479,  -479,  -479,  -479,  -479,   409,   482,   540,
     187,  -479,  -479,   497,   187,   501,  -479,   505,   351,  1064,
    -479,   153,  -479,   563,   187,  -479,   437,  -479,   566,  -479,
    -479,  -479,   178,   187,  -479,  -479,   187,   441,  -479,   439,
    -479,    -5,  -479,   442,   443,    -1,  -479,  -479,  -479,  -479,
     487,   448,   454,  -479,   487,  -479,  -479,   343,  -479,  -479,
     522,   456,  -479,   453,  -479,   458,  -479
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -479,  -479,  -479,  -479,  -479,  -251,  -479,  -479,  -113,  -479,
    -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
    -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
    -479,  -479,  -107,  -479,  -479,  -479,   221,  -479,   321,   322,
     -42,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
    -479,  -479,   138,   113,    68,  -479,  -479,  -432,  -479,  -479,
     -18,  -479,   -79,  -479,    10,  -314,  -479,  -479,   359,  -479,
      89,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,    56,
    -479,  -478,  -479,  -393,  -479,  -479,   -15,  -479,  -479,  -479,
    -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
    -479,  -479,   -23,  -180,  -479,  -479,  -479,  -479,  -479,  -479,
      87,    43,   173,   136,  -479,  -479,   105,  -479,     0,   467,
    -329,   252,   206,  -479,  -479,  -479,  -479,  -479,   -52,  -479,
    -176,  -479,  -479,     3,   -22,  -479,   141,  -319,  -479,  -479,
    -479,   -21,   107,   182,  -479,  -479,  -479,   210,  -479,  -479,
    -479,  -479,  -479,  -479
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -330
static const yytype_int16 yytable[] =
{
     121,   125,   126,   296,   372,   100,   101,   102,   103,   104,
     105,   106,   177,   108,   109,   110,   111,   112,   113,   114,
     433,   239,   119,   237,   421,   324,   124,   431,   378,   147,
     430,   262,   265,   133,   177,   502,   665,   636,   155,   380,
     141,   143,   223,  -134,   148,   493,   151,   443,  -135,   584,
     223,   152,   343,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   552,   170,   223,   419,   483,
      30,   551,   496,   611,    30,   115,   226,    30,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     457,   584,   115,  -137,    30,   394,   457,   658,     3,  -316,
    -316,   130,   131,   115,   231,    30,   518,   227,   519,   520,
     156,   115,   153,    30,   612,    -2,   603,   553,   607,   127,
    -328,   552,   244,   224,  -316,  -316,   129,   233,  -329,   234,
     515,   224,   516,   207,   208,  -120,   243,   148,   659,   247,
     697,   698,   225,   384,   159,   178,    69,   145,   224,    69,
     484,   503,   637,   395,   360,   135,   238,   297,   298,   539,
     379,   528,   529,   424,   263,   266,    69,   623,   276,   666,
     424,   381,   288,   553,   401,  -134,   136,    69,   160,   444,
    -135,   300,   121,   125,   126,    69,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   630,   297,   298,   124,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   352,   458,   340,   342,  -137,   117,   117,   616,   365,
     366,   120,   137,    30,   139,   617,   148,   354,   161,   478,
     356,   295,   163,    30,  -114,  -114,  -114,   605,   606,   164,
     149,   604,   605,   606,   172,    26,    27,   367,   115,   374,
      30,   422,   279,    30,   165,    32,   166,   280,   406,  -112,
    -112,  -112,   116,   118,   627,   624,   413,   605,   606,  -162,
     173,   174,   397,   633,   605,   606,   167,   571,   572,   573,
     574,   575,   576,   168,   175,   369,  -114,   176,   608,   414,
     179,   415,   416,   417,   418,    69,   650,   369,   221,   368,
      60,    61,    62,    63,    64,    69,   222,   297,   298,   487,
     205,  -112,  -268,   352,   297,   298,   282,   283,   639,   352,
     259,   501,    69,   423,   131,    69,   290,   228,   148,   230,
     235,   246,  -138,   245,   148,   250,   252,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   253,
     279,   255,   261,   279,   257,   280,   258,   264,   280,   269,
     270,   272,   273,   199,   200,   201,   202,   203,   204,   541,
     205,   286,   202,   203,   204,   472,   205,   294,   371,   657,
     460,   291,   462,  -316,  -316,   344,   121,   125,   126,   355,
     371,   357,   358,   373,   359,   671,   361,   377,   369,   369,
     364,   392,   382,   405,   383,   391,   408,   424,   410,   682,
     489,   411,   124,   480,   282,   283,   281,   282,   283,   412,
     428,   435,   434,   289,   436,   148,   130,   376,   243,   494,
     442,   694,   353,   449,   450,   452,   472,   701,   454,   424,
     456,   464,   465,   369,   500,   467,   469,   509,   468,    43,
     352,   352,   473,   715,   479,   522,   571,   572,   573,   574,
     575,   576,   577,   514,  -138,   148,   148,   526,   543,   485,
     385,   389,   628,   340,   536,   369,   505,   525,   523,   398,
     533,   540,   369,   542,   547,   369,   548,   550,   557,    43,
     558,   371,   371,   570,   559,   578,   571,   572,   573,   574,
     575,   576,   577,   561,   563,   566,   568,   565,   652,   653,
     585,   595,   586,   591,   610,   593,   600,   601,   609,   621,
     587,   420,   618,   625,   629,   642,   634,   643,   447,   448,
     640,   644,   646,   660,   353,   619,   371,   649,   651,   664,
     353,   654,   672,   674,   673,   389,   681,  -330,  -330,  -330,
    -330,   197,   198,   199,   200,   201,   202,   203,   204,   676,
     205,   297,   298,   678,   352,   679,   683,   685,   371,   686,
     691,   692,   695,   474,   269,   371,   696,   702,   371,   148,
     369,   706,   645,   707,   711,   714,   712,   708,   243,   453,
     369,   716,   369,   297,   298,   635,   667,   524,   402,   403,
     546,   599,   693,   560,   569,   499,   680,   655,   588,   562,
     641,   375,   506,   260,   535,   510,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   622,   513,
       0,   490,     0,     0,     0,     0,   495,   498,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   511,     0,   385,     0,   389,     0,   389,     0,     0,
       0,     0,  -316,  -316,     0,     0,     0,     0,     0,     0,
       0,   353,   353,   371,   709,     0,   369,   369,     0,     0,
       0,     0,     0,   371,   389,   371,     0,     0,     0,     0,
       0,     0,   545,   369,     0,     0,     0,   369,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   369,   385,     0,
     602,     0,     0,     0,     0,     0,   369,     0,     0,   369,
     613,     0,   614,     0,     0,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,     0,     0,   498,
       0,     0,     0,     0,   254,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     389,     0,     0,     0,     0,     0,     0,     0,     0,   371,
     371,  -316,  -316,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   353,   371,     0,     0,     0,
     371,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     371,     0,     0,     0,     0,     0,   661,   662,     0,   371,
       0,     0,   371,     0,     5,     6,     0,     0,     0,     0,
       7,     0,     0,   675,     0,     0,     0,   677,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   684,     0,     0,
       0,     0,     0,     0,     0,     0,   688,     0,     0,   690,
       8,     9,     0,     0,     0,     0,    10,     0,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
      22,    23,    24,    25,     0,     0,    26,    27,    28,    29,
      30,     0,    31,     0,     0,     0,    32,    33,    34,    35,
       0,    36,     0,    37,     0,    38,     0,     0,    39,     0,
       0,     0,    40,    41,    42,    43,    44,    45,     0,    46,
      47,    48,     0,     0,     0,    49,    50,    51,     0,    52,
      53,    54,    55,    56,    57,     0,     0,     0,     0,    58,
      59,    60,    61,    62,    63,    64,     0,     5,     6,     0,
       0,     0,    65,     7,     0,     0,     0,    66,     0,    67,
      68,     0,    69,    70,    71,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,     0,   205,     8,     9,     0,     0,     0,     0,    10,
       0,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,    22,    23,    24,    25,     0,     0,    26,
      27,    28,    29,    30,     0,    31,     0,     0,     0,    32,
      33,    34,    35,     0,    36,     0,    37,     0,    38,     0,
       0,    39,     0,     0,     0,    40,    41,    42,    43,    44,
      45,     0,    46,    47,    48,     0,     0,     0,    49,    50,
      51,     0,    52,    53,    54,   399,    56,    57,     0,     0,
       0,     0,    58,    59,    60,    61,    62,    63,    64,     0,
       5,     6,     0,     0,     0,    65,     7,     0,     0,     0,
      66,     0,    67,    68,     0,    69,    70,    71,  -330,  -330,
    -330,  -330,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,     0,   205,     8,     9,     0,     0,
       0,     0,    10,     0,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,    22,    23,    24,    25,
       0,     0,    26,    27,    28,    29,    30,     0,    31,     0,
       0,     0,    32,    33,    34,    35,     0,    36,     0,    37,
       0,    38,     0,     0,    39,     0,     0,     0,    40,    41,
       0,    43,    44,    45,     0,    46,    47,    48,     0,     0,
       0,     0,     0,    51,     0,    52,    53,    54,     5,     6,
       0,     0,     0,     0,     7,    58,    59,    60,    61,    62,
      63,    64,     0,     0,     0,     0,     0,     0,    65,     0,
       0,     0,     0,    66,     0,    67,    68,     0,    69,    70,
      71,     0,     0,     0,     8,     9,     0,     0,     0,     0,
      10,     0,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,    22,    23,    24,   180,   181,   182,
      26,    27,    28,    29,    30,     0,     0,     0,     0,     0,
      32,     0,     0,   183,     0,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,     0,   205,     0,     0,
       0,     0,     0,     0,    53,    54,     5,     6,     0,     0,
       0,     0,     7,    58,    59,    60,    61,    62,    63,    64,
       0,     0,     0,     0,     0,     0,    65,     0,     0,     0,
       0,    66,     0,   140,     0,     0,    69,    70,    71,     0,
       0,     0,     8,     9,     0,     0,     0,     0,    10,     0,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,    22,    23,    24,     0,     0,     0,    26,    27,
      28,    29,    30,     0,     0,     0,     0,     0,    32,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   567,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    53,    54,     5,     6,     0,     0,     0,     0,
       7,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,    65,     0,     0,     0,     0,    66,
       0,   142,     0,     0,    69,    70,    71,     0,     0,     0,
       8,     9,     0,     0,     0,     0,    10,     0,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
      22,    23,    24,   180,   181,   182,    26,    27,    28,    29,
      30,     0,     0,     0,     0,     0,    32,     0,     0,   183,
       0,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,     0,   205,     0,     0,     0,     0,     0,     0,
      53,    54,     5,     6,     0,     0,     0,     0,     7,    58,
      59,    60,    61,    62,    63,    64,     0,     0,     0,     0,
       0,     0,    65,     0,     0,     0,     0,    66,     0,   146,
       0,     0,    69,    70,    71,     0,     0,     0,     8,     9,
       0,     0,     0,     0,    10,     0,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,    22,    23,
      24,     0,     0,     0,    26,    27,    28,    29,    30,     0,
       0,     0,     0,     0,    32,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   404,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     6,     0,     0,     0,     0,     7,    53,    54,
       0,     0,     0,     0,     0,     0,     0,    58,    59,    60,
      61,    62,    63,    64,     0,     0,   275,     0,     0,     0,
      65,     0,     0,     0,     0,    66,   232,     8,     9,     0,
      69,    70,    71,    10,     0,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,    22,    23,    24,
     181,   182,     0,    26,    27,    28,    29,    30,     0,     0,
       0,     0,     0,    32,     0,   183,     0,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,     0,   205,
       5,     6,     0,     0,     0,     0,     7,    53,    54,     0,
       0,     0,     0,     0,     0,     0,    58,    59,    60,    61,
      62,    63,    64,     0,     0,   325,     0,     0,     0,    65,
       0,     0,     0,     0,    66,     0,     8,     9,     0,    69,
      70,    71,    10,     0,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,    22,    23,    24,   182,
       0,     0,    26,    27,    28,    29,    30,     0,     0,     0,
       0,     0,    32,   183,     0,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,     0,   205,     0,     5,
       6,     0,     0,     0,     0,     7,    53,    54,     0,     0,
       0,     0,     0,     0,     0,    58,    59,    60,    61,    62,
      63,    64,     0,     0,   349,     0,     0,     0,    65,     0,
       0,     0,     0,    66,     0,     8,     9,     0,    69,    70,
      71,    10,     0,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,    22,    23,    24,     0,     0,
       0,    26,    27,    28,    29,    30,     0,     0,     0,     0,
     183,    32,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,     0,   205,     0,     0,     0,     5,     6,
       0,     0,     0,     0,     7,    53,    54,     0,     0,     0,
       0,     0,     0,     0,    58,    59,    60,    61,    62,    63,
      64,     0,     0,   459,     0,     0,     0,    65,     0,     0,
       0,     0,    66,     0,     8,     9,     0,    69,    70,    71,
      10,     0,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,    22,    23,    24,     0,     0,     0,
      26,    27,    28,    29,    30,     0,     0,     0,     0,     0,
      32,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,     0,   205,     0,     0,     0,     5,     6,     0,
       0,     0,     0,     7,    53,    54,     0,     0,     0,     0,
       0,     0,     0,    58,    59,    60,    61,    62,    63,    64,
       0,     0,   461,     0,     0,     0,    65,     0,     0,     0,
       0,    66,     0,     8,     9,     0,    69,    70,    71,    10,
       0,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,    22,    23,    24,     0,     0,     0,    26,
      27,    28,    29,    30,     0,     0,     0,     0,     0,    32,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
       0,   205,     0,     0,     0,     0,     5,     6,     0,     0,
       0,     0,     7,    53,    54,     0,     0,     0,     0,     0,
       0,     0,    58,    59,    60,    61,    62,    63,    64,     0,
       0,   488,     0,     0,     0,    65,     0,     0,     0,     0,
      66,     0,     8,     9,     0,    69,    70,    71,    10,     0,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,    22,    23,    24,     0,     0,     0,    26,    27,
      28,    29,    30,     0,     0,     0,     0,     0,    32,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,     0,   205,
       0,     0,     0,     0,     0,     5,     6,     0,     0,     0,
       0,     7,    53,    54,     0,     0,     0,     0,     0,     0,
       0,    58,    59,    60,    61,    62,    63,    64,     0,     0,
     564,     0,     0,     0,    65,     0,     0,     0,     0,    66,
       0,     8,     9,     0,    69,    70,    71,    10,     0,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,    22,    23,    24,     0,     0,     0,    26,    27,    28,
      29,    30,     0,     0,     0,     0,     0,    32,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,     0,   205,     0,     0,
       0,     0,     0,     0,     5,     6,     0,     0,     0,     0,
       7,    53,    54,     0,     0,     0,     0,     0,     0,     0,
      58,    59,    60,    61,    62,    63,    64,     0,     0,     0,
       0,     0,     0,    65,     0,     0,     0,     0,    66,     0,
       8,     9,     0,    69,    70,    71,    10,     0,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
      22,    23,    24,     0,     0,     0,    26,    27,    28,    29,
      30,     0,     0,     0,     0,     0,    32,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,     0,   205,     0,     0,     0,     0,
       0,     0,     0,     5,     6,     0,     0,     0,     0,     7,
      53,    54,     0,     0,     0,     0,     0,     0,     0,    58,
      59,    60,    61,    62,    63,    64,     0,     0,     0,     0,
       0,     0,    65,     0,     0,     0,     0,    66,     0,     8,
       9,     0,    69,    70,    71,    10,     0,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,    22,
      23,    24,   180,   181,   182,    26,    27,    28,   396,    30,
       0,     0,     0,     0,     0,    32,     0,     0,   183,     0,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,     0,   205,     0,     0,     0,     0,     0,     0,    53,
      54,     0,     0,     0,     0,     0,     0,     0,    58,    59,
      60,    61,    62,    63,    64,     0,     0,     0,   180,   181,
     182,    65,     0,     0,     0,     0,    66,     0,     0,     0,
       0,    69,    70,    71,   183,     0,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,     0,   205,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   180,
     181,   182,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   183,   429,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,     0,   205,
     180,   181,   182,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   183,     0,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,     0,
     205,     0,   451,   180,   181,   182,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   183,
       0,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,     0,   205,   180,   181,   182,     0,     0,     0,
       0,     0,     0,   466,     0,     0,     0,     0,     0,     0,
     183,   636,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,     0,   205,   180,   181,   182,     0,     0,
       0,     0,     0,     0,   532,     0,     0,     0,     0,     0,
       0,   183,     0,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,     0,   205,   180,   181,   182,     0,
       0,     0,     0,     0,     0,     0,     0,   592,     0,     0,
       0,     0,   183,     0,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,     0,   205,   180,   181,   182,
       0,     0,     0,     0,     0,     0,   637,     0,     0,     0,
       0,     0,     0,   183,     0,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,     0,   205,   180,   181,
     182,     0,     0,     0,     0,     0,     0,   206,     0,     0,
       0,     0,     0,     0,   183,     0,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,     0,   205,   180,
     181,   182,     0,     0,     0,     0,     0,     0,   248,     0,
       0,     0,     0,     0,     0,   183,     0,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,     0,   205,
     180,   181,   182,     0,     0,     0,     0,     0,     0,   249,
       0,     0,     0,     0,     0,     0,   183,     0,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,     0,
     205,   180,   181,   182,     0,     0,     0,     0,     0,     0,
     256,     0,     0,     0,     0,     0,     0,   183,     0,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
       0,   205,   180,   181,   182,     0,     0,     0,     0,     0,
     285,     0,     0,     0,     0,     0,     0,     0,   183,     0,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,     0,   205,   180,   181,   182,     0,     0,     0,     0,
       0,   347,     0,     0,     0,     0,     0,     0,     0,   183,
       0,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,     0,   205,   180,   181,   182,     0,     0,     0,
       0,     0,   348,     0,     0,     0,     0,     0,     0,     0,
     183,     0,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,     0,   205,   180,   181,   182,     0,     0,
       0,     0,     0,   363,     0,     0,     0,     0,     0,     0,
       0,   183,     0,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,     0,   205,   180,   181,   182,     0,
       0,     0,     0,     0,   437,     0,     0,     0,     0,     0,
       0,     0,   183,     0,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,     0,   205,     0,     0,     0,
       0,     0,     0,     0,     0,   597,     0,     0,     0,     0,
       0,   180,   181,   182,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   390,   183,   477,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
       0,   205,   180,   181,   182,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   517,   183,     0,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,     0,   205
};

static const yytype_int16 yycheck[] =
{
      23,    23,    23,   179,   255,     5,     6,     7,     8,     9,
      10,    11,     8,    13,    14,    15,    16,    17,    18,    19,
     349,   134,    22,     8,   338,   205,    23,   346,     8,    44,
     344,     8,     8,    33,     8,    26,     8,    26,    72,     8,
      40,    41,    61,     8,    44,   438,    46,     8,     8,   527,
      61,    78,   228,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    70,    66,    61,    63,    61,
      72,   503,    31,    31,    72,    70,    98,    72,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       8,   569,    70,     8,    72,    61,     8,    31,     0,    59,
      60,   138,   139,    70,   126,    72,    70,   107,    72,    73,
     144,    70,   139,    72,    72,     0,   548,   122,   550,   139,
     139,    70,   137,   142,    59,    60,   139,   127,   139,   129,
     459,   142,   461,    59,    60,   140,   136,   137,    72,   139,
     141,   142,   144,   121,   115,   141,   144,    70,   142,   144,
     142,   142,   141,   119,    89,   139,   141,   179,   179,   488,
     140,   475,   476,   339,   141,   141,   144,   141,   168,   141,
     346,   140,   172,   122,   287,   140,   139,   144,   115,   140,
     140,   181,   205,   205,   205,   144,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   598,   228,   228,   205,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   236,   140,   223,   224,   140,    20,    21,   140,    42,
      43,    70,   139,    72,   139,   564,   236,   237,    72,   419,
     240,    70,   139,    72,    91,    92,    93,    92,    93,   139,
      44,    91,    92,    93,   142,    68,    69,    70,    70,   259,
      72,    70,    72,    72,   139,    78,   139,    77,   291,    91,
      92,    93,    20,    21,   593,   589,   298,    92,    93,    96,
      70,    71,   282,    91,    92,    93,   139,   104,   105,   106,
     107,   108,   109,   139,    70,   252,   143,    70,   143,   299,
     138,   301,   302,   303,   304,   144,   625,   264,   139,   122,
     123,   124,   125,   126,   127,   144,   119,   339,   339,   432,
      49,   143,   138,   338,   346,   346,   136,   137,   143,   344,
     142,   444,   144,   142,   139,   144,   146,   138,   338,   119,
      70,   139,     8,   137,   344,    31,    13,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,   141,
      72,   142,   156,    72,    78,    77,   141,    13,    77,   163,
     164,   165,   140,    42,    43,    44,    45,    46,    47,   492,
      49,   143,    45,    46,    47,   408,    49,    70,   252,   640,
     390,   117,   392,    59,    60,   139,   419,   419,   419,    81,
     264,   141,     8,   140,    89,   656,    70,    72,   365,   366,
      70,     8,   140,    70,   141,   140,   117,   593,    13,   670,
     435,   139,   419,   423,   136,   137,   135,   136,   137,   139,
     147,     8,   140,   145,   139,   435,   138,   264,   438,   439,
      13,   692,   236,   139,   143,    13,   469,   698,   141,   625,
     139,    70,    61,   410,    70,   143,   118,   100,   139,    97,
     475,   476,   142,   714,   140,   465,   104,   105,   106,   107,
     108,   109,   110,    13,   140,   475,   476,     8,   120,   140,
     274,   275,   595,   483,   484,   442,   139,   142,   140,   283,
     139,   491,   449,   141,    13,   452,   141,   141,   120,    97,
     140,   365,   366,   526,     8,   143,   104,   105,   106,   107,
     108,   109,   110,   139,   514,   147,   141,   517,   631,   632,
     140,    66,   140,   147,     8,   119,   140,   140,   140,    96,
     530,   325,   143,   119,   141,    72,   141,    13,   365,   366,
     142,   120,    72,    13,   338,   143,   410,   140,   140,    13,
     344,   141,   143,    13,    72,   349,   669,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    72,
      49,   593,   593,    72,   589,    70,    13,   140,   442,    13,
     139,   142,   140,   410,   378,   449,   143,   100,   452,   589,
     547,   143,   615,   139,    72,   142,   140,   704,   598,   378,
     557,   143,   559,   625,   625,   605,   648,   469,   287,   287,
     497,   543,   691,   508,   525,   442,   668,   635,   531,   512,
     610,   262,   449,   156,   483,   452,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,   582,   457,
      -1,   435,    -1,    -1,    -1,    -1,   440,   441,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   455,    -1,   457,    -1,   459,    -1,   461,    -1,    -1,
      -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   475,   476,   547,   707,    -1,   643,   644,    -1,    -1,
      -1,    -1,    -1,   557,   488,   559,    -1,    -1,    -1,    -1,
      -1,    -1,   496,   660,    -1,    -1,    -1,   664,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   674,   512,    -1,
     547,    -1,    -1,    -1,    -1,    -1,   683,    -1,    -1,   686,
     557,    -1,   559,    -1,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,   543,
      -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     564,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   643,
     644,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   589,   660,    -1,    -1,    -1,
     664,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     674,    -1,    -1,    -1,    -1,    -1,   643,   644,    -1,   683,
      -1,    -1,   686,    -1,     6,     7,    -1,    -1,    -1,    -1,
      12,    -1,    -1,   660,    -1,    -1,    -1,   664,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   674,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   683,    -1,    -1,   686,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    64,    65,    -1,    -1,    68,    69,    70,    71,
      72,    -1,    74,    -1,    -1,    -1,    78,    79,    80,    81,
      -1,    83,    -1,    85,    -1,    87,    -1,    -1,    90,    -1,
      -1,    -1,    94,    95,    96,    97,    98,    99,    -1,   101,
     102,   103,    -1,    -1,    -1,   107,   108,   109,    -1,   111,
     112,   113,   114,   115,   116,    -1,    -1,    -1,    -1,   121,
     122,   123,   124,   125,   126,   127,    -1,     6,     7,    -1,
      -1,    -1,   134,    12,    -1,    -1,    -1,   139,    -1,   141,
     142,    -1,   144,   145,   146,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    65,    -1,    -1,    68,
      69,    70,    71,    72,    -1,    74,    -1,    -1,    -1,    78,
      79,    80,    81,    -1,    83,    -1,    85,    -1,    87,    -1,
      -1,    90,    -1,    -1,    -1,    94,    95,    96,    97,    98,
      99,    -1,   101,   102,   103,    -1,    -1,    -1,   107,   108,
     109,    -1,   111,   112,   113,   114,   115,   116,    -1,    -1,
      -1,    -1,   121,   122,   123,   124,   125,   126,   127,    -1,
       6,     7,    -1,    -1,    -1,   134,    12,    -1,    -1,    -1,
     139,    -1,   141,   142,    -1,   144,   145,   146,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    64,    65,
      -1,    -1,    68,    69,    70,    71,    72,    -1,    74,    -1,
      -1,    -1,    78,    79,    80,    81,    -1,    83,    -1,    85,
      -1,    87,    -1,    -1,    90,    -1,    -1,    -1,    94,    95,
      -1,    97,    98,    99,    -1,   101,   102,   103,    -1,    -1,
      -1,    -1,    -1,   109,    -1,   111,   112,   113,     6,     7,
      -1,    -1,    -1,    -1,    12,   121,   122,   123,   124,   125,
     126,   127,    -1,    -1,    -1,    -1,    -1,    -1,   134,    -1,
      -1,    -1,    -1,   139,    -1,   141,   142,    -1,   144,   145,
     146,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    64,     9,    10,    11,
      68,    69,    70,    71,    72,    -1,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,   112,   113,     6,     7,    -1,    -1,
      -1,    -1,    12,   121,   122,   123,   124,   125,   126,   127,
      -1,    -1,    -1,    -1,    -1,    -1,   134,    -1,    -1,    -1,
      -1,   139,    -1,   141,    -1,    -1,   144,   145,   146,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    64,    -1,    -1,    -1,    68,    69,
      70,    71,    72,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,   113,     6,     7,    -1,    -1,    -1,    -1,
      12,   121,   122,   123,   124,   125,   126,   127,    -1,    -1,
      -1,    -1,    -1,    -1,   134,    -1,    -1,    -1,    -1,   139,
      -1,   141,    -1,    -1,   144,   145,   146,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    64,     9,    10,    11,    68,    69,    70,    71,
      72,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
     112,   113,     6,     7,    -1,    -1,    -1,    -1,    12,   121,
     122,   123,   124,   125,   126,   127,    -1,    -1,    -1,    -1,
      -1,    -1,   134,    -1,    -1,    -1,    -1,   139,    -1,   141,
      -1,    -1,   144,   145,   146,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    -1,    -1,    -1,    68,    69,    70,    71,    72,    -1,
      -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     6,     7,    -1,    -1,    -1,    -1,    12,   112,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,
     124,   125,   126,   127,    -1,    -1,    31,    -1,    -1,    -1,
     134,    -1,    -1,    -1,    -1,   139,   140,    42,    43,    -1,
     144,   145,   146,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      10,    11,    -1,    68,    69,    70,    71,    72,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       6,     7,    -1,    -1,    -1,    -1,    12,   112,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,
     125,   126,   127,    -1,    -1,    31,    -1,    -1,    -1,   134,
      -1,    -1,    -1,    -1,   139,    -1,    42,    43,    -1,   144,
     145,   146,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    64,    11,
      -1,    -1,    68,    69,    70,    71,    72,    -1,    -1,    -1,
      -1,    -1,    78,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,     6,
       7,    -1,    -1,    -1,    -1,    12,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,
     126,   127,    -1,    -1,    31,    -1,    -1,    -1,   134,    -1,
      -1,    -1,    -1,   139,    -1,    42,    43,    -1,   144,   145,
     146,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    -1,    -1,    -1,    -1,
      25,    78,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,     6,     7,
      -1,    -1,    -1,    -1,    12,   112,   113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,   126,
     127,    -1,    -1,    31,    -1,    -1,    -1,   134,    -1,    -1,
      -1,    -1,   139,    -1,    42,    43,    -1,   144,   145,   146,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    64,    -1,    -1,    -1,
      68,    69,    70,    71,    72,    -1,    -1,    -1,    -1,    -1,
      78,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,    -1,     6,     7,    -1,
      -1,    -1,    -1,    12,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   121,   122,   123,   124,   125,   126,   127,
      -1,    -1,    31,    -1,    -1,    -1,   134,    -1,    -1,    -1,
      -1,   139,    -1,    42,    43,    -1,   144,   145,   146,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    -1,    -1,    -1,    68,
      69,    70,    71,    72,    -1,    -1,    -1,    -1,    -1,    78,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,    -1,    -1,     6,     7,    -1,    -1,
      -1,    -1,    12,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   121,   122,   123,   124,   125,   126,   127,    -1,
      -1,    31,    -1,    -1,    -1,   134,    -1,    -1,    -1,    -1,
     139,    -1,    42,    43,    -1,   144,   145,   146,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    64,    -1,    -1,    -1,    68,    69,
      70,    71,    72,    -1,    -1,    -1,    -1,    -1,    78,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,    -1,    -1,    -1,     6,     7,    -1,    -1,    -1,
      -1,    12,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   121,   122,   123,   124,   125,   126,   127,    -1,    -1,
      31,    -1,    -1,    -1,   134,    -1,    -1,    -1,    -1,   139,
      -1,    42,    43,    -1,   144,   145,   146,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    -1,    -1,    -1,    68,    69,    70,
      71,    72,    -1,    -1,    -1,    -1,    -1,    78,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,     6,     7,    -1,    -1,    -1,    -1,
      12,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     121,   122,   123,   124,   125,   126,   127,    -1,    -1,    -1,
      -1,    -1,    -1,   134,    -1,    -1,    -1,    -1,   139,    -1,
      42,    43,    -1,   144,   145,   146,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    64,    -1,    -1,    -1,    68,    69,    70,    71,
      72,    -1,    -1,    -1,    -1,    -1,    78,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     6,     7,    -1,    -1,    -1,    -1,    12,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,
     122,   123,   124,   125,   126,   127,    -1,    -1,    -1,    -1,
      -1,    -1,   134,    -1,    -1,    -1,    -1,   139,    -1,    42,
      43,    -1,   144,   145,   146,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    64,     9,    10,    11,    68,    69,    70,    71,    72,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,   112,
     113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,
     123,   124,   125,   126,   127,    -1,    -1,    -1,     9,    10,
      11,   134,    -1,    -1,    -1,    -1,   139,    -1,    -1,    -1,
      -1,   144,   145,   146,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,   143,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,   143,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,    -1,    -1,
      -1,    -1,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,   141,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
     141,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
     140,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,   140,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,   140,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,   140,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,   140,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   140,    -1,    -1,    -1,    -1,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   120,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   149,   150,     0,   151,     6,     7,    12,    42,    43,
      48,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    62,    63,    64,    65,    68,    69,    70,    71,
      72,    74,    78,    79,    80,    81,    83,    85,    87,    90,
      94,    95,    96,    97,    98,    99,   101,   102,   103,   107,
     108,   109,   111,   112,   113,   114,   115,   116,   121,   122,
     123,   124,   125,   126,   127,   134,   139,   141,   142,   144,
     145,   146,   152,   156,   157,   186,   187,   189,   192,   195,
     197,   229,   234,   245,   250,   259,   261,   262,   266,   267,
     269,   270,   278,   279,   280,   281,   282,   283,   289,   299,
     266,   266,   266,   266,   266,   266,   266,   244,   266,   266,
     266,   266,   266,   266,   266,    70,   269,   270,   269,   266,
      70,   250,   251,   252,   281,   282,   289,   139,   257,   139,
     138,   139,   230,   266,   162,   139,   139,   139,   172,   139,
     141,   266,   141,   266,   190,    70,   141,   234,   266,   270,
     173,   266,    78,   139,   185,    72,   144,   215,   216,   115,
     115,    72,   217,   139,   139,   139,   139,   139,   139,   295,
     266,   153,   142,   295,   295,    70,    70,     8,   141,   138,
       9,    10,    11,    25,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    49,   141,    59,    60,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,   139,   119,    61,   142,   144,   282,   266,   138,   237,
     119,   282,   140,   266,   266,    70,   246,     8,   141,   156,
     160,   231,   232,   266,   234,   270,   139,   266,   141,   141,
      31,   188,    13,   141,   141,   142,   141,    78,   141,   142,
     267,   270,     8,   141,    13,     8,   141,   183,   184,   270,
     270,   300,   270,   140,   235,    31,   266,   293,   294,    72,
      77,   135,   136,   137,   296,   140,   143,   154,   266,   145,
     146,   117,   196,   194,    70,    70,   278,   282,   289,   240,
     266,   241,   242,   238,   239,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   251,    31,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   249,   271,
     266,   284,   266,   278,   139,   258,   253,   140,   140,    31,
     213,   214,   234,   270,   266,    81,   266,   141,     8,    89,
      89,    70,   203,   140,    70,    42,    43,    70,   122,   259,
     260,   261,   153,   140,   266,   216,   260,    72,     8,   140,
       8,   140,   140,   141,   121,   270,   290,   291,   268,   270,
     120,   140,     8,   264,    61,   119,    71,   266,   270,   114,
     155,   156,   186,   187,   143,    70,   250,   193,   117,   198,
      13,   139,   139,   282,   266,   266,   266,   266,   266,    63,
     270,   213,    70,   142,   278,   285,   287,   288,   147,   143,
     213,   285,   158,   268,   140,     8,   139,   140,   164,   233,
     170,   168,    13,     8,   140,   167,   191,   260,   260,   139,
     143,   143,    13,   184,   141,   301,   139,     8,   140,    31,
     266,    31,   266,   297,    70,    61,   143,   143,   139,   118,
     199,   200,   250,   142,   260,   247,   248,    26,   251,   140,
     266,   286,   272,    61,   142,   140,   254,   156,    31,   234,
     270,   163,   161,   231,   266,   270,    31,   202,   270,   260,
      70,   156,    26,   142,   204,   139,   260,   263,   265,   100,
     260,   270,   292,   291,    13,   268,   268,   120,    70,    72,
      73,   298,   266,   140,   200,   142,     8,   218,   213,   213,
     243,   236,   143,   139,   276,   284,   266,   255,   159,   268,
     266,   156,   141,   120,   201,   270,   201,    13,   141,   205,
     141,   205,    70,   122,   210,   211,   212,   120,   140,     8,
     264,   139,   290,   266,    31,   266,   147,   147,   141,   218,
     250,   104,   105,   106,   107,   108,   109,   110,   143,   219,
     224,   225,   226,   227,   229,   140,   140,   266,   258,   277,
     273,   147,   143,   119,   256,    66,   209,   140,   165,   202,
     140,   140,   260,   205,    91,    92,    93,   205,   143,   140,
       8,    31,    72,   260,   260,   174,   140,   268,   143,   143,
     220,    96,   227,   141,   213,   119,   274,   285,   156,   141,
     231,   171,   169,    91,   141,   266,    26,   141,   208,   143,
     142,   212,    72,    13,   120,   250,    72,   228,   221,   140,
     285,   140,   156,   156,   141,   208,   207,   153,    31,    72,
      13,   260,   260,   175,    13,     8,   141,   188,   275,   166,
     206,   153,   143,    72,    13,   260,    72,   260,    72,    70,
     276,   156,   153,    13,   260,   140,    13,   222,   260,   176,
     260,   139,   142,   210,   153,   140,   143,   141,   142,   223,
     177,   153,   100,   178,   179,   180,   143,   139,   180,   250,
     181,    72,   140,   182,   142,   153,   143
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:

    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 4:

    { HANDLE_INTERACTIVE(); }
    break;

  case 7:

    { zend_do_early_binding(TSRMLS_C); }
    break;

  case 8:

    { zend_do_early_binding(TSRMLS_C); }
    break;

  case 9:

    { zend_do_halt_compiler_register(TSRMLS_C); YYACCEPT; }
    break;

  case 10:

    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 11:

    { HANDLE_INTERACTIVE(); }
    break;

  case 16:

    { zend_error(E_COMPILE_ERROR, "__HALT_COMPILER() can only be used from the outermost scope"); }
    break;

  case 17:

    { zend_do_ticks(TSRMLS_C); }
    break;

  case 19:

    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 20:

    { zend_do_if_after_statement(&(yyvsp[(4) - (6)]), 1 TSRMLS_CC); }
    break;

  case 21:

    { zend_do_if_end(TSRMLS_C); }
    break;

  case 22:

    { (yyvsp[(1) - (2)]).u.opline_num = get_next_op_number(CG(active_op_array));  }
    break;

  case 23:

    { zend_do_while_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 24:

    { zend_do_while_end(&(yyvsp[(1) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 25:

    { (yyvsp[(1) - (1)]).u.opline_num = get_next_op_number(CG(active_op_array));  zend_do_do_while_begin(TSRMLS_C); }
    break;

  case 26:

    { (yyvsp[(5) - (5)]).u.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 27:

    { zend_do_do_while_end(&(yyvsp[(1) - (9)]), &(yyvsp[(5) - (9)]), &(yyvsp[(7) - (9)]) TSRMLS_CC); }
    break;

  case 28:

    { zend_do_free(&(yyvsp[(3) - (4)]) TSRMLS_CC); (yyvsp[(4) - (4)]).u.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 29:

    { zend_do_extended_info(TSRMLS_C); zend_do_for_cond(&(yyvsp[(6) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 30:

    { zend_do_free(&(yyvsp[(9) - (10)]) TSRMLS_CC); zend_do_for_before_statement(&(yyvsp[(4) - (10)]), &(yyvsp[(7) - (10)]) TSRMLS_CC); }
    break;

  case 31:

    { zend_do_for_end(&(yyvsp[(7) - (12)]) TSRMLS_CC); }
    break;

  case 32:

    { zend_do_switch_cond(&(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 33:

    { zend_do_switch_end(&(yyvsp[(6) - (6)]) TSRMLS_CC); }
    break;

  case 34:

    { zend_do_brk_cont(ZEND_BRK, NULL TSRMLS_CC); }
    break;

  case 35:

    { zend_do_brk_cont(ZEND_BRK, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 36:

    { zend_do_brk_cont(ZEND_CONT, NULL TSRMLS_CC); }
    break;

  case 37:

    { zend_do_brk_cont(ZEND_CONT, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 38:

    { zend_do_return(NULL, 0 TSRMLS_CC); }
    break;

  case 39:

    { zend_do_return(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 40:

    { zend_do_return(&(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 45:

    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 46:

    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 47:

    { zend_error(E_COMPILE_ERROR,"use: Not yet supported. Please use include_once() or require_once()");  zval_dtor(&(yyvsp[(2) - (3)]).u.constant); }
    break;

  case 49:

    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 50:

    { zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 51:

    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 52:

    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); }
    break;

  case 53:

    { zend_check_writable_variable(&(yyvsp[(6) - (8)])); zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 54:

    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 55:

    { (yyvsp[(1) - (1)]).u.opline_num = get_next_op_number(CG(active_op_array)); zend_do_declare_begin(TSRMLS_C); }
    break;

  case 56:

    { zend_do_declare_end(&(yyvsp[(1) - (6)]) TSRMLS_CC); }
    break;

  case 58:

    { zend_do_try(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 59:

    { zend_initialize_try_catch_element(&(yyvsp[(1) - (7)]) TSRMLS_CC); }
    break;

  case 60:

    { zend_do_first_catch(&(yyvsp[(7) - (9)]) TSRMLS_CC); }
    break;

  case 61:

    { zend_do_begin_catch(&(yyvsp[(1) - (12)]), &(yyvsp[(9) - (12)]), &(yyvsp[(11) - (12)]), 1 TSRMLS_CC); }
    break;

  case 62:

    { zend_do_end_catch(&(yyvsp[(1) - (16)]) TSRMLS_CC); }
    break;

  case 63:

    { zend_do_mark_last_catch(&(yyvsp[(7) - (18)]), &(yyvsp[(18) - (18)]) TSRMLS_CC); }
    break;

  case 64:

    { zend_do_throw(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 65:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 66:

    { (yyval).u.opline_num = -1; }
    break;

  case 67:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 68:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 69:

    { (yyval).u.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 70:

    { zend_do_begin_catch(&(yyvsp[(1) - (6)]), &(yyvsp[(3) - (6)]), &(yyvsp[(5) - (6)]), 0 TSRMLS_CC); }
    break;

  case 71:

    { zend_do_end_catch(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 74:

    { zend_do_end_variable_parse(BP_VAR_UNSET, 0 TSRMLS_CC); zend_do_unset(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 75:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 76:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 77:

    { zend_do_ticks(TSRMLS_C); }
    break;

  case 78:

    { zend_do_ticks(TSRMLS_C); }
    break;

  case 79:

    { (yyval).op_type = ZEND_RETURN_VAL; }
    break;

  case 80:

    { (yyval).op_type = ZEND_RETURN_REF; }
    break;

  case 81:

    { (yyvsp[(1) - (1)]).u.opline_num = CG(zend_lineno); }
    break;

  case 82:

    { zend_do_begin_function_declaration(&(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), 0, (yyvsp[(3) - (4)]).op_type, NULL TSRMLS_CC); }
    break;

  case 83:

    { zend_do_end_function_declaration(&(yyvsp[(1) - (11)]) TSRMLS_CC); }
    break;

  case 84:

    { zend_do_begin_class_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 85:

    { zend_do_end_class_declaration(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]) TSRMLS_CC); }
    break;

  case 86:

    { zend_do_begin_class_declaration(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]), NULL TSRMLS_CC); }
    break;

  case 87:

    { zend_do_end_class_declaration(&(yyvsp[(1) - (7)]), &(yyvsp[(2) - (7)]) TSRMLS_CC); }
    break;

  case 88:

    { (yyval).u.opline_num = CG(zend_lineno); (yyval).u.EA.type = 0; }
    break;

  case 89:

    { (yyval).u.opline_num = CG(zend_lineno); (yyval).u.EA.type = ZEND_ACC_EXPLICIT_ABSTRACT_CLASS; }
    break;

  case 90:

    { (yyval).u.opline_num = CG(zend_lineno); (yyval).u.EA.type = ZEND_ACC_FINAL_CLASS; }
    break;

  case 91:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 92:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 93:

    { (yyval).u.opline_num = CG(zend_lineno); (yyval).u.EA.type = ZEND_ACC_INTERFACE; }
    break;

  case 98:

    { zend_do_implements_interface(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 99:

    { zend_do_implements_interface(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 100:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 101:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 102:

    { zend_check_writable_variable(&(yyvsp[(1) - (1)])); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 103:

    { zend_check_writable_variable(&(yyvsp[(2) - (2)])); (yyval) = (yyvsp[(2) - (2)]);  (yyval).u.EA.type |= ZEND_PARSED_REFERENCE_VARIABLE; }
    break;

  case 104:

    { zend_do_declare_stmt(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 105:

    { zend_do_declare_stmt(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 106:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 107:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 108:

    { (yyval) = (yyvsp[(2) - (4)]); }
    break;

  case 109:

    { (yyval) = (yyvsp[(3) - (5)]); }
    break;

  case 110:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 111:

    { zend_do_extended_info(TSRMLS_C);  zend_do_case_before_statement(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 112:

    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (6)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 113:

    { zend_do_extended_info(TSRMLS_C);  zend_do_default_before_statement(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 114:

    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (5)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 121:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(2) - (2)]), 0 TSRMLS_CC); (yyval).op_type = IS_CONST; Z_LVAL((yyval).u.constant)=1; Z_TYPE((yyval).u.constant)=IS_LONG; INIT_PZVAL(&(yyval).u.constant); zend_do_receive_arg(ZEND_RECV, &tmp, &(yyval), NULL, &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]), 0 TSRMLS_CC); }
    break;

  case 122:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); (yyval).op_type = IS_CONST; Z_LVAL((yyval).u.constant)=1; Z_TYPE((yyval).u.constant)=IS_LONG; INIT_PZVAL(&(yyval).u.constant); zend_do_receive_arg(ZEND_RECV, &tmp, &(yyval), NULL, &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 1 TSRMLS_CC); }
    break;

  case 123:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(3) - (5)]), 0 TSRMLS_CC); (yyval).op_type = IS_CONST; Z_LVAL((yyval).u.constant)=1; Z_TYPE((yyval).u.constant)=IS_LONG; INIT_PZVAL(&(yyval).u.constant); zend_do_receive_arg(ZEND_RECV_INIT, &tmp, &(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(1) - (5)]), &(yyvsp[(3) - (5)]), 1 TSRMLS_CC); }
    break;

  case 124:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(2) - (4)]), 0 TSRMLS_CC); (yyval).op_type = IS_CONST; Z_LVAL((yyval).u.constant)=1; Z_TYPE((yyval).u.constant)=IS_LONG; INIT_PZVAL(&(yyval).u.constant); zend_do_receive_arg(ZEND_RECV_INIT, &tmp, &(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), 0 TSRMLS_CC); }
    break;

  case 125:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (4)]); Z_LVAL((yyval).u.constant)++; zend_do_receive_arg(ZEND_RECV, &tmp, &(yyval), NULL, &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); }
    break;

  case 126:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(5) - (5)]), 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (5)]); Z_LVAL((yyval).u.constant)++; zend_do_receive_arg(ZEND_RECV, &tmp, &(yyval), NULL, &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), 1 TSRMLS_CC); }
    break;

  case 127:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(5) - (7)]), 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (7)]); Z_LVAL((yyval).u.constant)++; zend_do_receive_arg(ZEND_RECV_INIT, &tmp, &(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(3) - (7)]), &(yyvsp[(5) - (7)]), 1 TSRMLS_CC); }
    break;

  case 128:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(4) - (6)]), 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (6)]); Z_LVAL((yyval).u.constant)++; zend_do_receive_arg(ZEND_RECV_INIT, &tmp, &(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), &(yyvsp[(4) - (6)]), 0 TSRMLS_CC); }
    break;

  case 129:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 130:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 131:

    { (yyval).op_type = IS_CONST; Z_TYPE((yyval).u.constant)=IS_NULL;}
    break;

  case 132:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 133:

    { Z_LVAL((yyval).u.constant) = 0; }
    break;

  case 134:

    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 135:

    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 136:

    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(2) - (2)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 137:

    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 138:

    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 139:

    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (4)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(4) - (4)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 140:

    { zend_do_fetch_global_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 141:

    { zend_do_fetch_global_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 142:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 143:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 144:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 145:

    { zend_do_fetch_static_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 146:

    { zend_do_fetch_static_variable(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 147:

    { zend_do_fetch_static_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 148:

    { zend_do_fetch_static_variable(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 151:

    { CG(access_type) = Z_LVAL((yyvsp[(1) - (1)]).u.constant); }
    break;

  case 154:

    { (yyvsp[(2) - (2)]).u.opline_num = CG(zend_lineno); }
    break;

  case 155:

    { zend_do_begin_function_declaration(&(yyvsp[(2) - (5)]), &(yyvsp[(5) - (5)]), 1, (yyvsp[(4) - (5)]).op_type, &(yyvsp[(1) - (5)]) TSRMLS_CC); }
    break;

  case 156:

    { zend_do_abstract_method(&(yyvsp[(5) - (10)]), &(yyvsp[(1) - (10)]), &(yyvsp[(10) - (10)]) TSRMLS_CC); zend_do_end_function_declaration(&(yyvsp[(2) - (10)]) TSRMLS_CC); }
    break;

  case 157:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 158:

    { Z_LVAL((yyval).u.constant) = 0;	}
    break;

  case 159:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 160:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 161:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 162:

    { (yyval) = (yyvsp[(1) - (1)]);  if (!(Z_LVAL((yyval).u.constant) & ZEND_ACC_PPP_MASK)) { Z_LVAL((yyval).u.constant) |= ZEND_ACC_PUBLIC; } }
    break;

  case 163:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 164:

    { Z_LVAL((yyval).u.constant) = zend_do_verify_access_types(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)])); }
    break;

  case 165:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 166:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PROTECTED; }
    break;

  case 167:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PRIVATE; }
    break;

  case 168:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_STATIC; }
    break;

  case 169:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 170:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_FINAL; }
    break;

  case 171:

    { zend_do_declare_property(&(yyvsp[(3) - (3)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 172:

    { zend_do_declare_property(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), CG(access_type) TSRMLS_CC); }
    break;

  case 173:

    { zend_do_declare_property(&(yyvsp[(1) - (1)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 174:

    { zend_do_declare_property(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), CG(access_type) TSRMLS_CC); }
    break;

  case 175:

    { zend_do_declare_class_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 176:

    { zend_do_declare_class_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 177:

    { zend_do_echo(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 178:

    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 179:

    { (yyval).op_type = IS_CONST;  Z_TYPE((yyval).u.constant) = IS_BOOL;  Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 180:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 181:

    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 182:

    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 183:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 184:

    { zend_do_list_init(TSRMLS_C); }
    break;

  case 185:

    { zend_do_list_end(&(yyval), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 186:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_assign(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 187:

    { zend_check_writable_variable(&(yyvsp[(1) - (4)])); zend_do_end_variable_parse(BP_VAR_W, 0 TSRMLS_CC); zend_do_end_variable_parse(BP_VAR_W, 0 TSRMLS_CC); zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 188:

    { zend_error(E_STRICT, "Assigning the return value of new by reference is deprecated");  zend_check_writable_variable(&(yyvsp[(1) - (5)])); zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 189:

    { zend_do_end_new_object(&(yyvsp[(3) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); zend_do_end_variable_parse(BP_VAR_W, 0 TSRMLS_CC); zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (7)]), &(yyvsp[(3) - (7)]) TSRMLS_CC); }
    break;

  case 190:

    { zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 191:

    { zend_do_end_new_object(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 192:

    { zend_do_clone(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 193:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 194:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 195:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 196:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 197:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 198:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 199:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 200:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 201:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 202:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 203:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 204:

    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_INC TSRMLS_CC); }
    break;

  case 205:

    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_INC TSRMLS_CC); }
    break;

  case 206:

    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_DEC TSRMLS_CC); }
    break;

  case 207:

    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_DEC TSRMLS_CC); }
    break;

  case 208:

    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 209:

    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 210:

    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 211:

    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 212:

    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 213:

    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 214:

    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 215:

    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 216:

    { zend_do_binary_op(ZEND_BOOL_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 217:

    { zend_do_binary_op(ZEND_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 218:

    { zend_do_binary_op(ZEND_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 219:

    { zend_do_binary_op(ZEND_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 220:

    { zend_do_binary_op(ZEND_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 221:

    { zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 222:

    { zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 223:

    { zend_do_binary_op(ZEND_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 224:

    { zend_do_binary_op(ZEND_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 225:

    { zend_do_binary_op(ZEND_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 226:

    { zend_do_binary_op(ZEND_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 227:

    { zend_do_binary_op(ZEND_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 228:

    { Z_LVAL((yyvsp[(1) - (2)]).u.constant)=0; Z_TYPE((yyvsp[(1) - (2)]).u.constant)=IS_LONG; (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 229:

    { Z_LVAL((yyvsp[(1) - (2)]).u.constant)=0; Z_TYPE((yyvsp[(1) - (2)]).u.constant)=IS_LONG; (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 230:

    { zend_do_unary_op(ZEND_BOOL_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 231:

    { zend_do_unary_op(ZEND_BW_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 232:

    { zend_do_binary_op(ZEND_IS_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 233:

    { zend_do_binary_op(ZEND_IS_NOT_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 234:

    { zend_do_binary_op(ZEND_IS_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 235:

    { zend_do_binary_op(ZEND_IS_NOT_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 236:

    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 237:

    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 238:

    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 239:

    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 240:

    { zend_do_instanceof(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 241:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 242:

    { zend_do_begin_qm_op(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 243:

    { zend_do_qm_true(&(yyvsp[(4) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 244:

    { zend_do_qm_false(&(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(2) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 245:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 246:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_LONG TSRMLS_CC); }
    break;

  case 247:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_DOUBLE TSRMLS_CC); }
    break;

  case 248:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_STRING TSRMLS_CC); }
    break;

  case 249:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_ARRAY TSRMLS_CC); }
    break;

  case 250:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_OBJECT TSRMLS_CC); }
    break;

  case 251:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_BOOL TSRMLS_CC); }
    break;

  case 252:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_NULL TSRMLS_CC); }
    break;

  case 253:

    { zend_do_exit(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 254:

    { zend_do_begin_silence(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 255:

    { zend_do_end_silence(&(yyvsp[(1) - (3)]) TSRMLS_CC); (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 256:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 257:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 258:

    { zend_do_shell_exec(&(yyval), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 259:

    { zend_do_print(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 260:

    { (yyvsp[(2) - (2)]).u.opline_num = zend_do_begin_function_call(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 261:

    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(4) - (5)]), 0, (yyvsp[(2) - (5)]).u.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 262:

    { zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 263:

    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 264:

    { zend_do_end_variable_parse(BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 265:

    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 266:

    { zend_do_end_variable_parse(BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_dynamic_function_call(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 267:

    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(4) - (5)]), 0, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 268:

    { zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 269:

    { zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 270:

    { zend_do_end_variable_parse(BP_VAR_R, 0 TSRMLS_CC); zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 271:

    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 272:

    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_declare_implicit_property(TSRMLS_C); }
    break;

  case 273:

    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).u.EA.type = ZEND_PARSED_MEMBER; }
    break;

  case 274:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 277:

    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); zend_do_declare_implicit_property(TSRMLS_C); }
    break;

  case 278:

    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 279:

    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 280:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 281:

    { Z_LVAL((yyval).u.constant)=0; }
    break;

  case 282:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 283:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 284:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 285:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 286:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 287:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 288:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 289:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 290:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 291:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 292:

    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_CT TSRMLS_CC); }
    break;

  case 293:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 294:

    { zval minus_one;  Z_TYPE(minus_one) = IS_LONG; Z_LVAL(minus_one) = -1;  mul_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant, &minus_one TSRMLS_CC);  (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 295:

    { (yyval) = (yyvsp[(3) - (4)]); Z_TYPE((yyval).u.constant) = IS_CONSTANT_ARRAY; }
    break;

  case 296:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 297:

    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_CT TSRMLS_CC); }
    break;

  case 298:

    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_CT TSRMLS_CC); }
    break;

  case 299:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 300:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 301:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 302:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 303:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 304:

    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); }
    break;

  case 305:

    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 308:

    { zend_do_add_static_array_element(&(yyval), &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)])); }
    break;

  case 309:

    { zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(3) - (3)])); }
    break;

  case 310:

    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)])); }
    break;

  case 311:

    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(1) - (1)])); }
    break;

  case 312:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 313:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 314:

    { zend_do_end_variable_parse(BP_VAR_R, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 315:

    { zend_do_end_variable_parse(BP_VAR_W, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 316:

    { zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 317:

    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 318:

    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 319:

    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).u.EA.type = (yyvsp[(1) - (7)]).u.EA.type | ((yyvsp[(7) - (7)]).u.EA.type ? (yyvsp[(7) - (7)]).u.EA.type : (yyvsp[(6) - (7)]).u.EA.type); }
    break;

  case 320:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 321:

    { (yyval).u.EA.type = (yyvsp[(2) - (2)]).u.EA.type; }
    break;

  case 322:

    { (yyval).u.EA.type = 0; }
    break;

  case 323:

    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 324:

    { (yyval).u.EA.type = (yyvsp[(4) - (4)]).u.EA.type; }
    break;

  case 325:

    { zend_do_pop_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); zend_do_begin_method_call(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 326:

    { zend_do_end_function_call(&(yyvsp[(1) - (4)]), &(yyval), &(yyvsp[(3) - (4)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);
			  zend_do_push_object(&(yyval) TSRMLS_CC); (yyval).u.EA.type = ZEND_PARSED_METHOD_CALL; }
    break;

  case 327:

    { zend_do_declare_implicit_property(TSRMLS_C); (yyval).u.EA.type = ZEND_PARSED_MEMBER; }
    break;

  case 328:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 329:

    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 330:

    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 331:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 332:

    { zend_do_begin_variable_parse(TSRMLS_C); (yyval) = (yyvsp[(1) - (1)]); (yyval).u.EA.type = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 333:

    { (yyval) = (yyvsp[(1) - (1)]); (yyval).u.EA.type = ZEND_PARSED_VARIABLE; }
    break;

  case 334:

    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); (yyval).u.EA.type = ZEND_PARSED_VARIABLE; }
    break;

  case 335:

    { (yyval) = (yyvsp[(1) - (1)]); (yyval).u.EA.type = ZEND_PARSED_STATIC_MEMBER; }
    break;

  case 336:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 337:

    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 338:

    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 339:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 340:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 341:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 342:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 343:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 344:

    { zend_do_end_variable_parse(BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 345:

    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (2)]) TSRMLS_CC);}
    break;

  case 346:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 347:

    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 348:

    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (1)]) TSRMLS_CC);}
    break;

  case 349:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 350:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 351:

    { Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 352:

    { Z_LVAL((yyval).u.constant)++; }
    break;

  case 355:

    { zend_do_add_list_element(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 356:

    { zend_do_new_list_begin(TSRMLS_C); }
    break;

  case 357:

    { zend_do_new_list_end(TSRMLS_C); }
    break;

  case 358:

    { zend_do_add_list_element(NULL TSRMLS_CC); }
    break;

  case 359:

    { zend_do_init_array(&(yyval), NULL, NULL, 0 TSRMLS_CC); }
    break;

  case 360:

    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 361:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(3) - (5)]), 0 TSRMLS_CC); }
    break;

  case 362:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(3) - (3)]), NULL, 0 TSRMLS_CC); }
    break;

  case 363:

    { zend_do_init_array(&(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;

  case 364:

    { zend_do_init_array(&(yyval), &(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 365:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 1 TSRMLS_CC); }
    break;

  case 366:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(4) - (4)]), NULL, 1 TSRMLS_CC); }
    break;

  case 367:

    { zend_do_init_array(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 1 TSRMLS_CC); }
    break;

  case 368:

    { zend_do_init_array(&(yyval), &(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 369:

    { zend_do_end_variable_parse(BP_VAR_R, 0 TSRMLS_CC);  zend_do_add_variable(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 370:

    { zend_do_add_string(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 371:

    { zend_do_init_string(&(yyval) TSRMLS_CC); }
    break;

  case 372:

    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 373:

    { zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 374:

    { fetch_array_begin(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 375:

    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyvsp[(2) - (3)]), &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); zend_do_fetch_property(&(yyval), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 376:

    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_simple_variable(&(yyval), &(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 377:

    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_array_begin(&(yyval), &(yyvsp[(2) - (6)]), &(yyvsp[(4) - (6)]) TSRMLS_CC); }
    break;

  case 378:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 379:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 380:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 381:

    { fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 382:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 383:

    { zend_do_isset_or_isempty(ZEND_ISEMPTY, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 384:

    { zend_do_include(ZEND_INCLUDE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 385:

    { zend_do_include(ZEND_INCLUDE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 386:

    { zend_do_isset_or_isempty(ZEND_ISSET, &(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 387:

    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 388:

    { znode tmp; zend_do_isset_or_isempty(ZEND_ISSET, &tmp, &(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &tmp, &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;


/* Line 1267 of yacc.c.  */

      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}





/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * indent-tabs-mode: t
 * End:
 */

