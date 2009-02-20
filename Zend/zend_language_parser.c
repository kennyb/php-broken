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
#define YYLAST   3548

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  148
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  159
/* YYNRULES -- Number of rules.  */
#define YYNRULES  395
/* YYNRULES -- Number of states.  */
#define YYNSTATES  730

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
     123,   127,   131,   135,   139,   141,   144,   148,   154,   155,
     156,   167,   168,   169,   180,   181,   188,   190,   191,   192,
     193,   194,   195,   214,   218,   220,   221,   223,   226,   227,
     228,   239,   241,   245,   247,   249,   253,   255,   257,   258,
     260,   261,   262,   274,   275,   284,   285,   293,   295,   298,
     301,   302,   305,   307,   308,   311,   312,   315,   317,   321,
     322,   325,   327,   330,   332,   334,   336,   340,   346,   350,
     355,   360,   366,   367,   368,   375,   376,   382,   384,   386,
     388,   389,   392,   394,   395,   398,   402,   408,   413,   418,
     424,   432,   439,   440,   442,   444,   446,   447,   449,   451,
     454,   458,   462,   467,   471,   473,   475,   478,   483,   487,
     493,   495,   499,   502,   503,   504,   509,   512,   513,   514,
     525,   527,   531,   533,   535,   536,   538,   540,   543,   545,
     547,   549,   551,   553,   555,   559,   565,   567,   571,   577,
     582,   586,   588,   589,   591,   592,   597,   599,   600,   608,
     612,   617,   618,   626,   627,   632,   635,   639,   643,   647,
     651,   655,   659,   663,   667,   671,   675,   679,   682,   685,
     688,   691,   692,   697,   698,   703,   704,   709,   710,   715,
     719,   723,   727,   731,   735,   739,   743,   747,   751,   755,
     759,   763,   766,   769,   772,   775,   779,   783,   787,   791,
     795,   799,   803,   807,   811,   815,   816,   817,   825,   827,
     830,   833,   836,   839,   842,   845,   848,   851,   852,   856,
     858,   863,   867,   870,   871,   877,   878,   886,   887,   895,
     896,   902,   904,   906,   908,   909,   910,   917,   919,   922,
     923,   926,   927,   930,   934,   935,   939,   941,   943,   945,
     947,   949,   951,   953,   955,   957,   959,   962,   965,   970,
     972,   976,   978,   980,   982,   984,   988,   992,   993,   996,
     997,   999,  1005,  1009,  1013,  1015,  1017,  1019,  1021,  1023,
    1025,  1026,  1027,  1035,  1037,  1040,  1041,  1042,  1047,  1048,
    1053,  1054,  1056,  1059,  1063,  1065,  1067,  1069,  1072,  1074,
    1079,  1084,  1086,  1088,  1093,  1094,  1096,  1098,  1099,  1102,
    1107,  1112,  1114,  1116,  1120,  1122,  1125,  1129,  1131,  1133,
    1134,  1140,  1141,  1142,  1145,  1151,  1155,  1159,  1161,  1168,
    1173,  1178,  1181,  1184,  1187,  1188,  1190,  1191,  1197,  1201,
    1205,  1212,  1216,  1218,  1220,  1222,  1227,  1232,  1235,  1238,
    1243,  1246,  1249,  1251,  1252,  1257
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     149,     0,    -1,   150,    -1,    -1,   150,   151,   152,    -1,
      -1,   156,    -1,   186,    -1,   187,    -1,   114,   139,   140,
     141,    -1,    -1,   153,   154,   155,    -1,    -1,   156,    -1,
     186,    -1,   187,    -1,   114,   139,   140,   141,    -1,   157,
      -1,   142,   153,   143,    -1,    -1,    -1,    65,   139,   270,
     140,   158,   156,   159,   213,    -1,    -1,    -1,    81,   139,
     160,   270,   140,   161,   212,    -1,    -1,    -1,    80,   162,
     156,    81,   139,   163,   270,   140,   141,    -1,    -1,    -1,
      -1,    83,   139,   235,   141,   164,   235,   141,   165,   235,
     140,   166,   203,    -1,    -1,    90,   139,   270,   140,   167,
     207,    -1,    94,   141,    -1,    94,   270,   141,    -1,    95,
     141,    -1,    95,   270,   141,    -1,    98,   141,    -1,    98,
     238,   141,    -1,    98,   274,   141,    -1,   103,   219,   141,
      -1,   109,   221,   141,    -1,    79,   234,   141,    -1,    74,
      -1,   270,   141,    -1,   102,   185,   141,    -1,   111,   139,
     183,   140,   141,    -1,    -1,    -1,    85,   139,   274,    89,
     168,   202,   201,   140,   169,   204,    -1,    -1,    -1,    85,
     139,   238,    89,   170,   274,   201,   140,   171,   204,    -1,
      -1,    87,   172,   139,   206,   140,   205,    -1,   141,    -1,
      -1,    -1,    -1,    -1,    -1,    99,   173,   142,   153,   143,
     100,   139,   174,   254,   175,    72,   140,   176,   142,   153,
     143,   177,   178,    -1,   101,   270,   141,    -1,   179,    -1,
      -1,   180,    -1,   179,   180,    -1,    -1,    -1,   100,   139,
     254,   181,    72,   140,   182,   142,   153,   143,    -1,   184,
      -1,   183,     8,   184,    -1,   274,    -1,    78,    -1,   139,
      78,   140,    -1,   189,    -1,   192,    -1,    -1,    31,    -1,
      -1,    -1,    96,   190,   188,    70,   191,   139,   214,   140,
     142,   153,   143,    -1,    -1,   195,    70,   196,   193,   199,
     142,   222,   143,    -1,    -1,   197,    70,   194,   198,   142,
     222,   143,    -1,   115,    -1,   108,   115,    -1,   107,   115,
      -1,    -1,   117,   254,    -1,   116,    -1,    -1,   117,   200,
      -1,    -1,   118,   200,    -1,   254,    -1,   200,     8,   254,
      -1,    -1,   120,   202,    -1,   274,    -1,    31,   274,    -1,
     156,    -1,   156,    -1,   156,    -1,    70,    13,   264,    -1,
     206,     8,    70,    13,   264,    -1,   142,   208,   143,    -1,
     142,   141,   208,   143,    -1,    26,   208,    91,   141,    -1,
      26,   141,   208,    91,   141,    -1,    -1,    -1,   208,    92,
     270,   211,   209,   153,    -1,    -1,   208,    93,   211,   210,
     153,    -1,    26,    -1,   141,    -1,   156,    -1,    -1,    66,
     156,    -1,   215,    -1,    -1,   216,    72,    -1,   216,    31,
      72,    -1,   216,    31,    72,    13,   264,    -1,   216,    72,
      13,   264,    -1,   215,     8,   216,    72,    -1,   215,     8,
     216,    31,    72,    -1,   215,     8,   216,    31,    72,    13,
     264,    -1,   215,     8,   216,    72,    13,   264,    -1,    -1,
      70,    -1,   122,    -1,   218,    -1,    -1,   238,    -1,   274,
      -1,    31,   272,    -1,   218,     8,   238,    -1,   218,     8,
     274,    -1,   218,     8,    31,   272,    -1,   219,     8,   220,
      -1,   220,    -1,    72,    -1,   144,   271,    -1,   144,   142,
     270,   143,    -1,   221,     8,    72,    -1,   221,     8,    72,
      13,   264,    -1,    72,    -1,    72,    13,   264,    -1,   222,
     223,    -1,    -1,    -1,   228,   224,   232,   141,    -1,   233,
     141,    -1,    -1,    -1,   229,    96,   225,   188,    70,   226,
     139,   214,   140,   227,    -1,   141,    -1,   142,   153,   143,
      -1,   230,    -1,   110,    -1,    -1,   230,    -1,   231,    -1,
     230,   231,    -1,   104,    -1,   105,    -1,   106,    -1,   109,
      -1,   108,    -1,   107,    -1,   232,     8,    72,    -1,   232,
       8,    72,    13,   264,    -1,    72,    -1,    72,    13,   264,
      -1,   233,     8,    70,    13,   264,    -1,    97,    70,    13,
     264,    -1,   234,     8,   270,    -1,   270,    -1,    -1,   236,
      -1,    -1,   236,     8,   237,   270,    -1,   270,    -1,    -1,
     121,   139,   239,   294,   140,    13,   270,    -1,   274,    13,
     270,    -1,   274,    13,    31,   274,    -1,    -1,   274,    13,
      31,    63,   255,   240,   262,    -1,    -1,    63,   255,   241,
     262,    -1,    62,   270,    -1,   274,    24,   270,    -1,   274,
      23,   270,    -1,   274,    22,   270,    -1,   274,    21,   270,
      -1,   274,    20,   270,    -1,   274,    19,   270,    -1,   274,
      18,   270,    -1,   274,    17,   270,    -1,   274,    16,   270,
      -1,   274,    15,   270,    -1,   274,    14,   270,    -1,   273,
      60,    -1,    60,   273,    -1,   273,    59,    -1,    59,   273,
      -1,    -1,   270,    27,   242,   270,    -1,    -1,   270,    28,
     243,   270,    -1,    -1,   270,     9,   244,   270,    -1,    -1,
     270,    11,   245,   270,    -1,   270,    10,   270,    -1,   270,
      29,   270,    -1,   270,    31,   270,    -1,   270,    30,   270,
      -1,   270,    44,   270,    -1,   270,    42,   270,    -1,   270,
      43,   270,    -1,   270,    45,   270,    -1,   270,    46,   270,
      -1,   270,    47,   270,    -1,   270,    41,   270,    -1,   270,
      40,   270,    -1,    42,   270,    -1,    43,   270,    -1,    48,
     270,    -1,    50,   270,    -1,   270,    33,   270,    -1,   270,
      32,   270,    -1,   270,    35,   270,    -1,   270,    34,   270,
      -1,   270,    36,   270,    -1,   270,    39,   270,    -1,   270,
      37,   270,    -1,   270,    38,   270,    -1,   270,    49,   255,
      -1,   139,   270,   140,    -1,    -1,    -1,   270,    25,   246,
     270,    26,   247,   270,    -1,   303,    -1,    58,   270,    -1,
      57,   270,    -1,    56,   270,    -1,    55,   270,    -1,    54,
     270,    -1,    53,   270,    -1,    52,   270,    -1,    64,   261,
      -1,    -1,    51,   248,   270,    -1,   266,    -1,   122,   139,
     297,   140,    -1,   145,   299,   145,    -1,    12,   270,    -1,
      -1,    70,   139,   250,   217,   140,    -1,    -1,   254,   138,
      70,   139,   251,   217,   140,    -1,    -1,   254,   138,   282,
     139,   252,   217,   140,    -1,    -1,   282,   139,   253,   217,
     140,    -1,    70,    -1,    70,    -1,   256,    -1,    -1,    -1,
     285,   119,   257,   289,   258,   259,    -1,   285,    -1,   259,
     260,    -1,    -1,   119,   289,    -1,    -1,   139,   140,    -1,
     139,   270,   140,    -1,    -1,   139,   217,   140,    -1,    68,
      -1,    69,    -1,    78,    -1,   126,    -1,   127,    -1,   123,
      -1,   124,    -1,   125,    -1,   263,    -1,    70,    -1,    42,
     264,    -1,    43,   264,    -1,   122,   139,   267,   140,    -1,
     265,    -1,    70,   138,    70,    -1,    70,    -1,    71,    -1,
     306,    -1,   263,    -1,   146,   299,   146,    -1,   134,   299,
     135,    -1,    -1,   269,   268,    -1,    -1,     8,    -1,   269,
       8,   264,   120,   264,    -1,   269,     8,   264,    -1,   264,
     120,   264,    -1,   264,    -1,   271,    -1,   238,    -1,   274,
      -1,   274,    -1,   274,    -1,    -1,    -1,   284,   119,   275,
     289,   276,   280,   277,    -1,   284,    -1,   277,   278,    -1,
      -1,    -1,   119,   289,   279,   280,    -1,    -1,   139,   281,
     217,   140,    -1,    -1,   286,    -1,   293,   286,    -1,   254,
     138,   282,    -1,   285,    -1,   249,    -1,   286,    -1,   293,
     286,    -1,   283,    -1,   286,    61,   288,   147,    -1,   286,
     142,   270,   143,    -1,   287,    -1,    72,    -1,   144,   142,
     270,   143,    -1,    -1,   270,    -1,   291,    -1,    -1,   282,
     290,    -1,   291,    61,   288,   147,    -1,   291,   142,   270,
     143,    -1,   292,    -1,    70,    -1,   142,   270,   143,    -1,
     144,    -1,   293,   144,    -1,   294,     8,   295,    -1,   295,
      -1,   274,    -1,    -1,   121,   139,   296,   294,   140,    -1,
      -1,    -1,   298,   268,    -1,   298,     8,   270,   120,   270,
      -1,   298,     8,   270,    -1,   270,   120,   270,    -1,   270,
      -1,   298,     8,   270,   120,    31,   272,    -1,   298,     8,
      31,   272,    -1,   270,   120,    31,   272,    -1,    31,   272,
      -1,   299,   300,    -1,   299,    77,    -1,    -1,    72,    -1,
      -1,    72,    61,   301,   302,   147,    -1,    72,   119,    70,
      -1,   136,   270,   143,    -1,   136,    71,    61,   270,   147,
     143,    -1,   137,   274,   143,    -1,    70,    -1,    73,    -1,
      72,    -1,   112,   139,   304,   140,    -1,   113,   139,   274,
     140,    -1,     7,   270,    -1,     6,   270,    -1,     5,   139,
     270,   140,    -1,     4,   270,    -1,     3,   270,    -1,   274,
      -1,    -1,   304,     8,   305,   274,    -1,   254,   138,    70,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   148,   148,   152,   152,   153,   158,   159,   160,   161,
     166,   166,   167,   172,   173,   174,   175,   180,   184,   185,
     185,   185,   186,   186,   186,   187,   187,   187,   191,   193,
     195,   188,   197,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   213,   214,
     212,   217,   218,   216,   220,   220,   221,   222,   223,   224,
     225,   226,   222,   228,   233,   234,   238,   239,   244,   244,
     244,   249,   250,   254,   258,   259,   264,   268,   273,   274,
     279,   279,   279,   285,   284,   291,   290,   300,   301,   302,
     306,   307,   311,   314,   316,   319,   321,   325,   326,   330,
     331,   336,   337,   341,   346,   351,   356,   357,   362,   363,
     364,   365,   370,   371,   371,   372,   372,   377,   378,   383,
     389,   391,   396,   397,   402,   403,   404,   405,   406,   407,
     408,   409,   414,   415,   416,   421,   422,   427,   428,   429,
     430,   431,   432,   436,   437,   442,   443,   444,   449,   450,
     451,   452,   458,   459,   464,   464,   465,   466,   466,   466,
     472,   473,   477,   478,   482,   483,   487,   488,   492,   493,
     494,   495,   496,   497,   501,   502,   503,   504,   508,   509,
     513,   514,   519,   520,   524,   524,   525,   529,   529,   530,
     531,   532,   532,   533,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   550,   551,   551,   552,   552,   553,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   580,   583,   584,
     585,   586,   587,   588,   589,   590,   591,   592,   592,   593,
     594,   595,   596,   600,   600,   603,   603,   606,   606,   609,
     609,   615,   619,   620,   625,   626,   625,   628,   633,   634,
     639,   643,   644,   645,   650,   651,   656,   657,   658,   659,
     660,   661,   662,   663,   668,   669,   670,   671,   672,   673,
     677,   681,   682,   683,   684,   685,   686,   691,   692,   695,
     697,   701,   702,   703,   704,   708,   709,   714,   719,   724,
     729,   730,   729,   732,   736,   737,   742,   742,   746,   746,
     750,   754,   755,   759,   764,   765,   770,   771,   772,   776,
     777,   778,   783,   784,   788,   789,   794,   795,   795,   799,
     800,   801,   805,   806,   810,   811,   815,   816,   821,   822,
     822,   823,   828,   829,   833,   834,   835,   836,   837,   838,
     839,   840,   844,   845,   846,   853,   854,   854,   855,   856,
     857,   858,   863,   864,   865,   870,   871,   872,   873,   874,
     875,   876,   880,   881,   881,   885
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
  "foreach_variable", "for_statement", "foreach_statement",
  "declare_statement", "declare_list", "switch_case_list", "case_list",
  "@29", "@30", "case_separator", "while_statement", "else_single",
  "parameter_list", "non_empty_parameter_list", "optional_class_type",
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
  "@58", "class_constant", 0
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
     157,   157,   157,   157,   157,   157,   157,   157,   168,   169,
     157,   170,   171,   157,   172,   157,   157,   173,   174,   175,
     176,   177,   157,   157,   178,   178,   179,   179,   181,   182,
     180,   183,   183,   184,   185,   185,   186,   187,   188,   188,
     190,   191,   189,   193,   192,   194,   192,   195,   195,   195,
     196,   196,   197,   198,   198,   199,   199,   200,   200,   201,
     201,   202,   202,   203,   204,   205,   206,   206,   207,   207,
     207,   207,   208,   209,   208,   210,   208,   211,   211,   212,
     213,   213,   214,   214,   215,   215,   215,   215,   215,   215,
     215,   215,   216,   216,   216,   217,   217,   218,   218,   218,
     218,   218,   218,   219,   219,   220,   220,   220,   221,   221,
     221,   221,   222,   222,   224,   223,   223,   225,   226,   223,
     227,   227,   228,   228,   229,   229,   230,   230,   231,   231,
     231,   231,   231,   231,   232,   232,   232,   232,   233,   233,
     234,   234,   235,   235,   237,   236,   236,   239,   238,   238,
     238,   240,   238,   241,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   242,   238,   243,   238,   244,   238,   245,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   246,   247,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   248,   238,   238,
     238,   238,   238,   250,   249,   251,   249,   252,   249,   253,
     249,   254,   255,   255,   257,   258,   256,   256,   259,   259,
     260,   261,   261,   261,   262,   262,   263,   263,   263,   263,
     263,   263,   263,   263,   264,   264,   264,   264,   264,   264,
     265,   266,   266,   266,   266,   266,   266,   267,   267,   268,
     268,   269,   269,   269,   269,   270,   270,   271,   272,   273,
     275,   276,   274,   274,   277,   277,   279,   278,   281,   280,
     280,   282,   282,   283,   284,   284,   285,   285,   285,   286,
     286,   286,   287,   287,   288,   288,   289,   290,   289,   291,
     291,   291,   292,   292,   293,   293,   294,   294,   295,   296,
     295,   295,   297,   297,   298,   298,   298,   298,   298,   298,
     298,   298,   299,   299,   299,   300,   301,   300,   300,   300,
     300,   300,   302,   302,   302,   303,   303,   303,   303,   303,
     303,   303,   304,   305,   304,   306
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     3,     0,     1,     1,     1,     4,
       0,     3,     0,     1,     1,     1,     4,     1,     3,     0,
       0,     8,     0,     0,     7,     0,     0,     9,     0,     0,
       0,    12,     0,     6,     2,     3,     2,     3,     2,     3,
       3,     3,     3,     3,     1,     2,     3,     5,     0,     0,
      10,     0,     0,    10,     0,     6,     1,     0,     0,     0,
       0,     0,    18,     3,     1,     0,     1,     2,     0,     0,
      10,     1,     3,     1,     1,     3,     1,     1,     0,     1,
       0,     0,    11,     0,     8,     0,     7,     1,     2,     2,
       0,     2,     1,     0,     2,     0,     2,     1,     3,     0,
       2,     1,     2,     1,     1,     1,     3,     5,     3,     4,
       4,     5,     0,     0,     6,     0,     5,     1,     1,     1,
       0,     2,     1,     0,     2,     3,     5,     4,     4,     5,
       7,     6,     0,     1,     1,     1,     0,     1,     1,     2,
       3,     3,     4,     3,     1,     1,     2,     4,     3,     5,
       1,     3,     2,     0,     0,     4,     2,     0,     0,    10,
       1,     3,     1,     1,     0,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     3,     5,     1,     3,     5,     4,
       3,     1,     0,     1,     0,     4,     1,     0,     7,     3,
       4,     0,     7,     0,     4,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     0,     4,     0,     4,     0,     4,     0,     4,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     0,     0,     7,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     0,     3,     1,
       4,     3,     2,     0,     5,     0,     7,     0,     7,     0,
       5,     1,     1,     1,     0,     0,     6,     1,     2,     0,
       2,     0,     2,     3,     0,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     4,     1,
       3,     1,     1,     1,     1,     3,     3,     0,     2,     0,
       1,     5,     3,     3,     1,     1,     1,     1,     1,     1,
       0,     0,     7,     1,     2,     0,     0,     4,     0,     4,
       0,     1,     2,     3,     1,     1,     1,     2,     1,     4,
       4,     1,     1,     4,     0,     1,     1,     0,     2,     4,
       4,     1,     1,     3,     1,     2,     3,     1,     1,     0,
       5,     0,     0,     2,     5,     3,     3,     1,     6,     4,
       4,     2,     2,     2,     0,     1,     0,     5,     3,     3,
       6,     3,     1,     1,     1,     4,     4,     2,     2,     4,
       2,     2,     1,     0,     4,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     3,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   257,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   281,     0,   286,
     287,   301,   302,   342,    44,   288,     0,    25,     0,     0,
       0,    54,     0,     0,     0,    80,     0,    57,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    87,    92,
       0,     0,   291,   292,   293,   289,   290,   374,     0,    56,
      12,   354,   374,   374,     4,     6,    17,     7,     8,    76,
      77,     0,     0,   316,   335,     0,   304,   259,     0,   315,
       0,   317,     0,   338,   323,   334,   336,   341,     0,   248,
     303,   391,   390,     0,   388,   387,   262,   231,   232,   233,
     234,     0,   255,   254,   253,   252,   251,   250,   249,   271,
       0,   210,   319,   208,   195,   272,     0,   193,   273,   277,
     336,     0,     0,   256,     0,   263,     0,   181,     0,    22,
     182,     0,     0,     0,    34,     0,    36,     0,    78,    38,
     316,     0,   317,     0,     0,    74,     0,     0,   145,     0,
       0,   144,    89,    88,   150,     0,     0,     0,     0,     0,
     187,   362,     0,     0,    10,     0,     0,     0,    90,    85,
       0,   215,     0,   217,   245,   211,   213,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    45,   209,   207,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   269,   320,   344,     0,   355,   337,     0,   258,
       0,     0,   284,   274,   337,   282,     0,     0,   136,     0,
      43,     0,     0,     0,   183,   186,   316,   317,     0,     0,
      35,    37,    79,     0,    39,    40,    12,    63,     0,    46,
       0,   146,   317,     0,    41,     0,     0,    42,     0,    71,
      73,   392,     0,     0,     0,   361,     0,   367,     0,   309,
     375,   373,   306,     0,     0,   372,   244,    18,     0,     0,
     261,   305,     0,    83,    93,   395,   333,   331,     0,     0,
     219,     0,     0,     0,     0,   220,   222,   221,   236,   235,
     238,   237,   239,   241,   242,   240,   230,   229,   224,   225,
     223,   226,   227,   228,   243,     0,   189,   206,   205,   204,
     203,   202,   201,   200,   199,   198,   197,   196,   136,     0,
     345,     0,     0,   389,     0,   333,   136,   194,     0,   283,
      19,     0,     0,   135,   316,   317,   180,     0,     0,    28,
     184,    51,    48,     0,     0,    32,    81,    10,    75,     0,
     143,     0,     0,   295,     0,   294,   151,   299,   148,     0,
       0,   393,   385,   386,     9,     0,   358,     0,   357,   371,
     318,     0,   260,   310,   363,   376,     0,   302,     0,     0,
       0,    11,    13,    14,    15,   343,   271,    91,    95,     0,
       0,   265,   267,   332,   216,   218,     0,   212,   214,     0,
     190,     0,   352,     0,   347,   321,   346,   351,   339,   340,
       0,   275,     0,   139,   264,     0,    26,    23,   182,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   147,   296,
     297,     0,   307,     0,    72,    47,     0,   359,   361,     0,
       0,   366,     0,   365,     0,   378,     0,   379,   381,     0,
       0,     0,    94,    97,   153,   136,   136,   246,   191,   270,
       0,   348,   330,   344,     0,   285,   279,    20,     0,   316,
     317,     0,     0,     0,   185,    99,     0,    99,   101,   106,
       0,   105,    55,   112,   112,    33,   132,     0,   300,   314,
       0,   309,   149,   394,   361,   356,     0,   370,   369,     0,
     382,   384,   383,     0,     0,     0,    96,   153,     0,   164,
       0,     0,     0,   284,   353,   328,   325,     0,     0,   276,
     120,   142,     0,   119,    24,    29,     0,     0,   102,     0,
       0,   112,     0,   112,     0,   133,   134,     0,   122,     0,
      58,     0,   298,   310,   308,     0,   188,     0,   364,   377,
       0,    16,   164,    98,     0,   168,   169,   170,   173,   172,
     171,   163,    86,   152,   154,     0,   162,   166,     0,   266,
     268,   247,   192,   136,   322,   349,   350,     0,   278,     0,
      21,     0,   182,   100,    52,    49,   107,     0,     0,     0,
       0,     0,   108,     0,   132,     0,   124,     0,   313,   312,
     360,   368,   380,    84,     0,     0,   157,   167,     0,   156,
       0,     0,   324,   280,   121,    27,     0,     0,     0,     0,
     110,     0,   117,   118,   115,   109,    12,     0,   125,     0,
      59,     0,     0,   176,     0,    78,     0,   329,   326,    30,
     104,    53,    50,   111,   113,    12,    10,     0,   128,     0,
     127,     0,   311,   179,     0,     0,   155,     0,     0,   330,
       0,    12,    10,    82,   129,     0,   126,     0,   177,   174,
     158,   178,   327,   103,    31,    10,     0,   131,    60,     0,
       0,   130,     0,   175,   132,    12,     0,    10,     0,    61,
     160,    12,   159,    65,    10,     0,    62,    64,    66,   161,
       0,    67,    68,     0,     0,    69,     0,    12,    10,    70
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    74,   174,   288,   401,   660,    76,
     432,   540,   242,   492,   138,   491,   438,   602,   680,   445,
     441,   638,   440,   637,   142,   153,   617,   671,   702,   713,
     716,   717,   718,   723,   726,   268,   269,   157,    77,    78,
     253,    79,   148,   446,    80,   408,   294,    81,   293,    82,
     410,   471,   472,   547,   497,   694,   661,   502,   364,   505,
     552,   681,   665,   644,   544,   600,   557,   558,   559,   352,
     353,   160,   161,   165,   529,   583,   625,   655,   700,   712,
     584,   585,   586,   587,   654,   588,   136,   243,   244,   439,
      83,   275,   533,   232,   303,   304,   299,   301,   302,   532,
     111,    84,   238,   475,   476,   338,    85,   127,   128,   348,
     486,   539,   598,   133,   347,    86,   376,   377,    87,   510,
     394,   511,    88,    89,   389,    90,    91,   339,   482,   594,
     632,   679,   536,   593,    92,    93,    94,    95,    96,    97,
     341,   425,   481,   426,   427,    98,   387,   388,   514,   278,
     279,   172,   285,   464,   523,    99,   272,   456,   100
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -435
static const yytype_int16 yypact[] =
{
    -435,    52,    76,  -435,  1013,  2555,  2555,   -54,  2555,  2555,
    2555,  2555,  2555,  2555,  2555,  -435,  2555,  2555,  2555,  2555,
    2555,  2555,  2555,    40,    40,  2555,    46,   -52,   -49,  -435,
    -435,   -90,  -435,  -435,  -435,  -435,  2555,  -435,   -47,   -38,
      36,  -435,    48,  1388,  1513,  -435,  1638,  -435,  2555,   -28,
      37,    49,    89,    65,    69,    73,    82,    88,  -435,  -435,
      91,   105,  -435,  -435,  -435,  -435,  -435,  -435,  2555,  -435,
    -435,   121,  -435,  -435,  -435,  -435,  -435,  -435,  -435,  -435,
    -435,   145,   205,  -435,  -435,   138,  -435,  -435,  2871,  -435,
     137,   891,   140,  -435,   163,  -435,   -40,  -435,    54,  -435,
    -435,  3459,  3459,  2555,  3459,  3459,  1815,  -435,  -435,   237,
    -435,  2555,  -435,  -435,  -435,  -435,  -435,  -435,  -435,   150,
     153,  -435,  -435,  -435,  -435,   154,   166,  -435,  -435,   182,
     -34,    54,  1763,  -435,  2555,  -435,     7,  3459,  1263,  -435,
    2555,  2555,   170,  2555,  -435,  2912,  -435,  2953,   283,  -435,
     175,  3459,    45,   177,  2994,  -435,   239,   184,  -435,    28,
       8,  -435,  -435,  -435,   310,    10,    40,    40,    40,   186,
    -435,  1862,   185,  3035,   189,  2555,   148,    43,   212,  -435,
      51,  -435,  2555,  -435,  -435,  -435,  -435,  2555,  2555,  2555,
    2555,  2555,  2555,  2555,  2555,  2555,  2555,  2555,  2555,  2555,
    2555,  2555,  2555,  2555,  2555,  2555,    46,  -435,  -435,  -435,
    1961,  2555,  2555,  2555,  2555,  2555,  2555,  2555,  2555,  2555,
    2555,  2555,  -435,  -435,  2555,  2555,   121,   -14,  3076,  -435,
      61,    57,   192,  -435,   -34,  -435,  3117,  3158,  2060,  2555,
    -435,   253,  2555,   195,   329,  3459,   249,   349,   270,  3199,
    -435,  -435,  -435,   272,  -435,  -435,  -435,  -435,   203,  -435,
    2555,  -435,  -435,    37,  -435,   124,   273,  -435,    14,  -435,
    -435,  -435,    15,   204,   206,    70,    40,  3322,   219,   347,
      16,  -435,  -435,  2654,    40,  -435,  -435,  -435,  1138,   817,
    -435,  -435,   291,  -435,   257,   236,   238,   -34,    54,  2555,
     956,  2555,  2555,  2555,  2555,  1130,  1254,  1378,  1503,  1503,
    1503,  1503,   993,   993,   993,   993,   382,   382,    26,    26,
      26,   237,   237,   237,  -435,    25,  1815,  1815,  1815,  1815,
    1815,  1815,  1815,  1815,  1815,  1815,  1815,  1815,  2060,   101,
    3459,   229,  1444,  -435,   236,  -435,  2060,  -435,   101,  -435,
    -435,    40,   240,   371,    17,    21,  3459,   242,  3240,  -435,
    -435,  -435,  -435,   369,    18,  -435,  -435,   241,  -435,  1569,
    -435,   124,   124,   245,   246,  -435,  -435,  -435,   375,    40,
     251,  -435,  -435,  -435,  -435,   254,  -435,    20,  -435,  -435,
    -435,  2159,  -435,  2258,  -435,  -435,   320,   336,  1694,   256,
     271,  -435,  -435,  -435,  -435,  -435,  -435,  -435,   293,   291,
     274,  -435,  -435,   -34,  3499,  1815,  3418,  1913,  2011,    46,
    -435,   275,  -435,  2555,  -435,  -435,   -15,  -435,  -435,  -435,
     279,  -435,  1263,  -435,  -435,  2357,  -435,  -435,  2555,  2555,
      40,    24,   124,   342,  1263,   -12,   281,   313,  -435,  -435,
    -435,   344,   124,   124,  -435,  -435,    40,  -435,    70,   408,
      40,  3459,    40,  3363,   -19,  -435,  2555,  -435,  -435,   282,
     291,   288,   426,  -435,  -435,  2060,  2060,  -435,  -435,  -435,
    2710,  -435,   297,  2555,  2555,  -435,  -435,  -435,    40,    22,
     218,  2555,  1263,   301,  3459,   323,    40,   323,  -435,  -435,
     432,  -435,  -435,   305,   307,  -435,   143,   311,  -435,   331,
     309,   444,  -435,  -435,    70,  -435,  2555,  -435,  -435,  2456,
    -435,  -435,  -435,   306,   730,   333,   426,  -435,   291,   190,
     314,   338,  2555,   192,  -435,  -435,  -435,   334,  2776,   363,
     417,  -435,  3281,  -435,  -435,  -435,    24,   348,  -435,   350,
     124,  -435,   180,  -435,    85,  -435,  -435,   359,   479,    60,
    -435,   124,  -435,   124,  -435,    23,  1815,    40,  3459,  -435,
     346,  -435,   244,  -435,   430,  -435,  -435,  -435,  -435,  -435,
    -435,  -435,  -435,  -435,  -435,   405,   298,  -435,    11,  -435,
    -435,   685,  -435,  2060,   384,  -435,  -435,   101,  -435,  1263,
    -435,   367,  2555,  -435,  -435,  -435,  -435,   215,   368,  2555,
      -2,   162,  -435,   362,    19,   438,   499,   291,  -435,   394,
    -435,  -435,  -435,  -435,   502,   445,  -435,  -435,   446,  -435,
     379,   101,  -435,  -435,  -435,  -435,   380,  1263,  1263,   381,
    -435,  2829,  -435,  -435,  -435,  -435,  -435,   188,   508,   124,
    -435,   124,   124,   512,    12,   283,   513,  -435,  -435,  -435,
    -435,  -435,  -435,  -435,  -435,  -435,   385,   457,   517,   124,
    -435,   459,  -435,  -435,   124,   460,  -435,   463,   124,   297,
    1263,  -435,    -9,  -435,   521,   124,  -435,   396,  -435,   524,
    -435,  -435,  -435,  -435,  -435,   125,   124,  -435,  -435,   124,
     399,  -435,   397,  -435,   143,  -435,   400,   402,   -63,  -435,
    -435,  -435,  -435,   442,   403,   404,  -435,   442,  -435,  -435,
     291,  -435,  -435,   475,   409,  -435,   406,  -435,   407,  -435
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -435,  -435,  -435,  -435,  -435,  -170,  -435,  -435,     0,  -435,
    -435,  -435,  -435,  -435,  -435,  -435,  -435,  -435,  -435,  -435,
    -435,  -435,  -435,  -435,  -435,  -435,  -435,  -435,  -435,  -435,
    -435,  -435,  -166,  -435,  -435,  -435,   173,  -435,   266,   267,
     -99,  -435,  -435,  -435,  -435,  -435,  -435,  -435,  -435,  -435,
    -435,  -435,    90,    62,    29,  -435,   -76,  -435,  -435,  -435,
    -434,  -435,  -435,   -78,  -435,  -435,  -140,  -435,   -48,  -329,
    -435,  -435,   302,  -435,    41,  -435,  -435,  -435,  -435,  -435,
    -435,  -435,  -435,   -17,  -435,  -435,  -435,  -426,  -435,  -435,
     -35,  -435,  -435,  -435,  -435,  -435,  -435,  -435,  -435,  -435,
    -435,  -435,  -435,  -435,  -435,  -435,   -23,  -196,  -435,  -435,
    -435,  -435,  -435,  -435,    34,  -172,  -339,  -435,  -435,  -435,
      59,  -435,   450,   412,  -338,   235,   461,  -435,  -435,  -435,
    -435,  -435,  -107,  -435,  -174,  -435,  -435,   -18,   -24,  -435,
      94,  -341,  -435,  -435,  -435,   -21,    64,   116,  -435,  -435,
    -435,   194,  -435,  -435,  -435,  -435,  -435,  -435,  -435
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -333
static const yytype_int16 yytable[] =
{
     120,   120,   130,   126,    75,   131,   296,   431,   129,   421,
     324,   150,   493,   433,   503,   239,   263,   430,   266,   628,
     675,   224,   379,   381,   642,  -137,   443,   224,   458,  -138,
    -140,   458,   449,   450,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   483,   224,  -271,   135,
     155,   520,     3,   521,   522,   496,   296,   345,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     554,   203,   204,   205,   227,   206,    -2,   395,   710,   711,
    -319,  -319,  -116,  -116,  -116,   103,   367,   132,   419,   555,
     134,   615,   139,   375,   119,   119,    33,    33,   119,  -331,
      33,   140,   225,   499,  -319,  -319,   246,   234,   225,   158,
     119,   156,    33,   509,   512,   280,   125,   607,    33,   611,
     281,   295,   517,    33,   518,  -332,    33,   484,   225,    33,
     504,   344,   616,    33,  -116,   396,   120,   164,   241,   643,
     119,   556,    33,   120,   120,   120,   530,   531,   240,   264,
     541,   267,   629,   676,   380,   382,   297,  -137,   444,   298,
     459,  -138,  -140,   620,   162,   424,   371,   372,    71,    71,
     260,   422,    71,    33,   424,   141,   636,   609,   610,   283,
     284,   159,   130,   126,    71,   131,   255,   143,   129,   291,
      71,   385,    29,    30,   373,    71,   208,   209,   226,   375,
     375,    71,    35,   354,   163,    71,   297,   297,   166,   298,
     298,   606,   167,   555,    71,   178,  -114,  -114,  -114,   667,
     280,   168,   618,   478,   619,   281,  -141,   169,   612,   621,
     170,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   423,   171,    71,   374,    62,    63,    64,
      65,    66,   120,   120,   609,   610,   633,   280,   121,   123,
     668,   120,   281,   175,   630,   556,   176,   177,  -114,   407,
     375,   608,   609,   610,   413,   179,   180,  -319,  -319,   222,
     375,   375,   223,  -123,   283,   284,   206,   574,   402,   135,
     658,   230,  -271,   290,   575,   576,   577,   578,   579,   580,
     581,   233,   120,   354,   231,   645,   639,   609,   610,   248,
     670,   354,   672,   673,   252,   297,   254,   258,   298,   256,
     282,   283,   284,   265,   297,   259,   274,   298,   120,   292,
     686,   346,   287,   582,   357,   688,   359,   360,   361,   691,
     363,   574,   366,   368,   383,   378,   697,   384,   575,   576,
     577,   578,   579,   580,   581,   393,   120,   701,  -141,   392,
     703,   406,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   409,   411,   428,   412,   375,   435,
     434,   436,   442,   451,   447,   452,   473,   623,   453,   375,
     465,   375,   455,   457,  -165,   130,   126,   466,   131,   468,
     489,   129,   575,   576,   577,   578,   579,   580,  -319,  -319,
     469,   470,   500,   507,   508,   479,   474,   120,   120,   485,
     506,   516,   525,   424,   200,   201,   202,   203,   204,   205,
     527,   206,   487,   120,   528,   120,   535,   120,   362,   120,
     354,   354,   545,   546,   501,   550,   551,   473,   553,   562,
     560,   561,   563,   569,   589,   101,   102,   424,   104,   105,
     106,   107,   108,   109,   110,   120,   112,   113,   114,   115,
     116,   117,   118,   120,   571,   124,   666,   375,   590,   375,
     375,   595,   597,   599,   122,   122,   137,   614,   604,   622,
     605,   120,   543,   145,   147,   682,   151,   375,   154,   613,
     624,   626,   375,   631,   646,   573,   375,   152,   635,   640,
     648,   695,   649,   375,   651,   652,   656,   653,   173,   657,
     659,   669,   663,   120,   375,   674,   678,   375,   683,   684,
     685,   687,   689,   690,   696,   707,   698,   699,   704,   705,
     708,   714,   715,   720,   120,   709,   719,   724,   727,   725,
     729,   721,   454,   228,   403,   404,   677,   728,   354,   549,
     526,   229,   662,   664,   706,   370,   647,   592,   572,   627,
     564,   261,   692,   297,   515,   603,   298,   537,   565,     0,
       0,     0,   236,     0,   237,     0,     0,     0,     0,     0,
     245,   151,     0,   249,   650,     0,     0,     0,     0,   634,
       0,     0,   247,     0,     0,     0,     0,   297,     0,     0,
     298,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     262,   277,     0,     0,     0,   289,     0,   270,   271,   273,
       0,     0,   300,     0,     0,     0,     0,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,     0,     0,     0,     0,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,     0,     0,   340,   342,     0,     0,     0,     0,
     693,     0,     0,     0,     0,     0,     0,     0,   151,   356,
       0,     0,   358,     0,     0,     0,     0,   722,     0,   355,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     369,     0,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   398,   206,     0,   386,   390,     0,   181,
     182,   183,     0,     0,     0,   399,     0,     0,     0,   414,
       0,   415,   416,   417,   418,   184,     0,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,     0,   206,
       0,     0,     0,     0,     0,     0,   420,     0,   151,     0,
       0,     0,     0,     0,     0,     0,   151,     0,     0,   355,
       0,     0,     0,     0,     0,     0,     0,   355,     0,     0,
       0,     0,   390,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   181,   182,   183,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     270,   461,   184,   463,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,     0,   206,     0,     0,     0,
       0,     0,     0,   480,     0,     0,     0,   570,     0,     0,
       0,     0,     0,     0,     0,   151,     0,     0,   245,   494,
       0,     0,     0,     0,     0,     0,   490,     0,     0,     0,
       0,   495,   498,     0,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   524,   513,     0,   386,
       0,   390,     0,   390,     0,   151,   151,     0,     0,     0,
       0,     0,     0,   340,   538,     0,   355,   355,     0,     0,
       0,   542,     0,     0,     0,     0,     0,     0,     0,   390,
    -319,  -319,     0,     0,     0,     0,     0,   548,     0,     0,
     405,     0,     0,     0,     0,     0,   566,   183,     0,   568,
       0,     0,     0,     0,     0,   386,     0,     0,     0,     0,
       0,   184,   591,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,     0,   206,     0,   498,     0,     0,
       0,     0,     0,     0,     0,     0,     5,     6,     7,     8,
       9,     0,     0,     0,     0,    10,     0,     0,   390,  -333,
    -333,  -333,  -333,   198,   199,   200,   201,   202,   203,   204,
     205,     0,   206,   151,     0,     0,     0,     0,     0,     0,
       0,     0,   245,     0,   355,    11,    12,     0,     0,   641,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,    28,     0,
       0,    29,    30,    31,    32,    33,     0,    34,     0,     0,
       0,    35,    36,    37,    38,     0,    39,     0,    40,     0,
      41,     0,     0,    42,     0,     0,     0,    43,    44,    45,
       0,    46,    47,     0,    48,    49,    50,     0,     0,     0,
      51,    52,    53,     0,    54,    55,    56,    57,    58,    59,
       0,     0,     0,     0,    60,    61,    62,    63,    64,    65,
      66,     5,     6,     7,     8,     9,     0,    67,     0,     0,
      10,     0,    68,     0,    69,    70,     0,    71,    72,    73,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,     0,   206,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     0,
      25,    26,    27,    28,     0,     0,    29,    30,    31,    32,
      33,     0,    34,     0,     0,     0,    35,    36,    37,    38,
       0,    39,     0,    40,     0,    41,     0,     0,    42,     0,
       0,     0,    43,    44,    45,     0,    46,    47,     0,    48,
      49,    50,     0,     0,     0,    51,    52,    53,     0,    54,
      55,    56,   400,    58,    59,     0,     0,     0,     0,    60,
      61,    62,    63,    64,    65,    66,     5,     6,     7,     8,
       9,     0,    67,     0,     0,    10,     0,    68,     0,    69,
      70,     0,    71,    72,    73,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,     0,   206,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,    28,     0,
       0,    29,    30,    31,    32,    33,     0,    34,     0,     0,
       0,    35,    36,    37,    38,     0,    39,     0,    40,     0,
      41,     0,     0,    42,     0,     0,     0,    43,    44,     0,
       0,    46,    47,     0,    48,    49,    50,     0,     0,     0,
       0,     0,    53,     0,    54,    55,    56,     0,     0,     0,
       0,     0,     0,     0,    60,    61,    62,    63,    64,    65,
      66,     5,     6,     7,     8,     9,     0,    67,     0,     0,
      10,     0,    68,     0,    69,    70,     0,    71,    72,    73,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,     0,   206,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     0,
      25,    26,    27,   181,   182,   183,    29,    30,    31,    32,
      33,     0,     0,     0,     0,     0,    35,     0,     0,   184,
       0,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,     0,   206,     0,     0,     0,     0,     0,     0,
      55,    56,     0,     0,     0,     0,     0,     0,     0,    60,
      61,    62,    63,    64,    65,    66,     5,     6,     7,     8,
       9,     0,    67,     0,     0,    10,     0,    68,     0,   144,
       0,     0,    71,    72,    73,  -333,  -333,  -333,  -333,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,     0,   206,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,   181,   182,
     183,    29,    30,    31,    32,    33,     0,   429,     0,     0,
       0,    35,     0,     0,   184,     0,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,     0,   206,     0,
       0,     0,     0,     0,     0,    55,    56,     0,     0,     0,
       0,     0,     0,     0,    60,    61,    62,    63,    64,    65,
      66,     5,     6,     7,     8,     9,     0,    67,     0,     0,
      10,     0,    68,     0,   146,     0,     0,    71,    72,    73,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     0,
      25,    26,    27,   181,   182,   183,    29,    30,    31,    32,
      33,     0,   448,     0,     0,     0,    35,     0,     0,   184,
       0,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,     0,   206,     0,     0,     0,     0,     0,     0,
      55,    56,     0,     0,     0,     0,     0,     0,     0,    60,
      61,    62,    63,    64,    65,    66,     5,     6,     7,     8,
       9,     0,    67,     0,     0,    10,     0,    68,     0,   149,
       0,     0,    71,    72,    73,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,     0,     0,
       0,    29,    30,    31,    32,    33,     0,   467,     0,     0,
     184,    35,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,     0,   206,     5,     6,     7,     8,     9,
       0,     0,     0,     0,    10,    55,    56,     0,     0,     0,
       0,     0,     0,     0,    60,    61,    62,    63,    64,    65,
      66,     0,     0,   276,     0,     0,     0,    67,     0,     0,
       0,     0,    68,   235,    11,    12,     0,    71,    72,    73,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,    25,    26,    27,     0,     0,     0,
      29,    30,    31,    32,    33,     0,     0,     0,     0,     0,
      35,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,     0,   206,     0,     5,     6,     7,     8,     9,     0,
       0,     0,     0,    10,    55,    56,     0,     0,     0,     0,
       0,     0,     0,    60,    61,    62,    63,    64,    65,    66,
       0,     0,   325,     0,     0,     0,    67,     0,     0,     0,
       0,    68,     0,    11,    12,     0,    71,    72,    73,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,    27,     0,     0,     0,    29,
      30,    31,    32,    33,     0,     0,     0,     0,     0,    35,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,     0,
     206,     0,     0,     5,     6,     7,     8,     9,     0,     0,
       0,     0,    10,    55,    56,     0,     0,     0,     0,     0,
       0,     0,    60,    61,    62,    63,    64,    65,    66,     0,
       0,   351,     0,     0,     0,    67,     0,     0,     0,     0,
      68,     0,    11,    12,     0,    71,    72,    73,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,    25,    26,    27,     0,     0,     0,    29,    30,
      31,    32,    33,     0,     0,     0,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     6,     7,     8,     9,     0,     0,     0,
       0,    10,    55,    56,     0,     0,     0,     0,     0,     0,
       0,    60,    61,    62,    63,    64,    65,    66,     0,     0,
     460,     0,     0,     0,    67,     0,     0,     0,     0,    68,
       0,    11,    12,     0,    71,    72,    73,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,     0,     0,     0,    29,    30,    31,
      32,    33,     0,     0,     0,     0,     0,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     6,     7,     8,     9,     0,     0,     0,     0,
      10,    55,    56,     0,     0,     0,     0,     0,     0,     0,
      60,    61,    62,    63,    64,    65,    66,     0,     0,   462,
       0,     0,     0,    67,     0,     0,     0,     0,    68,     0,
      11,    12,     0,    71,    72,    73,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     0,
      25,    26,    27,     0,     0,     0,    29,    30,    31,    32,
      33,     0,     0,     0,     0,     0,    35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     6,     7,     8,     9,     0,     0,     0,     0,    10,
      55,    56,     0,     0,     0,     0,     0,     0,     0,    60,
      61,    62,    63,    64,    65,    66,     0,     0,   488,     0,
       0,     0,    67,     0,     0,     0,     0,    68,     0,    11,
      12,     0,    71,    72,    73,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
      26,    27,     0,     0,     0,    29,    30,    31,    32,    33,
       0,     0,     0,     0,     0,    35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       6,     7,     8,     9,     0,     0,     0,     0,    10,    55,
      56,     0,     0,     0,     0,     0,     0,     0,    60,    61,
      62,    63,    64,    65,    66,     0,     0,   567,     0,     0,
       0,    67,     0,     0,     0,     0,    68,     0,    11,    12,
       0,    71,    72,    73,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,    25,    26,
      27,     0,     0,     0,    29,    30,    31,    32,    33,     0,
       0,     0,     0,     0,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     8,     9,     0,     0,     0,     0,    10,    55,    56,
       0,     0,     0,     0,     0,     0,     0,    60,    61,    62,
      63,    64,    65,    66,     0,     0,     0,     0,     0,     0,
      67,     0,     0,     0,     0,    68,     0,    11,    12,     0,
      71,    72,    73,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,    26,    27,
       0,     0,     0,    29,    30,    31,    32,    33,     0,     0,
       0,     0,     0,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     6,     7,
       8,     9,     0,     0,     0,     0,    10,    55,    56,     0,
       0,     0,     0,     0,     0,     0,    60,    61,    62,    63,
      64,    65,    66,     0,     0,     0,     0,     0,     0,    67,
       0,     0,     0,     0,    68,     0,    11,    12,     0,    71,
      72,    73,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,    25,    26,    27,   181,
     182,   183,    29,    30,    31,   397,    33,     0,     0,     0,
       0,     0,    35,     0,     0,   184,     0,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,     0,   206,
       0,     0,     0,     0,     0,     0,    55,    56,     0,     0,
       0,     0,     0,     0,     0,    60,    61,    62,    63,    64,
      65,    66,     0,     0,     0,   181,   182,   183,    67,     0,
       0,     0,     0,    68,     0,     0,     0,     0,    71,    72,
      73,   184,     0,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,     0,   206,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   181,   182,
     183,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   534,   184,   642,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,     0,   206,     0,
     181,   182,   183,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   184,     0,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   596,
     206,   181,   182,   183,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   184,     0,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
       0,   206,   181,   182,   183,     0,     0,     0,     0,     0,
     643,     0,     0,     0,     0,     0,     0,     0,   184,     0,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,     0,   206,   181,   182,   183,     0,     0,     0,     0,
       0,     0,   207,     0,     0,     0,     0,     0,     0,   184,
       0,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,     0,   206,   181,   182,   183,     0,     0,     0,
       0,     0,     0,   250,     0,     0,     0,     0,     0,     0,
     184,     0,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,     0,   206,   181,   182,   183,     0,     0,
       0,     0,     0,     0,   251,     0,     0,     0,     0,     0,
       0,   184,     0,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,     0,   206,   181,   182,   183,     0,
       0,     0,     0,     0,     0,   257,     0,     0,     0,     0,
       0,     0,   184,     0,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,     0,   206,   181,   182,   183,
       0,     0,     0,     0,     0,   286,     0,     0,     0,     0,
       0,     0,     0,   184,     0,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,     0,   206,   181,   182,
     183,     0,     0,     0,     0,     0,   343,     0,     0,     0,
       0,     0,     0,     0,   184,     0,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,     0,   206,   181,
     182,   183,     0,     0,     0,     0,     0,   349,     0,     0,
       0,     0,     0,     0,     0,   184,     0,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,     0,   206,
     181,   182,   183,     0,     0,     0,     0,     0,   350,     0,
       0,     0,     0,     0,     0,     0,   184,     0,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,     0,
     206,   181,   182,   183,     0,     0,     0,     0,     0,   365,
       0,     0,     0,     0,     0,     0,     0,   184,     0,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
       0,   206,   181,   182,   183,     0,     0,     0,     0,     0,
     437,     0,     0,     0,     0,     0,     0,     0,   184,     0,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,     0,   206,     0,     0,     0,     0,     0,     0,     0,
       0,   601,     0,     0,     0,     0,     0,   181,   182,   183,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   391,   184,   477,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,     0,   206,   181,   182,
     183,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   519,   184,     0,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,     0,   206,   182,
     183,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   184,     0,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,     0,   206
};

static const yytype_int16 yycheck[] =
{
      23,    24,    26,    26,     4,    26,   180,   348,    26,   338,
     206,    46,   438,   351,    26,     8,     8,   346,     8,     8,
       8,    61,     8,     8,    26,     8,     8,    61,     8,     8,
       8,     8,   371,   372,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    61,    61,   138,   139,
      78,    70,     0,    72,    73,    31,   230,   231,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
     504,    45,    46,    47,    98,    49,     0,    61,   141,   142,
      59,    60,    91,    92,    93,   139,   256,   139,    63,    70,
     139,    31,   139,   265,    70,    70,    72,    72,    70,   139,
      72,   139,   142,   442,    59,    60,   141,   131,   142,    72,
      70,   139,    72,   452,   453,    72,    70,   551,    72,   553,
      77,    70,   460,    72,   462,   139,    72,   142,   142,    72,
     142,    70,    72,    72,   143,   119,   159,    72,   138,   141,
      70,   122,    72,   166,   167,   168,   475,   476,   141,   141,
     488,   141,   141,   141,   140,   140,   180,   140,   140,   180,
     140,   140,   140,   140,   115,   339,    42,    43,   144,   144,
     142,    70,   144,    72,   348,   139,   602,    92,    93,   136,
     137,   144,   206,   206,   144,   206,   141,   139,   206,   146,
     144,   121,    68,    69,    70,   144,    59,    60,   144,   371,
     372,   144,    78,   238,   115,   144,   230,   231,   139,   230,
     231,   550,   139,    70,   144,    70,    91,    92,    93,    31,
      72,   139,   561,   419,   563,    77,     8,   139,   143,   567,
     139,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,   142,   139,   144,   122,   123,   124,   125,
     126,   127,   275,   276,    92,    93,   597,    72,    23,    24,
      72,   284,    77,   142,   593,   122,    72,    73,   143,   292,
     442,    91,    92,    93,   298,    70,   138,    59,    60,   139,
     452,   453,   119,   140,   136,   137,    49,    97,   288,   139,
     631,   138,   138,   145,   104,   105,   106,   107,   108,   109,
     110,   119,   325,   338,   138,   143,    91,    92,    93,   139,
     649,   346,   651,   652,    31,   339,   141,    78,   339,   142,
     135,   136,   137,    13,   348,   141,   140,   348,   351,   117,
     669,   139,   143,   143,    81,   674,   141,     8,    89,   678,
      70,    97,    70,   140,   140,    72,   685,   141,   104,   105,
     106,   107,   108,   109,   110,     8,   379,   696,   140,   140,
     699,    70,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,   117,   139,   147,   139,   550,     8,
     140,   139,    13,   138,   143,   139,   409,   143,    13,   561,
      70,   563,   141,   139,    96,   419,   419,    61,   419,   143,
     435,   419,   104,   105,   106,   107,   108,   109,    59,    60,
     139,   118,    70,   100,    70,   140,   142,   440,   441,   140,
     139,    13,   140,   597,    42,    43,    44,    45,    46,    47,
     142,    49,   432,   456,     8,   458,   139,   460,    89,   462,
     475,   476,   141,   120,   444,    13,   141,   470,   141,   140,
     139,   120,     8,   147,   140,     5,     6,   631,     8,     9,
      10,    11,    12,    13,    14,   488,    16,    17,    18,    19,
      20,    21,    22,   496,   141,    25,   646,   649,   140,   651,
     652,   147,   119,    66,    23,    24,    36,     8,   140,   143,
     140,   514,   492,    43,    44,   665,    46,   669,    48,   140,
      70,    96,   674,   119,   142,   528,   678,    46,   141,   141,
      72,   681,    13,   685,   120,    13,    70,    72,    68,   140,
     140,    13,   141,   546,   696,    13,    13,   699,   143,    72,
      13,    72,    72,    70,    13,   705,   140,    13,   139,   142,
     140,   711,   100,   139,   567,   143,   143,    72,   142,   140,
     143,   717,   379,   103,   288,   288,   655,   727,   593,   497,
     470,   111,   638,   641,   704,   263,   614,   533,   527,   586,
     511,   159,   679,   597,   458,   546,   597,   483,   514,    -1,
      -1,    -1,   132,    -1,   134,    -1,    -1,    -1,    -1,    -1,
     140,   141,    -1,   143,   617,    -1,    -1,    -1,    -1,   599,
      -1,    -1,   141,    -1,    -1,    -1,    -1,   631,    -1,    -1,
     631,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     159,   171,    -1,    -1,    -1,   175,    -1,   166,   167,   168,
      -1,    -1,   182,    -1,    -1,    -1,    -1,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,    -1,    -1,    -1,    -1,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,    -1,    -1,   224,   225,    -1,    -1,    -1,    -1,
     680,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   238,   239,
      -1,    -1,   242,    -1,    -1,    -1,    -1,   720,    -1,   238,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     260,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,   283,    49,    -1,   275,   276,    -1,     9,
      10,    11,    -1,    -1,    -1,   284,    -1,    -1,    -1,   299,
      -1,   301,   302,   303,   304,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,   325,    -1,   338,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   346,    -1,    -1,   338,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   346,    -1,    -1,
      -1,    -1,   351,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     379,   391,    25,   393,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,   423,    -1,    -1,    -1,   147,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   435,    -1,    -1,   438,   439,
      -1,    -1,    -1,    -1,    -1,    -1,   435,    -1,    -1,    -1,
      -1,   440,   441,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,   466,   456,    -1,   458,
      -1,   460,    -1,   462,    -1,   475,   476,    -1,    -1,    -1,
      -1,    -1,    -1,   483,   484,    -1,   475,   476,    -1,    -1,
      -1,   491,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   488,
      59,    60,    -1,    -1,    -1,    -1,    -1,   496,    -1,    -1,
     143,    -1,    -1,    -1,    -1,    -1,   516,    11,    -1,   519,
      -1,    -1,    -1,    -1,    -1,   514,    -1,    -1,    -1,    -1,
      -1,    25,   532,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,   546,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    -1,    -1,   567,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,   593,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   602,    -1,   593,    42,    43,    -1,    -1,   609,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,    65,    -1,
      -1,    68,    69,    70,    71,    72,    -1,    74,    -1,    -1,
      -1,    78,    79,    80,    81,    -1,    83,    -1,    85,    -1,
      87,    -1,    -1,    90,    -1,    -1,    -1,    94,    95,    96,
      -1,    98,    99,    -1,   101,   102,   103,    -1,    -1,    -1,
     107,   108,   109,    -1,   111,   112,   113,   114,   115,   116,
      -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,   126,
     127,     3,     4,     5,     6,     7,    -1,   134,    -1,    -1,
      12,    -1,   139,    -1,   141,   142,    -1,   144,   145,   146,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    64,    65,    -1,    -1,    68,    69,    70,    71,
      72,    -1,    74,    -1,    -1,    -1,    78,    79,    80,    81,
      -1,    83,    -1,    85,    -1,    87,    -1,    -1,    90,    -1,
      -1,    -1,    94,    95,    96,    -1,    98,    99,    -1,   101,
     102,   103,    -1,    -1,    -1,   107,   108,   109,    -1,   111,
     112,   113,   114,   115,   116,    -1,    -1,    -1,    -1,   121,
     122,   123,   124,   125,   126,   127,     3,     4,     5,     6,
       7,    -1,   134,    -1,    -1,    12,    -1,   139,    -1,   141,
     142,    -1,   144,   145,   146,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,    65,    -1,
      -1,    68,    69,    70,    71,    72,    -1,    74,    -1,    -1,
      -1,    78,    79,    80,    81,    -1,    83,    -1,    85,    -1,
      87,    -1,    -1,    90,    -1,    -1,    -1,    94,    95,    -1,
      -1,    98,    99,    -1,   101,   102,   103,    -1,    -1,    -1,
      -1,    -1,   109,    -1,   111,   112,   113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,   126,
     127,     3,     4,     5,     6,     7,    -1,   134,    -1,    -1,
      12,    -1,   139,    -1,   141,   142,    -1,   144,   145,   146,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    64,     9,    10,    11,    68,    69,    70,    71,
      72,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,
     122,   123,   124,   125,   126,   127,     3,     4,     5,     6,
       7,    -1,   134,    -1,    -1,    12,    -1,   139,    -1,   141,
      -1,    -1,   144,   145,   146,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,     9,    10,
      11,    68,    69,    70,    71,    72,    -1,   143,    -1,    -1,
      -1,    78,    -1,    -1,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,   126,
     127,     3,     4,     5,     6,     7,    -1,   134,    -1,    -1,
      12,    -1,   139,    -1,   141,    -1,    -1,   144,   145,   146,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    64,     9,    10,    11,    68,    69,    70,    71,
      72,    -1,   143,    -1,    -1,    -1,    78,    -1,    -1,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,
     122,   123,   124,   125,   126,   127,     3,     4,     5,     6,
       7,    -1,   134,    -1,    -1,    12,    -1,   139,    -1,   141,
      -1,    -1,   144,   145,   146,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    -1,   143,    -1,    -1,
      25,    78,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,   112,   113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,   126,
     127,    -1,    -1,    31,    -1,    -1,    -1,   134,    -1,    -1,
      -1,    -1,   139,   140,    42,    43,    -1,   144,   145,   146,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    64,    -1,    -1,    -1,
      68,    69,    70,    71,    72,    -1,    -1,    -1,    -1,    -1,
      78,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   121,   122,   123,   124,   125,   126,   127,
      -1,    -1,    31,    -1,    -1,    -1,   134,    -1,    -1,    -1,
      -1,   139,    -1,    42,    43,    -1,   144,   145,   146,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    -1,    -1,    -1,    68,
      69,    70,    71,    72,    -1,    -1,    -1,    -1,    -1,    78,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   121,   122,   123,   124,   125,   126,   127,    -1,
      -1,    31,    -1,    -1,    -1,   134,    -1,    -1,    -1,    -1,
     139,    -1,    42,    43,    -1,   144,   145,   146,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    64,    -1,    -1,    -1,    68,    69,
      70,    71,    72,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   121,   122,   123,   124,   125,   126,   127,    -1,    -1,
      31,    -1,    -1,    -1,   134,    -1,    -1,    -1,    -1,   139,
      -1,    42,    43,    -1,   144,   145,   146,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    -1,    -1,    -1,    68,    69,    70,
      71,    72,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     121,   122,   123,   124,   125,   126,   127,    -1,    -1,    31,
      -1,    -1,    -1,   134,    -1,    -1,    -1,    -1,   139,    -1,
      42,    43,    -1,   144,   145,   146,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    64,    -1,    -1,    -1,    68,    69,    70,    71,
      72,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,
     122,   123,   124,   125,   126,   127,    -1,    -1,    31,    -1,
      -1,    -1,   134,    -1,    -1,    -1,    -1,   139,    -1,    42,
      43,    -1,   144,   145,   146,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    64,    -1,    -1,    -1,    68,    69,    70,    71,    72,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,   112,
     113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,
     123,   124,   125,   126,   127,    -1,    -1,    31,    -1,    -1,
      -1,   134,    -1,    -1,    -1,    -1,   139,    -1,    42,    43,
      -1,   144,   145,   146,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    -1,    -1,    -1,    68,    69,    70,    71,    72,    -1,
      -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,   112,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,
     124,   125,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,
     134,    -1,    -1,    -1,    -1,   139,    -1,    42,    43,    -1,
     144,   145,   146,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      -1,    -1,    -1,    68,    69,    70,    71,    72,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,   112,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,
     125,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,   134,
      -1,    -1,    -1,    -1,   139,    -1,    42,    43,    -1,   144,
     145,   146,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    64,     9,
      10,    11,    68,    69,    70,    71,    72,    -1,    -1,    -1,
      -1,    -1,    78,    -1,    -1,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,
     126,   127,    -1,    -1,    -1,     9,    10,    11,   134,    -1,
      -1,    -1,    -1,   139,    -1,    -1,    -1,    -1,   144,   145,
     146,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   143,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,   143,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
     141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,   140,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,   140,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,   140,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,   140,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,   140,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
     140,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   120,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   120,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   149,   150,     0,   151,     3,     4,     5,     6,     7,
      12,    42,    43,    48,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    62,    63,    64,    65,    68,
      69,    70,    71,    72,    74,    78,    79,    80,    81,    83,
      85,    87,    90,    94,    95,    96,    98,    99,   101,   102,
     103,   107,   108,   109,   111,   112,   113,   114,   115,   116,
     121,   122,   123,   124,   125,   126,   127,   134,   139,   141,
     142,   144,   145,   146,   152,   156,   157,   186,   187,   189,
     192,   195,   197,   238,   249,   254,   263,   266,   270,   271,
     273,   274,   282,   283,   284,   285,   286,   287,   293,   303,
     306,   270,   270,   139,   270,   270,   270,   270,   270,   270,
     270,   248,   270,   270,   270,   270,   270,   270,   270,    70,
     254,   273,   274,   273,   270,    70,   254,   255,   256,   285,
     286,   293,   139,   261,   139,   139,   234,   270,   162,   139,
     139,   139,   172,   139,   141,   270,   141,   270,   190,   141,
     238,   270,   274,   173,   270,    78,   139,   185,    72,   144,
     219,   220,   115,   115,    72,   221,   139,   139,   139,   139,
     139,   139,   299,   270,   153,   142,   299,   299,    70,    70,
     138,     9,    10,    11,    25,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    49,   141,    59,    60,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   139,   119,    61,   142,   144,   286,   270,   270,
     138,   138,   241,   119,   286,   140,   270,   270,   250,     8,
     141,   156,   160,   235,   236,   270,   238,   274,   139,   270,
     141,   141,    31,   188,   141,   141,   142,   141,    78,   141,
     142,   271,   274,     8,   141,    13,     8,   141,   183,   184,
     274,   274,   304,   274,   140,   239,    31,   270,   297,   298,
      72,    77,   135,   136,   137,   300,   140,   143,   154,   270,
     145,   146,   117,   196,   194,    70,   282,   286,   293,   244,
     270,   245,   246,   242,   243,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   255,    31,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   253,   275,
     270,   288,   270,   140,    70,   282,   139,   262,   257,   140,
     140,    31,   217,   218,   238,   274,   270,    81,   270,   141,
       8,    89,    89,    70,   206,   140,    70,   153,   140,   270,
     220,    42,    43,    70,   122,   263,   264,   265,    72,     8,
     140,     8,   140,   140,   141,   121,   274,   294,   295,   272,
     274,   120,   140,     8,   268,    61,   119,    71,   270,   274,
     114,   155,   156,   186,   187,   143,    70,   254,   193,   117,
     198,   139,   139,   286,   270,   270,   270,   270,   270,    63,
     274,   217,    70,   142,   282,   289,   291,   292,   147,   143,
     217,   289,   158,   272,   140,     8,   139,   140,   164,   237,
     170,   168,    13,     8,   140,   167,   191,   143,   143,   264,
     264,   138,   139,    13,   184,   141,   305,   139,     8,   140,
      31,   270,    31,   270,   301,    70,    61,   143,   143,   139,
     118,   199,   200,   254,   142,   251,   252,    26,   255,   140,
     270,   290,   276,    61,   142,   140,   258,   156,    31,   238,
     274,   163,   161,   235,   270,   274,    31,   202,   274,   264,
      70,   156,   205,    26,   142,   207,   139,   100,    70,   264,
     267,   269,   264,   274,   296,   295,    13,   272,   272,   120,
      70,    72,    73,   302,   270,   140,   200,   142,     8,   222,
     217,   217,   247,   240,   143,   139,   280,   288,   270,   259,
     159,   272,   270,   156,   212,   141,   120,   201,   274,   201,
      13,   141,   208,   141,   208,    70,   122,   214,   215,   216,
     139,   120,   140,     8,   268,   294,   270,    31,   270,   147,
     147,   141,   222,   254,    97,   104,   105,   106,   107,   108,
     109,   110,   143,   223,   228,   229,   230,   231,   233,   140,
     140,   270,   262,   281,   277,   147,   143,   119,   260,    66,
     213,   140,   165,   202,   140,   140,   264,   208,    91,    92,
      93,   208,   143,   140,     8,    31,    72,   174,   264,   264,
     140,   272,   143,   143,    70,   224,    96,   231,     8,   141,
     217,   119,   278,   289,   156,   141,   235,   171,   169,    91,
     141,   270,    26,   141,   211,   143,   142,   216,    72,    13,
     254,   120,    13,    72,   232,   225,    70,   140,   289,   140,
     156,   204,   204,   141,   211,   210,   153,    31,    72,    13,
     264,   175,   264,   264,    13,     8,   141,   188,    13,   279,
     166,   209,   153,   143,    72,    13,   264,    72,   264,    72,
      70,   264,   280,   156,   203,   153,    13,   264,   140,    13,
     226,   264,   176,   264,   139,   142,   214,   153,   140,   143,
     141,   142,   227,   177,   153,   100,   178,   179,   180,   143,
     139,   180,   254,   181,    72,   140,   182,   142,   153,   143
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

  case 44:

    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 45:

    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 46:

    { zend_error(E_COMPILE_ERROR,"use: Not yet supported. Please use include_once() or require_once()");  zval_dtor(&(yyvsp[(2) - (3)]).u.constant); }
    break;

  case 48:

    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 49:

    { zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 50:

    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 51:

    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); }
    break;

  case 52:

    { zend_check_writable_variable(&(yyvsp[(6) - (8)])); zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 53:

    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 54:

    { (yyvsp[(1) - (1)]).u.opline_num = get_next_op_number(CG(active_op_array)); zend_do_declare_begin(TSRMLS_C); }
    break;

  case 55:

    { zend_do_declare_end(&(yyvsp[(1) - (6)]) TSRMLS_CC); }
    break;

  case 57:

    { zend_do_try(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 58:

    { zend_initialize_try_catch_element(&(yyvsp[(1) - (7)]) TSRMLS_CC); }
    break;

  case 59:

    { zend_do_first_catch(&(yyvsp[(7) - (9)]) TSRMLS_CC); }
    break;

  case 60:

    { zend_do_begin_catch(&(yyvsp[(1) - (12)]), &(yyvsp[(9) - (12)]), &(yyvsp[(11) - (12)]), 1 TSRMLS_CC); }
    break;

  case 61:

    { zend_do_end_catch(&(yyvsp[(1) - (16)]) TSRMLS_CC); }
    break;

  case 62:

    { zend_do_mark_last_catch(&(yyvsp[(7) - (18)]), &(yyvsp[(18) - (18)]) TSRMLS_CC); }
    break;

  case 63:

    { zend_do_throw(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 64:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 65:

    { (yyval).u.opline_num = -1; }
    break;

  case 66:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 67:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 68:

    { (yyval).u.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 69:

    { zend_do_begin_catch(&(yyvsp[(1) - (6)]), &(yyvsp[(3) - (6)]), &(yyvsp[(5) - (6)]), 0 TSRMLS_CC); }
    break;

  case 70:

    { zend_do_end_catch(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 73:

    { zend_do_end_variable_parse(BP_VAR_UNSET, 0 TSRMLS_CC); zend_do_unset(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 74:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 75:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 76:

    { zend_do_ticks(TSRMLS_C); }
    break;

  case 77:

    { zend_do_ticks(TSRMLS_C); }
    break;

  case 78:

    { (yyval).op_type = ZEND_RETURN_VAL; }
    break;

  case 79:

    { (yyval).op_type = ZEND_RETURN_REF; }
    break;

  case 80:

    { (yyvsp[(1) - (1)]).u.opline_num = CG(zend_lineno); }
    break;

  case 81:

    { zend_do_begin_function_declaration(&(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), 0, (yyvsp[(3) - (4)]).op_type, NULL TSRMLS_CC); }
    break;

  case 82:

    { zend_do_end_function_declaration(&(yyvsp[(1) - (11)]) TSRMLS_CC); }
    break;

  case 83:

    { zend_do_begin_class_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 84:

    { zend_do_end_class_declaration(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]) TSRMLS_CC); }
    break;

  case 85:

    { zend_do_begin_class_declaration(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]), NULL TSRMLS_CC); }
    break;

  case 86:

    { zend_do_end_class_declaration(&(yyvsp[(1) - (7)]), &(yyvsp[(2) - (7)]) TSRMLS_CC); }
    break;

  case 87:

    { (yyval).u.opline_num = CG(zend_lineno); (yyval).u.EA.type = 0; }
    break;

  case 88:

    { (yyval).u.opline_num = CG(zend_lineno); (yyval).u.EA.type = ZEND_ACC_EXPLICIT_ABSTRACT_CLASS; }
    break;

  case 89:

    { (yyval).u.opline_num = CG(zend_lineno); (yyval).u.EA.type = ZEND_ACC_FINAL_CLASS; }
    break;

  case 90:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 91:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 92:

    { (yyval).u.opline_num = CG(zend_lineno); (yyval).u.EA.type = ZEND_ACC_INTERFACE; }
    break;

  case 97:

    { zend_do_implements_interface(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 98:

    { zend_do_implements_interface(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 99:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 100:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 101:

    { zend_check_writable_variable(&(yyvsp[(1) - (1)])); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 102:

    { zend_check_writable_variable(&(yyvsp[(2) - (2)])); (yyval) = (yyvsp[(2) - (2)]);  (yyval).u.EA.type |= ZEND_PARSED_REFERENCE_VARIABLE; }
    break;

  case 106:

    { zend_do_declare_stmt(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 107:

    { zend_do_declare_stmt(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 108:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 109:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 110:

    { (yyval) = (yyvsp[(2) - (4)]); }
    break;

  case 111:

    { (yyval) = (yyvsp[(3) - (5)]); }
    break;

  case 112:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 113:

    { zend_do_extended_info(TSRMLS_C);  zend_do_case_before_statement(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 114:

    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (6)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 115:

    { zend_do_extended_info(TSRMLS_C);  zend_do_default_before_statement(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 116:

    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (5)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 124:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(2) - (2)]), 0 TSRMLS_CC); (yyval).op_type = IS_CONST; Z_LVAL((yyval).u.constant)=1; Z_TYPE((yyval).u.constant)=IS_LONG; INIT_PZVAL(&(yyval).u.constant); zend_do_receive_arg(ZEND_RECV, &tmp, &(yyval), NULL, &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]), 0 TSRMLS_CC); }
    break;

  case 125:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); (yyval).op_type = IS_CONST; Z_LVAL((yyval).u.constant)=1; Z_TYPE((yyval).u.constant)=IS_LONG; INIT_PZVAL(&(yyval).u.constant); zend_do_receive_arg(ZEND_RECV, &tmp, &(yyval), NULL, &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 1 TSRMLS_CC); }
    break;

  case 126:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(3) - (5)]), 0 TSRMLS_CC); (yyval).op_type = IS_CONST; Z_LVAL((yyval).u.constant)=1; Z_TYPE((yyval).u.constant)=IS_LONG; INIT_PZVAL(&(yyval).u.constant); zend_do_receive_arg(ZEND_RECV_INIT, &tmp, &(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(1) - (5)]), &(yyvsp[(3) - (5)]), 1 TSRMLS_CC); }
    break;

  case 127:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(2) - (4)]), 0 TSRMLS_CC); (yyval).op_type = IS_CONST; Z_LVAL((yyval).u.constant)=1; Z_TYPE((yyval).u.constant)=IS_LONG; INIT_PZVAL(&(yyval).u.constant); zend_do_receive_arg(ZEND_RECV_INIT, &tmp, &(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), 0 TSRMLS_CC); }
    break;

  case 128:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (4)]); Z_LVAL((yyval).u.constant)++; zend_do_receive_arg(ZEND_RECV, &tmp, &(yyval), NULL, &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); }
    break;

  case 129:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(5) - (5)]), 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (5)]); Z_LVAL((yyval).u.constant)++; zend_do_receive_arg(ZEND_RECV, &tmp, &(yyval), NULL, &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), 1 TSRMLS_CC); }
    break;

  case 130:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(5) - (7)]), 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (7)]); Z_LVAL((yyval).u.constant)++; zend_do_receive_arg(ZEND_RECV_INIT, &tmp, &(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(3) - (7)]), &(yyvsp[(5) - (7)]), 1 TSRMLS_CC); }
    break;

  case 131:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(4) - (6)]), 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (6)]); Z_LVAL((yyval).u.constant)++; zend_do_receive_arg(ZEND_RECV_INIT, &tmp, &(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), &(yyvsp[(4) - (6)]), 0 TSRMLS_CC); }
    break;

  case 132:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 133:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 134:

    { (yyval).op_type = IS_CONST; Z_TYPE((yyval).u.constant)=IS_NULL;}
    break;

  case 135:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 136:

    { Z_LVAL((yyval).u.constant) = 0; }
    break;

  case 137:

    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 138:

    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 139:

    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(2) - (2)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 140:

    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 141:

    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 142:

    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (4)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(4) - (4)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 143:

    { zend_do_fetch_global_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 144:

    { zend_do_fetch_global_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 145:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 146:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 147:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 148:

    { zend_do_fetch_static_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 149:

    { zend_do_fetch_static_variable(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 150:

    { zend_do_fetch_static_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 151:

    { zend_do_fetch_static_variable(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 154:

    { CG(access_type) = Z_LVAL((yyvsp[(1) - (1)]).u.constant); }
    break;

  case 157:

    { (yyvsp[(2) - (2)]).u.opline_num = CG(zend_lineno); }
    break;

  case 158:

    { zend_do_begin_function_declaration(&(yyvsp[(2) - (5)]), &(yyvsp[(5) - (5)]), 1, (yyvsp[(4) - (5)]).op_type, &(yyvsp[(1) - (5)]) TSRMLS_CC); }
    break;

  case 159:

    { zend_do_abstract_method(&(yyvsp[(5) - (10)]), &(yyvsp[(1) - (10)]), &(yyvsp[(10) - (10)]) TSRMLS_CC); zend_do_end_function_declaration(&(yyvsp[(2) - (10)]) TSRMLS_CC); }
    break;

  case 160:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 161:

    { Z_LVAL((yyval).u.constant) = 0;	}
    break;

  case 162:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 163:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 164:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 165:

    { (yyval) = (yyvsp[(1) - (1)]);  if (!(Z_LVAL((yyval).u.constant) & ZEND_ACC_PPP_MASK)) { Z_LVAL((yyval).u.constant) |= ZEND_ACC_PUBLIC; } }
    break;

  case 166:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 167:

    { Z_LVAL((yyval).u.constant) = zend_do_verify_access_types(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)])); }
    break;

  case 168:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 169:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PROTECTED; }
    break;

  case 170:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PRIVATE; }
    break;

  case 171:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_STATIC; }
    break;

  case 172:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 173:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_FINAL; }
    break;

  case 174:

    { zend_do_declare_property(&(yyvsp[(3) - (3)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 175:

    { zend_do_declare_property(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), CG(access_type) TSRMLS_CC); }
    break;

  case 176:

    { zend_do_declare_property(&(yyvsp[(1) - (1)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 177:

    { zend_do_declare_property(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), CG(access_type) TSRMLS_CC); }
    break;

  case 178:

    { zend_do_declare_class_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 179:

    { zend_do_declare_class_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 180:

    { zend_do_echo(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 181:

    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 182:

    { (yyval).op_type = IS_CONST;  Z_TYPE((yyval).u.constant) = IS_BOOL;  Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 183:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 184:

    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 185:

    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 186:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 187:

    { zend_do_list_init(TSRMLS_C); }
    break;

  case 188:

    { zend_do_list_end(&(yyval), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 189:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_assign(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 190:

    { zend_check_writable_variable(&(yyvsp[(1) - (4)])); zend_do_end_variable_parse(BP_VAR_W, 0 TSRMLS_CC); zend_do_end_variable_parse(BP_VAR_W, 0 TSRMLS_CC); zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 191:

    { zend_error(E_STRICT, "Assigning the return value of new by reference is deprecated");  zend_check_writable_variable(&(yyvsp[(1) - (5)])); zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 192:

    { zend_do_end_new_object(&(yyvsp[(3) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); zend_do_end_variable_parse(BP_VAR_W, 0 TSRMLS_CC); zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (7)]), &(yyvsp[(3) - (7)]) TSRMLS_CC); }
    break;

  case 193:

    { zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 194:

    { zend_do_end_new_object(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 195:

    { zend_do_clone(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 196:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 197:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 198:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 199:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 200:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 201:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 202:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 203:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 204:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 205:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 206:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 207:

    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_INC TSRMLS_CC); }
    break;

  case 208:

    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_INC TSRMLS_CC); }
    break;

  case 209:

    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_DEC TSRMLS_CC); }
    break;

  case 210:

    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_DEC TSRMLS_CC); }
    break;

  case 211:

    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 212:

    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 213:

    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 214:

    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 215:

    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 216:

    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 217:

    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 218:

    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 219:

    { zend_do_binary_op(ZEND_BOOL_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 220:

    { zend_do_binary_op(ZEND_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 221:

    { zend_do_binary_op(ZEND_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 222:

    { zend_do_binary_op(ZEND_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 223:

    { zend_do_binary_op(ZEND_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 224:

    { zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 225:

    { zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 226:

    { zend_do_binary_op(ZEND_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 227:

    { zend_do_binary_op(ZEND_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 228:

    { zend_do_binary_op(ZEND_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 229:

    { zend_do_binary_op(ZEND_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 230:

    { zend_do_binary_op(ZEND_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 231:

    { Z_LVAL((yyvsp[(1) - (2)]).u.constant)=0; Z_TYPE((yyvsp[(1) - (2)]).u.constant)=IS_LONG; (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 232:

    { Z_LVAL((yyvsp[(1) - (2)]).u.constant)=0; Z_TYPE((yyvsp[(1) - (2)]).u.constant)=IS_LONG; (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 233:

    { zend_do_unary_op(ZEND_BOOL_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 234:

    { zend_do_unary_op(ZEND_BW_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 235:

    { zend_do_binary_op(ZEND_IS_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 236:

    { zend_do_binary_op(ZEND_IS_NOT_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 237:

    { zend_do_binary_op(ZEND_IS_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 238:

    { zend_do_binary_op(ZEND_IS_NOT_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 239:

    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 240:

    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 241:

    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 242:

    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 243:

    { zend_do_instanceof(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 244:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 245:

    { zend_do_begin_qm_op(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 246:

    { zend_do_qm_true(&(yyvsp[(4) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 247:

    { zend_do_qm_false(&(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(2) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 248:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 249:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_LONG TSRMLS_CC); }
    break;

  case 250:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_DOUBLE TSRMLS_CC); }
    break;

  case 251:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_STRING TSRMLS_CC); }
    break;

  case 252:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_ARRAY TSRMLS_CC); }
    break;

  case 253:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_OBJECT TSRMLS_CC); }
    break;

  case 254:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_BOOL TSRMLS_CC); }
    break;

  case 255:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_NULL TSRMLS_CC); }
    break;

  case 256:

    { zend_do_exit(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 257:

    { zend_do_begin_silence(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 258:

    { zend_do_end_silence(&(yyvsp[(1) - (3)]) TSRMLS_CC); (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 259:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 260:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 261:

    { zend_do_shell_exec(&(yyval), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 262:

    { zend_do_print(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 263:

    { (yyvsp[(2) - (2)]).u.opline_num = zend_do_begin_function_call(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 264:

    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(4) - (5)]), 0, (yyvsp[(2) - (5)]).u.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 265:

    { zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 266:

    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 267:

    { zend_do_end_variable_parse(BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 268:

    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 269:

    { zend_do_end_variable_parse(BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_dynamic_function_call(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 270:

    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(4) - (5)]), 0, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 271:

    { zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 272:

    { zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 273:

    { zend_do_end_variable_parse(BP_VAR_R, 0 TSRMLS_CC); zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 274:

    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 275:

    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_declare_implicit_property(TSRMLS_C); }
    break;

  case 276:

    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).u.EA.type = ZEND_PARSED_MEMBER; }
    break;

  case 277:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 280:

    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); zend_do_declare_implicit_property(TSRMLS_C); }
    break;

  case 281:

    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 282:

    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 283:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 284:

    { Z_LVAL((yyval).u.constant)=0; }
    break;

  case 285:

    { (yyval) = (yyvsp[(2) - (3)]); }
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

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 293:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 294:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 295:

    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_CT TSRMLS_CC); }
    break;

  case 296:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 297:

    { zval minus_one;  Z_TYPE(minus_one) = IS_LONG; Z_LVAL(minus_one) = -1;  mul_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant, &minus_one TSRMLS_CC);  (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 298:

    { (yyval) = (yyvsp[(3) - (4)]); Z_TYPE((yyval).u.constant) = IS_CONSTANT_ARRAY; }
    break;

  case 299:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 300:

    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_CT TSRMLS_CC); }
    break;

  case 301:

    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_RT TSRMLS_CC); }
    break;

  case 302:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 303:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 304:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 305:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 306:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 307:

    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); }
    break;

  case 308:

    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 311:

    { zend_do_add_static_array_element(&(yyval), &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)])); }
    break;

  case 312:

    { zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(3) - (3)])); }
    break;

  case 313:

    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)])); }
    break;

  case 314:

    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(1) - (1)])); }
    break;

  case 315:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 316:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 317:

    { zend_do_end_variable_parse(BP_VAR_R, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 318:

    { zend_do_end_variable_parse(BP_VAR_W, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 319:

    { zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 320:

    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 321:

    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 322:

    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).u.EA.type = (yyvsp[(1) - (7)]).u.EA.type | ((yyvsp[(7) - (7)]).u.EA.type ? (yyvsp[(7) - (7)]).u.EA.type : (yyvsp[(6) - (7)]).u.EA.type); }
    break;

  case 323:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 324:

    { (yyval).u.EA.type = (yyvsp[(2) - (2)]).u.EA.type; }
    break;

  case 325:

    { (yyval).u.EA.type = 0; }
    break;

  case 326:

    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 327:

    { (yyval).u.EA.type = (yyvsp[(4) - (4)]).u.EA.type; }
    break;

  case 328:

    { zend_do_pop_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); zend_do_begin_method_call(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 329:

    { zend_do_end_function_call(&(yyvsp[(1) - (4)]), &(yyval), &(yyvsp[(3) - (4)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);
			  zend_do_push_object(&(yyval) TSRMLS_CC); (yyval).u.EA.type = ZEND_PARSED_METHOD_CALL; }
    break;

  case 330:

    { zend_do_declare_implicit_property(TSRMLS_C); (yyval).u.EA.type = ZEND_PARSED_MEMBER; }
    break;

  case 331:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 332:

    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 333:

    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 334:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 335:

    { zend_do_begin_variable_parse(TSRMLS_C); (yyval) = (yyvsp[(1) - (1)]); (yyval).u.EA.type = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 336:

    { (yyval) = (yyvsp[(1) - (1)]); (yyval).u.EA.type = ZEND_PARSED_VARIABLE; }
    break;

  case 337:

    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); (yyval).u.EA.type = ZEND_PARSED_VARIABLE; }
    break;

  case 338:

    { (yyval) = (yyvsp[(1) - (1)]); (yyval).u.EA.type = ZEND_PARSED_STATIC_MEMBER; }
    break;

  case 339:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 340:

    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 341:

    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 342:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 343:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 344:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 345:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 346:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 347:

    { zend_do_end_variable_parse(BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 348:

    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (2)]) TSRMLS_CC);}
    break;

  case 349:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 350:

    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 351:

    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (1)]) TSRMLS_CC);}
    break;

  case 352:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 353:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 354:

    { Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 355:

    { Z_LVAL((yyval).u.constant)++; }
    break;

  case 358:

    { zend_do_add_list_element(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 359:

    { zend_do_new_list_begin(TSRMLS_C); }
    break;

  case 360:

    { zend_do_new_list_end(TSRMLS_C); }
    break;

  case 361:

    { zend_do_add_list_element(NULL TSRMLS_CC); }
    break;

  case 362:

    { zend_do_init_array(&(yyval), NULL, NULL, 0 TSRMLS_CC); }
    break;

  case 363:

    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 364:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(3) - (5)]), 0 TSRMLS_CC); }
    break;

  case 365:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(3) - (3)]), NULL, 0 TSRMLS_CC); }
    break;

  case 366:

    { zend_do_init_array(&(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;

  case 367:

    { zend_do_init_array(&(yyval), &(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 368:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 1 TSRMLS_CC); }
    break;

  case 369:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(4) - (4)]), NULL, 1 TSRMLS_CC); }
    break;

  case 370:

    { zend_do_init_array(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 1 TSRMLS_CC); }
    break;

  case 371:

    { zend_do_init_array(&(yyval), &(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 372:

    { zend_do_end_variable_parse(BP_VAR_R, 0 TSRMLS_CC);  zend_do_add_variable(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 373:

    { zend_do_add_string(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 374:

    { zend_do_init_string(&(yyval) TSRMLS_CC); }
    break;

  case 375:

    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 376:

    { zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 377:

    { fetch_array_begin(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 378:

    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyvsp[(2) - (3)]), &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); zend_do_fetch_property(&(yyval), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 379:

    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_simple_variable(&(yyval), &(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 380:

    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_array_begin(&(yyval), &(yyvsp[(2) - (6)]), &(yyvsp[(4) - (6)]) TSRMLS_CC); }
    break;

  case 381:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 382:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 383:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 384:

    { fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 385:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 386:

    { zend_do_isset_or_isempty(ZEND_ISEMPTY, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 387:

    { zend_do_include_or_eval(ZEND_INCLUDE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 388:

    { zend_do_include_or_eval(ZEND_INCLUDE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 389:

    { zend_do_include_or_eval(ZEND_EVAL, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 390:

    { zend_do_include_or_eval(ZEND_REQUIRE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 391:

    { zend_do_include_or_eval(ZEND_REQUIRE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 392:

    { zend_do_isset_or_isempty(ZEND_ISSET, &(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 393:

    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 394:

    { znode tmp; zend_do_isset_or_isempty(ZEND_ISSET, &tmp, &(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &tmp, &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 395:

    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT TSRMLS_CC); }
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

