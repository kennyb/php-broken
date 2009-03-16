
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse         zendparse
#define yylex           zendlex
#define yyerror         zenderror
#define yylval          zendlval
#define yychar          zendchar
#define yydebug         zenddebug
#define yynerrs         zendnerrs


/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"

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




/* Line 189 of yacc.c  */
#line 130 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.c"

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 410 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.c"

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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3135

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  148
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  151
/* YYNRULES -- Number of rules.  */
#define YYNRULES  382
/* YYNRULES -- Number of states.  */
#define YYNSTATES  706

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
      46,    47,    48,    58,    59,    60,    68,    69,    70,    80,
      81,    82,    83,    96,    97,   104,   107,   111,   114,   118,
     121,   125,   129,   133,   137,   140,   144,   146,   149,   155,
     156,   157,   168,   169,   170,   181,   182,   189,   191,   192,
     193,   194,   195,   196,   215,   219,   221,   222,   224,   227,
     228,   229,   240,   242,   246,   248,   250,   252,   253,   255,
     256,   257,   269,   270,   279,   280,   288,   290,   293,   296,
     297,   300,   302,   303,   306,   307,   310,   312,   316,   317,
     320,   322,   325,   329,   335,   339,   344,   349,   355,   356,
     357,   364,   365,   371,   373,   375,   376,   379,   381,   382,
     385,   389,   395,   400,   405,   411,   419,   426,   427,   429,
     431,   433,   434,   436,   438,   441,   445,   449,   454,   458,
     460,   462,   465,   470,   474,   480,   482,   486,   489,   490,
     491,   496,   499,   500,   501,   512,   514,   518,   520,   522,
     523,   525,   527,   530,   532,   534,   536,   538,   540,   542,
     546,   552,   554,   558,   564,   569,   573,   575,   576,   578,
     579,   584,   586,   590,   594,   598,   602,   603,   611,   615,
     620,   621,   629,   630,   635,   638,   642,   646,   650,   654,
     658,   662,   666,   670,   674,   678,   682,   685,   688,   691,
     694,   696,   698,   702,   706,   710,   714,   718,   722,   726,
     730,   734,   738,   742,   746,   749,   752,   755,   758,   762,
     766,   770,   774,   778,   782,   786,   790,   794,   798,   799,
     800,   808,   810,   813,   816,   819,   822,   825,   828,   831,
     834,   835,   839,   841,   846,   850,   853,   854,   860,   861,
     869,   870,   878,   879,   885,   887,   889,   891,   892,   893,
     900,   902,   905,   906,   909,   910,   913,   917,   918,   922,
     924,   926,   928,   930,   932,   934,   936,   938,   940,   942,
     945,   948,   953,   955,   959,   961,   963,   965,   967,   971,
     975,   976,   979,   980,   982,   988,   992,   996,   998,  1000,
    1002,  1004,  1006,  1008,  1009,  1010,  1018,  1020,  1023,  1024,
    1025,  1030,  1031,  1036,  1037,  1039,  1042,  1046,  1048,  1050,
    1052,  1055,  1057,  1062,  1067,  1069,  1071,  1076,  1077,  1079,
    1081,  1082,  1085,  1090,  1095,  1097,  1099,  1103,  1105,  1108,
    1112,  1114,  1116,  1117,  1123,  1124,  1125,  1128,  1134,  1138,
    1142,  1144,  1151,  1156,  1161,  1164,  1167,  1170,  1171,  1173,
    1174,  1180,  1184,  1188,  1195,  1199,  1201,  1203,  1205,  1210,
    1215,  1218,  1221
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     149,     0,    -1,   150,    -1,    -1,   150,   151,   152,    -1,
      -1,   156,    -1,   186,    -1,   187,    -1,   114,   139,   140,
     141,    -1,    -1,   153,   154,   155,    -1,    -1,   156,    -1,
     186,    -1,   187,    -1,   114,   139,   140,   141,    -1,   157,
      -1,   142,   153,   143,    -1,    -1,    -1,    -1,    65,   139,
     158,   264,   140,   159,   156,   160,   209,    -1,    -1,    -1,
      81,   139,   161,   264,   140,   162,   156,    -1,    -1,    -1,
      80,   163,   156,    81,   139,   164,   264,   140,   141,    -1,
      -1,    -1,    -1,    83,   139,   231,   141,   165,   231,   141,
     166,   231,   140,   167,   156,    -1,    -1,    90,   139,   264,
     140,   168,   204,    -1,    94,   141,    -1,    94,   264,   141,
      -1,    95,   141,    -1,    95,   264,   141,    -1,    98,   141,
      -1,    98,   236,   141,    -1,    98,   268,   141,    -1,   103,
     215,   141,    -1,   109,   217,   141,    -1,   229,   141,    -1,
      79,   230,   141,    -1,    74,    -1,   264,   141,    -1,   111,
     139,   184,   140,   141,    -1,    -1,    -1,    85,   139,   268,
      89,   169,   202,   201,   140,   170,   156,    -1,    -1,    -1,
      85,   139,   236,    89,   171,   268,   201,   140,   172,   156,
      -1,    -1,    87,   173,   139,   203,   140,   156,    -1,   141,
      -1,    -1,    -1,    -1,    -1,    -1,    99,   174,   142,   153,
     143,   100,   139,   175,   248,   176,    72,   140,   177,   142,
     153,   143,   178,   179,    -1,   101,   264,   141,    -1,   180,
      -1,    -1,   181,    -1,   180,   181,    -1,    -1,    -1,   100,
     139,   248,   182,    72,   140,   183,   142,   153,   143,    -1,
     185,    -1,   184,     8,   185,    -1,   268,    -1,   189,    -1,
     192,    -1,    -1,    31,    -1,    -1,    -1,    96,   190,   188,
      70,   191,   139,   210,   140,   142,   153,   143,    -1,    -1,
     195,    70,   196,   193,   199,   142,   218,   143,    -1,    -1,
     197,    70,   194,   198,   142,   218,   143,    -1,   115,    -1,
     108,   115,    -1,   107,   115,    -1,    -1,   117,   248,    -1,
     116,    -1,    -1,   117,   200,    -1,    -1,   118,   200,    -1,
     248,    -1,   200,     8,   248,    -1,    -1,   120,   202,    -1,
     268,    -1,    31,   268,    -1,    70,    13,   258,    -1,   203,
       8,    70,    13,   258,    -1,   142,   205,   143,    -1,   142,
     141,   205,   143,    -1,    26,   205,    91,   141,    -1,    26,
     141,   205,    91,   141,    -1,    -1,    -1,   205,    92,   264,
     208,   206,   153,    -1,    -1,   205,    93,   208,   207,   153,
      -1,    26,    -1,   141,    -1,    -1,    66,   156,    -1,   211,
      -1,    -1,   212,    72,    -1,   212,    31,    72,    -1,   212,
      31,    72,    13,   258,    -1,   212,    72,    13,   258,    -1,
     211,     8,   212,    72,    -1,   211,     8,   212,    31,    72,
      -1,   211,     8,   212,    31,    72,    13,   258,    -1,   211,
       8,   212,    72,    13,   258,    -1,    -1,    70,    -1,   122,
      -1,   214,    -1,    -1,   236,    -1,   268,    -1,    31,   266,
      -1,   214,     8,   236,    -1,   214,     8,   268,    -1,   214,
       8,    31,   266,    -1,   215,     8,   216,    -1,   216,    -1,
      72,    -1,   144,   265,    -1,   144,   142,   264,   143,    -1,
     217,     8,    72,    -1,   217,     8,    72,    13,   258,    -1,
      72,    -1,    72,    13,   258,    -1,   218,   219,    -1,    -1,
      -1,   224,   220,   228,   141,    -1,   229,   141,    -1,    -1,
      -1,   225,    96,   221,   188,    70,   222,   139,   210,   140,
     223,    -1,   141,    -1,   142,   153,   143,    -1,   226,    -1,
     110,    -1,    -1,   226,    -1,   227,    -1,   226,   227,    -1,
     104,    -1,   105,    -1,   106,    -1,   109,    -1,   108,    -1,
     107,    -1,   228,     8,    72,    -1,   228,     8,    72,    13,
     258,    -1,    72,    -1,    72,    13,   258,    -1,   229,     8,
      70,    13,   258,    -1,    97,    70,    13,   258,    -1,   230,
       8,   264,    -1,   264,    -1,    -1,   232,    -1,    -1,   232,
       8,   233,   264,    -1,   264,    -1,   234,    28,   264,    -1,
     264,    28,   264,    -1,   235,    27,   264,    -1,   264,    27,
     264,    -1,    -1,   121,   139,   237,   288,   140,    13,   264,
      -1,   268,    13,   264,    -1,   268,    13,    31,   268,    -1,
      -1,   268,    13,    31,    63,   249,   238,   256,    -1,    -1,
      63,   249,   239,   256,    -1,    62,   264,    -1,   268,    24,
     264,    -1,   268,    23,   264,    -1,   268,    22,   264,    -1,
     268,    21,   264,    -1,   268,    20,   264,    -1,   268,    19,
     264,    -1,   268,    18,   264,    -1,   268,    17,   264,    -1,
     268,    16,   264,    -1,   268,    15,   264,    -1,   268,    14,
     264,    -1,   267,    60,    -1,    60,   267,    -1,   267,    59,
      -1,    59,   267,    -1,   235,    -1,   234,    -1,   264,    10,
     264,    -1,   264,    29,   264,    -1,   264,    31,   264,    -1,
     264,    30,   264,    -1,   264,    44,   264,    -1,   264,    42,
     264,    -1,   264,    43,   264,    -1,   264,    45,   264,    -1,
     264,    46,   264,    -1,   264,    47,   264,    -1,   264,    41,
     264,    -1,   264,    40,   264,    -1,    42,   264,    -1,    43,
     264,    -1,    48,   264,    -1,    50,   264,    -1,   264,    33,
     264,    -1,   264,    32,   264,    -1,   264,    35,   264,    -1,
     264,    34,   264,    -1,   264,    36,   264,    -1,   264,    39,
     264,    -1,   264,    37,   264,    -1,   264,    38,   264,    -1,
     264,    49,   249,    -1,   139,   264,   140,    -1,    -1,    -1,
     264,    25,   240,   264,    26,   241,   264,    -1,   297,    -1,
      58,   264,    -1,    57,   264,    -1,    56,   264,    -1,    55,
     264,    -1,    54,   264,    -1,    53,   264,    -1,    52,   264,
      -1,    64,   255,    -1,    -1,    51,   242,   264,    -1,   260,
      -1,   122,   139,   291,   140,    -1,   145,   293,   145,    -1,
      12,   264,    -1,    -1,    70,   139,   244,   213,   140,    -1,
      -1,   248,   138,    70,   139,   245,   213,   140,    -1,    -1,
     248,   138,   276,   139,   246,   213,   140,    -1,    -1,   276,
     139,   247,   213,   140,    -1,    70,    -1,    70,    -1,   250,
      -1,    -1,    -1,   279,   119,   251,   283,   252,   253,    -1,
     279,    -1,   253,   254,    -1,    -1,   119,   283,    -1,    -1,
     139,   140,    -1,   139,   264,   140,    -1,    -1,   139,   213,
     140,    -1,    68,    -1,    69,    -1,    78,    -1,   126,    -1,
     127,    -1,   123,    -1,   124,    -1,   125,    -1,   257,    -1,
      70,    -1,    42,   258,    -1,    43,   258,    -1,   122,   139,
     261,   140,    -1,   259,    -1,    70,   138,    70,    -1,    70,
      -1,    71,    -1,   259,    -1,   257,    -1,   146,   293,   146,
      -1,   134,   293,   135,    -1,    -1,   263,   262,    -1,    -1,
       8,    -1,   263,     8,   258,   120,   258,    -1,   263,     8,
     258,    -1,   258,   120,   258,    -1,   258,    -1,   265,    -1,
     236,    -1,   268,    -1,   268,    -1,   268,    -1,    -1,    -1,
     278,   119,   269,   283,   270,   274,   271,    -1,   278,    -1,
     271,   272,    -1,    -1,    -1,   119,   283,   273,   274,    -1,
      -1,   139,   275,   213,   140,    -1,    -1,   280,    -1,   287,
     280,    -1,   248,   138,   276,    -1,   279,    -1,   243,    -1,
     280,    -1,   287,   280,    -1,   277,    -1,   280,    61,   282,
     147,    -1,   280,   142,   264,   143,    -1,   281,    -1,    72,
      -1,   144,   142,   264,   143,    -1,    -1,   264,    -1,   285,
      -1,    -1,   276,   284,    -1,   285,    61,   282,   147,    -1,
     285,   142,   264,   143,    -1,   286,    -1,    70,    -1,   142,
     264,   143,    -1,   144,    -1,   287,   144,    -1,   288,     8,
     289,    -1,   289,    -1,   268,    -1,    -1,   121,   139,   290,
     288,   140,    -1,    -1,    -1,   292,   262,    -1,   292,     8,
     264,   120,   264,    -1,   292,     8,   264,    -1,   264,   120,
     264,    -1,   264,    -1,   292,     8,   264,   120,    31,   266,
      -1,   292,     8,    31,   266,    -1,   264,   120,    31,   266,
      -1,    31,   266,    -1,   293,   294,    -1,   293,    77,    -1,
      -1,    72,    -1,    -1,    72,    61,   295,   296,   147,    -1,
      72,   119,    70,    -1,   136,   264,   143,    -1,   136,    71,
      61,   264,   147,   143,    -1,   137,   268,   143,    -1,    70,
      -1,    73,    -1,    72,    -1,   112,   139,   298,   140,    -1,
     113,   139,   268,   140,    -1,     7,   264,    -1,     6,   264,
      -1,   268,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   148,   148,   152,   152,   153,   158,   159,   160,   161,
     166,   166,   167,   172,   173,   174,   175,   180,   184,   185,
     185,   185,   185,   186,   186,   186,   187,   187,   187,   191,
     193,   195,   188,   197,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   213,
     214,   212,   217,   218,   216,   220,   220,   221,   222,   223,
     224,   225,   226,   222,   228,   233,   234,   238,   239,   244,
     244,   244,   249,   250,   254,   258,   262,   267,   268,   273,
     273,   273,   279,   278,   285,   284,   294,   295,   296,   300,
     301,   305,   308,   310,   313,   315,   319,   320,   324,   325,
     330,   331,   336,   337,   342,   343,   344,   345,   350,   351,
     351,   352,   352,   357,   358,   363,   365,   370,   371,   376,
     377,   378,   379,   380,   381,   382,   383,   388,   389,   390,
     395,   396,   401,   402,   403,   404,   405,   406,   410,   411,
     416,   417,   418,   423,   424,   425,   426,   431,   432,   437,
     437,   438,   439,   439,   439,   445,   446,   450,   451,   455,
     456,   460,   461,   465,   466,   467,   468,   469,   470,   474,
     475,   476,   477,   481,   482,   486,   487,   492,   493,   497,
     497,   498,   503,   504,   509,   510,   514,   514,   515,   516,
     517,   517,   518,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     563,   566,   567,   568,   569,   570,   571,   572,   573,   574,
     575,   575,   576,   577,   578,   579,   583,   583,   586,   586,
     589,   589,   592,   592,   598,   602,   603,   608,   609,   608,
     611,   616,   617,   622,   626,   627,   628,   633,   634,   639,
     640,   641,   642,   643,   644,   645,   646,   651,   652,   653,
     654,   655,   656,   660,   664,   665,   666,   667,   668,   669,
     674,   675,   678,   680,   684,   685,   686,   687,   691,   692,
     697,   702,   707,   712,   713,   712,   715,   719,   720,   725,
     725,   729,   729,   733,   737,   738,   742,   747,   748,   753,
     754,   755,   759,   760,   761,   766,   767,   771,   772,   777,
     778,   778,   782,   783,   784,   788,   789,   793,   794,   798,
     799,   804,   805,   805,   806,   811,   812,   816,   817,   818,
     819,   820,   821,   822,   823,   827,   828,   829,   835,   836,
     836,   837,   838,   839,   840,   845,   846,   847,   852,   853,
     854,   855,   859
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
  "$accept", "start", "top_statement_list", "$@1", "top_statement",
  "inner_statement_list", "$@2", "inner_statement", "statement",
  "unticked_statement", "$@3", "$@4", "$@5", "$@6", "$@7", "$@8", "$@9",
  "$@10", "$@11", "$@12", "$@13", "$@14", "$@15", "$@16", "$@17", "$@18",
  "$@19", "$@20", "$@21", "$@22", "$@23", "additional_catches",
  "non_empty_additional_catches", "additional_catch", "@24", "$@25",
  "unset_variables", "unset_variable", "function_declaration_statement",
  "class_declaration_statement", "is_reference",
  "unticked_function_declaration_statement", "$@26", "$@27",
  "unticked_class_declaration_statement", "$@28", "$@29",
  "class_entry_type", "extends_from", "interface_entry",
  "interface_extends_list", "implements_list", "interface_list",
  "foreach_optional_arg", "foreach_variable", "declare_list",
  "switch_case_list", "case_list", "$@30", "$@31", "case_separator",
  "else_single", "parameter_list", "non_empty_parameter_list",
  "optional_class_type", "function_call_parameter_list",
  "non_empty_function_call_parameter_list", "global_var_list",
  "global_var", "static_var_list", "class_statement_list",
  "class_statement", "$@32", "$@33", "$@34", "method_body",
  "variable_modifiers", "method_modifiers", "non_empty_member_modifiers",
  "member_modifier", "class_variable_declaration",
  "class_constant_declaration", "echo_expr_list", "for_expr",
  "non_empty_for_expr", "$@35", "and_expr", "or_expr",
  "expr_without_variable", "$@36", "$@37", "$@38", "$@39", "$@40", "$@41",
  "function_call", "$@42", "$@43", "$@44", "$@45",
  "fully_qualified_class_name", "class_name_reference",
  "dynamic_class_name_reference", "$@46", "$@47",
  "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "ctor_arguments",
  "common_scalar", "static_scalar", "static_class_constant", "scalar",
  "static_array_pair_list", "possible_comma",
  "non_empty_static_array_pair_list", "expr", "r_variable", "w_variable",
  "rw_variable", "variable", "$@48", "$@49", "variable_properties",
  "variable_property", "$@50", "method_or_not", "$@51",
  "variable_without_objects", "static_member",
  "base_variable_with_function_calls", "base_variable",
  "reference_variable", "compound_variable", "dim_offset",
  "object_property", "$@52", "object_dim_list", "variable_name",
  "simple_indirect_reference", "assignment_list",
  "assignment_list_element", "$@53", "array_pair_list",
  "non_empty_array_pair_list", "encaps_list", "encaps_var", "$@54",
  "encaps_var_offset", "internal_functions_in_yacc", "isset_variables", 0
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
     159,   160,   157,   161,   162,   157,   163,   164,   157,   165,
     166,   167,   157,   168,   157,   157,   157,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   169,
     170,   157,   171,   172,   157,   173,   157,   157,   174,   175,
     176,   177,   178,   157,   157,   179,   179,   180,   180,   182,
     183,   181,   184,   184,   185,   186,   187,   188,   188,   190,
     191,   189,   193,   192,   194,   192,   195,   195,   195,   196,
     196,   197,   198,   198,   199,   199,   200,   200,   201,   201,
     202,   202,   203,   203,   204,   204,   204,   204,   205,   206,
     205,   207,   205,   208,   208,   209,   209,   210,   210,   211,
     211,   211,   211,   211,   211,   211,   211,   212,   212,   212,
     213,   213,   214,   214,   214,   214,   214,   214,   215,   215,
     216,   216,   216,   217,   217,   217,   217,   218,   218,   220,
     219,   219,   221,   222,   219,   223,   223,   224,   224,   225,
     225,   226,   226,   227,   227,   227,   227,   227,   227,   228,
     228,   228,   228,   229,   229,   230,   230,   231,   231,   233,
     232,   232,   234,   234,   235,   235,   237,   236,   236,   236,
     238,   236,   239,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   240,   241,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     242,   236,   236,   236,   236,   236,   244,   243,   245,   243,
     246,   243,   247,   243,   248,   249,   249,   251,   252,   250,
     250,   253,   253,   254,   255,   255,   255,   256,   256,   257,
     257,   257,   257,   257,   257,   257,   257,   258,   258,   258,
     258,   258,   258,   259,   260,   260,   260,   260,   260,   260,
     261,   261,   262,   262,   263,   263,   263,   263,   264,   264,
     265,   266,   267,   269,   270,   268,   268,   271,   271,   273,
     272,   275,   274,   274,   276,   276,   277,   278,   278,   279,
     279,   279,   280,   280,   280,   281,   281,   282,   282,   283,
     284,   283,   285,   285,   285,   286,   286,   287,   287,   288,
     288,   289,   290,   289,   289,   291,   291,   292,   292,   292,
     292,   292,   292,   292,   292,   293,   293,   293,   294,   295,
     294,   294,   294,   294,   294,   296,   296,   296,   297,   297,
     297,   297,   298
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     3,     0,     1,     1,     1,     4,
       0,     3,     0,     1,     1,     1,     4,     1,     3,     0,
       0,     0,     9,     0,     0,     7,     0,     0,     9,     0,
       0,     0,    12,     0,     6,     2,     3,     2,     3,     2,
       3,     3,     3,     3,     2,     3,     1,     2,     5,     0,
       0,    10,     0,     0,    10,     0,     6,     1,     0,     0,
       0,     0,     0,    18,     3,     1,     0,     1,     2,     0,
       0,    10,     1,     3,     1,     1,     1,     0,     1,     0,
       0,    11,     0,     8,     0,     7,     1,     2,     2,     0,
       2,     1,     0,     2,     0,     2,     1,     3,     0,     2,
       1,     2,     3,     5,     3,     4,     4,     5,     0,     0,
       6,     0,     5,     1,     1,     0,     2,     1,     0,     2,
       3,     5,     4,     4,     5,     7,     6,     0,     1,     1,
       1,     0,     1,     1,     2,     3,     3,     4,     3,     1,
       1,     2,     4,     3,     5,     1,     3,     2,     0,     0,
       4,     2,     0,     0,    10,     1,     3,     1,     1,     0,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     3,
       5,     1,     3,     5,     4,     3,     1,     0,     1,     0,
       4,     1,     3,     3,     3,     3,     0,     7,     3,     4,
       0,     7,     0,     4,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     0,     0,
       7,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       0,     3,     1,     4,     3,     2,     0,     5,     0,     7,
       0,     7,     0,     5,     1,     1,     1,     0,     0,     6,
       1,     2,     0,     2,     0,     2,     3,     0,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     4,     1,     3,     1,     1,     1,     1,     3,     3,
       0,     2,     0,     1,     5,     3,     3,     1,     1,     1,
       1,     1,     1,     0,     0,     7,     1,     2,     0,     0,
       4,     0,     4,     0,     1,     2,     3,     1,     1,     1,
       2,     1,     4,     4,     1,     1,     4,     0,     1,     1,
       0,     2,     4,     4,     1,     1,     3,     1,     2,     3,
       1,     1,     0,     5,     0,     0,     2,     5,     3,     3,
       1,     6,     4,     4,     2,     2,     2,     0,     1,     0,
       5,     3,     3,     6,     3,     1,     1,     1,     4,     4,
       2,     2,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     3,     1,     0,     0,     0,     0,     0,     0,
       0,     0,   250,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   274,     0,   279,   280,   294,   295,
     335,    46,   281,     0,    26,     0,     0,     0,    55,     0,
       0,     0,    79,     0,     0,    58,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    86,    91,     0,     0,   284,
     285,   286,   282,   283,   367,     0,    57,    12,   347,   367,
     367,     4,     6,    17,     7,     8,    75,    76,     0,     0,
       0,   211,   210,   309,   328,     0,   297,   296,   252,     0,
     308,     0,   310,     0,   331,   316,   327,   329,   334,     0,
     241,   381,   380,   255,   224,   225,   226,   227,     0,   248,
     247,   246,   245,   244,   243,   242,   264,   209,   312,   207,
     194,   265,     0,   192,   266,   270,   329,     0,     0,   249,
      19,     0,   256,     0,   176,     0,    23,   177,     0,     0,
       0,    35,     0,    37,     0,    77,     0,    39,   309,     0,
     310,     0,     0,   140,     0,     0,   139,    88,    87,   145,
       0,     0,     0,     0,     0,   186,   355,     0,     0,    10,
       0,     0,     0,    89,    84,     0,    44,     0,     0,     0,
       0,   238,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    47,   208,   206,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   262,
     313,   337,     0,   348,   330,   251,     0,   277,   267,   330,
     275,     0,     0,   293,   131,     0,    45,     0,     0,     0,
     178,   181,   309,   310,     0,     0,    36,    38,    78,     0,
       0,    40,    41,    12,    64,     0,   141,   310,     0,    42,
       0,     0,    43,     0,    72,    74,   382,     0,     0,     0,
     354,     0,   360,     0,   302,   368,   366,   299,     0,     0,
     365,   237,    18,     0,     0,   254,   298,     0,    82,    92,
       0,   182,   184,     0,   326,   324,     0,   212,     0,   185,
     183,   213,   215,   214,   229,   228,   231,   230,   232,   234,
     235,   233,   223,   222,   217,   218,   216,   219,   220,   221,
     236,     0,   188,   205,   204,   203,   202,   201,   200,   199,
     198,   197,   196,   195,   131,     0,   338,     0,     0,   326,
     131,   193,     0,   276,     0,     0,     0,   130,   309,   310,
     175,     0,     0,    29,   179,    52,    49,     0,     0,    33,
      80,     0,     0,   288,     0,   287,   174,   292,    10,     0,
     138,   146,   143,     0,     0,   378,   379,     9,     0,   351,
       0,   350,   364,   311,     0,   253,   303,   356,   369,     0,
     295,     0,     0,     0,    11,    13,    14,    15,   336,   264,
      90,    94,     0,     0,     0,   258,   260,   325,     0,     0,
     189,     0,   345,     0,   340,   314,   339,   344,   332,   333,
       0,   268,    20,   134,   257,     0,    27,    24,   177,     0,
       0,     0,     0,     0,     0,     0,     0,   289,   290,   300,
       0,   142,     0,    73,    48,   352,   354,     0,     0,   359,
       0,   358,     0,   371,     0,   372,   374,     0,     0,     0,
      93,    96,   148,   173,   131,   131,   239,   190,   263,     0,
     341,   323,   337,     0,   278,   272,     0,     0,   309,   310,
       0,     0,     0,   180,    98,     0,    98,   100,   102,     0,
      56,   108,   108,    34,   127,   307,     0,   302,     0,   144,
     354,   349,     0,   363,   362,     0,   375,   377,   376,     0,
       0,     0,    95,   148,     0,   159,     0,     0,     0,   277,
     346,   321,   318,     0,     0,   269,    21,   137,     0,    25,
      30,     0,     0,   101,     0,     0,   108,     0,   108,     0,
     128,   129,     0,   117,     0,     0,   291,   303,   301,    59,
       0,   187,     0,   357,   370,     0,    16,   159,    97,   163,
     164,   165,   168,   167,   166,   158,    85,   147,   149,     0,
     157,   161,     0,   259,   261,   240,   191,   131,   315,   342,
     343,     0,   271,   115,     0,   177,    99,    53,    50,   103,
       0,     0,     0,     0,     0,   104,     0,   127,     0,   119,
     306,   305,     0,   353,   361,   373,    83,     0,   152,   162,
     151,     0,     0,   317,   273,     0,    22,    28,     0,     0,
       0,     0,   106,     0,   113,   114,   111,   105,    12,     0,
     120,     0,     0,    60,   171,     0,    77,   322,   319,   116,
      31,    54,    51,   107,   109,    12,    10,     0,   123,     0,
     122,   304,     0,     0,     0,   150,     0,   323,     0,    12,
      10,    81,   124,     0,   121,     0,   172,   169,   153,   320,
      32,    10,     0,   126,    61,     0,     0,   125,     0,   170,
     127,    12,     0,    10,     0,    62,   155,    12,   154,    66,
      10,     0,    63,    65,    67,   156,     0,    68,    69,     0,
       0,    70,     0,    12,    10,    71
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    71,   169,   283,   394,    72,    73,
     232,   476,   583,   238,   481,   135,   480,   428,   585,   658,
     435,   431,   620,   430,   619,   139,   151,   602,   652,   678,
     689,   692,   693,   694,   699,   702,   263,   264,    74,    75,
     249,    76,   145,   436,    77,   401,   289,    78,   288,    79,
     403,   459,   460,   532,   486,   358,   493,   537,   659,   645,
     626,   616,   542,   543,   544,   346,   347,   155,   156,   160,
     515,   567,   607,   636,   676,   688,   568,   569,   570,   571,
     635,    80,   133,   239,   240,   429,    81,    82,    83,   270,
     519,   227,   298,   518,   108,    84,   234,   464,   465,   334,
      85,   123,   124,   342,   475,   525,   582,   129,   341,    86,
     366,    87,    88,   496,   387,   497,    89,    90,   382,    91,
      92,   335,   471,   578,   613,   657,   522,   577,    93,    94,
      95,    96,    97,    98,   337,   415,   470,   416,   417,    99,
     380,   381,   500,   273,   274,   167,   280,   452,   509,   100,
     267
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -482
static const yytype_int16 yypact[] =
{
    -482,    40,    42,  -482,   860,  2330,  2330,  2330,  2330,  2330,
    2330,  2330,  -482,  2330,  2330,  2330,  2330,  2330,  2330,  2330,
       1,     1,  2330,    28,   -65,   -61,  -482,  -482,    39,  -482,
    -482,  -482,  -482,  2330,  -482,   -44,    30,    35,  -482,    70,
    1214,  1322,  -482,   141,  1430,  -482,  2330,   -45,   120,   130,
     174,    74,   114,   118,   119,  -482,  -482,   123,   133,  -482,
    -482,  -482,  -482,  -482,  -482,  2330,  -482,  -482,   112,  -482,
    -482,  -482,  -482,  -482,  -482,  -482,  -482,  -482,   209,   211,
       2,   266,   270,  -482,  -482,   164,  -482,  -482,  -482,  2484,
    -482,   158,   685,   165,  -482,   193,  -482,   -36,  -482,    32,
    -482,  3040,  3040,  3063,  -482,  -482,   267,  -482,  2330,  -482,
    -482,  -482,  -482,  -482,  -482,  -482,   176,  -482,  -482,  -482,
    -482,   179,   180,  -482,  -482,   200,   -33,    32,  1538,  -482,
    -482,   252,  -482,     3,  3040,  1106,  -482,  2330,  2330,   191,
    2330,  -482,  2551,  -482,  2599,   293,   318,  -482,   194,  3040,
     486,   190,  2637,  -482,    24,     5,  -482,  -482,  -482,   321,
       6,     1,     1,     1,   196,  -482,  1637,   131,  2675,   197,
    2330,   115,    25,   220,  -482,   271,  -482,  2330,  2330,    62,
    2330,  -482,  2330,  2330,  2330,  2330,  2330,  2330,  2330,  2330,
    2330,  2330,  2330,  2330,  2330,  2330,  2330,  2330,  2330,  2330,
    2330,  2330,  2330,    28,  -482,  -482,  -482,  1736,  2330,  2330,
    2330,  2330,  2330,  2330,  2330,  2330,  2330,  2330,  2330,  -482,
    -482,  2330,  2330,   112,    31,  -482,    57,   203,  -482,   -33,
    -482,  2716,  2330,  -482,  1835,  2330,  -482,   258,  2330,   205,
     339,  3040,   259,   269,   281,  2754,  -482,  -482,  -482,   284,
     493,  -482,  -482,  -482,  -482,  2330,  -482,  -482,   -45,  -482,
     493,   285,  -482,    10,  -482,  -482,  -482,   216,   219,   221,
      58,     1,  2906,   223,   352,   -18,  -482,  -482,  2429,     1,
    -482,  -482,  -482,   983,   783,  -482,  -482,   294,  -482,   248,
     354,  1384,   809,   229,   230,   -33,    32,  3063,  2330,   809,
    1384,  1785,  1982,   975,  1098,  1098,  1098,  1098,  1593,  1593,
    1593,  1593,   647,   647,   224,   224,   224,   267,   267,   267,
    -482,   -37,  3063,  3063,  3063,  3063,  3063,  3063,  3063,  3063,
    3063,  3063,  3063,  3063,  1835,    68,  3040,   225,  1269,  -482,
    1835,  -482,    68,  -482,  2792,     1,   234,   362,    11,    67,
    3040,   236,  2830,  -482,  -482,  -482,  -482,   364,    13,  -482,
    -482,   493,   493,   240,   241,  -482,  -482,  -482,   239,  1485,
    -482,  -482,   370,     1,   243,  -482,  -482,  -482,   251,  -482,
      14,  -482,  -482,  -482,  1934,  -482,  2033,  -482,  -482,   324,
     330,  1692,   253,   280,  -482,  -482,  -482,  -482,  -482,  -482,
    -482,   302,   294,   297,   493,  -482,  -482,   -33,  3002,    28,
    -482,   300,  -482,  2330,  -482,  -482,   -17,  -482,  -482,  -482,
     301,  -482,  -482,  -482,  -482,  2132,  -482,  -482,  2330,  2330,
       1,    -2,   493,   372,  1106,    -9,   306,  -482,  -482,   493,
     344,  -482,   493,  -482,  -482,  -482,    58,   433,     1,  3040,
       1,  2944,   -34,  -482,  2330,  -482,  -482,   308,   294,   309,
     446,  -482,  -482,  -482,  1835,  1835,  -482,  -482,  -482,  1890,
    -482,   316,  2330,  2330,  -482,  -482,  1106,     1,    15,   100,
    2330,  1106,   315,  3040,   340,     1,   340,  -482,  -482,   448,
    -482,   322,   323,  -482,   -29,   342,   331,   467,   337,  -482,
      58,  -482,  2330,  -482,  -482,  2231,  -482,  -482,  -482,   335,
      20,   336,   446,  -482,   294,   201,   338,   343,  2330,   203,
    -482,  -482,  -482,   347,  2088,   366,  -482,  -482,  2868,  -482,
    -482,    -2,   346,  -482,   350,   493,  -482,   185,  -482,    93,
    -482,  -482,   355,   479,     0,   493,  -482,   493,  -482,  -482,
      16,  3063,     1,  3040,  -482,   369,  -482,   414,  -482,  -482,
    -482,  -482,  -482,  -482,  -482,  -482,  -482,  -482,  -482,   401,
     525,  -482,     7,  -482,  -482,  3086,  -482,  1835,   379,  -482,
    -482,    68,  -482,   450,   373,  2330,  -482,  -482,  -482,  -482,
     208,   376,  2330,    -6,   104,  -482,   383,    71,   454,   515,
    -482,   409,   294,  -482,  -482,  -482,  -482,   458,  -482,  -482,
    -482,   391,    68,  -482,  -482,  1106,  -482,  -482,   392,  1106,
    1106,   393,  -482,  2286,  -482,  -482,  -482,  -482,  -482,   144,
     520,   493,   493,  -482,   524,     8,   293,  -482,  -482,  -482,
    -482,  -482,  -482,  -482,  -482,  -482,   395,   468,   528,   493,
    -482,  -482,   470,   493,   472,  -482,   477,   316,  1106,  -482,
      98,  -482,   535,   493,  -482,   411,  -482,   539,  -482,  -482,
    -482,   107,   493,  -482,  -482,   493,   415,  -482,   416,  -482,
     -29,  -482,   424,   413,    22,  -482,  -482,  -482,  -482,   469,
     425,   428,  -482,   469,  -482,  -482,   294,  -482,  -482,   500,
     434,  -482,   431,  -482,   435,  -482
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -482,  -482,  -482,  -482,  -482,  -207,  -482,  -482,  -131,  -482,
    -482,  -482,  -482,  -482,  -482,  -482,  -482,  -482,  -482,  -482,
    -482,  -482,  -482,  -482,  -482,  -482,  -482,  -482,  -482,  -482,
    -482,  -482,  -482,  -116,  -482,  -482,  -482,   207,   298,   299,
     -51,  -482,  -482,  -482,  -482,  -482,  -482,  -482,  -482,  -482,
    -482,  -482,   128,   102,    61,  -482,  -482,  -273,  -482,  -482,
     -28,  -482,   -91,  -482,    -1,  -328,  -482,  -482,   345,  -482,
      85,  -482,  -482,  -482,  -482,  -482,  -482,  -482,  -482,    34,
    -482,  -481,  -482,  -420,  -482,  -482,  -482,  -482,    -7,  -482,
    -482,  -482,  -482,  -482,  -482,  -482,  -482,  -482,  -482,  -482,
     -23,  -194,  -482,  -482,  -482,  -482,  -482,  -482,    81,   -66,
     232,   111,  -482,  -482,   105,  -482,   215,   451,  -338,   218,
     305,  -482,  -482,  -482,  -482,  -482,   -50,  -482,  -147,  -482,
    -482,   -20,   -22,  -482,   136,  -337,  -482,  -482,  -482,   -21,
     110,   166,  -482,  -482,  -482,   173,  -482,  -482,  -482,  -482,
    -482
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -326
static const yytype_int16 yytable[] =
{
     122,   126,   127,   125,   237,   421,   411,   423,   482,   320,
     175,   235,   420,   258,   261,   175,   654,   491,   373,  -132,
     624,   433,   446,  -135,   446,   221,   409,   153,   221,   485,
     180,   598,   294,   116,   572,    30,   506,   148,   507,   508,
       3,   540,    -2,   388,   472,   181,   368,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   116,   203,
      30,   116,   599,    30,   128,  -133,   572,   224,   130,   339,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   221,   541,   116,   136,    30,   275,   121,   154,
      30,   389,   276,  -324,    30,   229,   222,    68,  -136,   222,
     503,  -118,   504,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   473,  -312,  -312,   116,    30,
      30,   242,   293,   492,    30,   625,   516,   517,   412,   527,
      30,   540,    68,   176,   236,    68,   259,   262,   610,   655,
     374,  -132,   395,   434,   447,  -135,   603,   295,   296,  -312,
    -312,   278,   279,   686,   687,   618,   255,   555,    68,   137,
    -325,   286,    68,   222,   138,   647,   223,   131,   132,   378,
     122,   126,   127,   125,   365,   592,   593,   275,   414,  -112,
    -112,  -112,   276,   541,   365,   414,   592,   593,  -110,  -110,
    -110,    68,    68,   275,   295,   296,    68,  -133,   276,   140,
     413,   146,    68,   161,   604,   467,   648,   205,   206,   539,
     101,   102,   103,   104,   105,   106,   107,   348,   109,   110,
     111,   112,   113,   114,   115,   157,   595,   120,   117,   119,
    -136,  -112,   171,   172,   614,   158,   159,   627,   134,   611,
    -110,   278,   279,   162,   170,   142,   144,   163,   164,   149,
     285,   152,   165,   590,   400,   594,   277,   278,   279,   200,
     201,   202,   166,   203,   407,   638,   591,   592,   593,   173,
     168,   174,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   177,   365,   365,   178,    43,   621,
     592,   593,   179,   490,   219,   559,   560,   561,   562,   563,
     564,   565,   220,   295,   296,   132,   203,  -264,   226,   228,
     295,   296,   233,   225,   248,   118,   118,   348,  -312,  -312,
     244,   250,   253,   348,   260,   251,   269,   287,   365,   351,
     282,   290,   340,   231,   566,   526,   353,   354,   355,   150,
     529,   357,   241,   149,   360,   245,   375,   372,   356,   376,
     386,   367,   377,   385,   399,   402,   365,   404,   405,   406,
     425,   367,   418,   365,   424,   426,   365,   432,   131,   461,
     439,   272,   440,   442,   444,   284,   122,   126,   127,   125,
     445,   454,   291,   292,   453,   297,   456,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   478,   457,
     458,   646,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   414,   461,   336,   338,   660,   462,
     468,   474,   489,   243,   498,   494,   502,   344,   511,   149,
     350,   513,   671,   352,   514,   521,   530,   348,   348,   257,
     531,   535,   545,   536,   538,   414,   265,   266,   268,   365,
     369,   546,   367,   367,   683,   547,   549,   556,   573,   365,
     690,   365,   554,   574,   639,   581,   587,   597,   641,   642,
     588,   558,   371,   391,   579,   596,   704,   608,   612,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,    43,   605,   408,   617,   367,   615,   622,   559,   560,
     561,   562,   563,   564,   565,   628,   630,   670,   631,   632,
     634,   637,   640,   649,   643,   361,   362,   653,   661,   349,
     662,   663,   665,   367,   667,  -312,  -312,   668,   672,   149,
     367,   674,   675,   367,   680,   149,   685,   606,   681,   295,
     296,    26,    27,   363,   684,   365,   365,   696,   695,   691,
     348,    32,   700,   703,   701,   379,   383,   697,   705,   633,
     443,   396,   397,   365,   392,   656,   512,   365,   534,   682,
     295,   296,   586,   437,   438,   644,   629,   365,   557,   449,
     576,   451,   548,   370,   609,   256,   365,   669,   523,   365,
     550,     0,   501,     0,     0,   364,    59,    60,    61,    62,
      63,  -160,     0,     0,     0,     0,   410,   252,   469,   559,
     560,   561,   562,   563,   564,     0,   463,     0,     0,   349,
     149,     0,     0,   241,   483,   349,   367,     0,     0,     0,
     383,     0,     0,     0,     0,     0,   367,     0,   367,     0,
       0,     0,     0,     0,   488,     0,     0,     0,     0,   510,
       0,   495,     0,   698,   499,     0,     0,     0,   265,   149,
     149,     0,     0,     0,     0,     0,     0,   336,   524,   197,
     198,   199,   200,   201,   202,   528,   203,     0,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
       0,     0,     0,     0,     0,     0,     0,   551,     0,     0,
     553,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     479,     0,     0,   575,     0,   484,   487,     0,     0,     0,
       0,     0,   367,   367,  -312,  -312,     0,     0,     0,     0,
       0,   379,     0,   383,     0,   383,     0,     0,     0,     0,
     367,     0,     0,     0,   367,     0,     0,   589,     0,   349,
     349,     0,     0,     0,   367,     0,     0,   600,     0,   601,
       0,     0,   383,   367,     0,     0,   367,     0,     0,     0,
     533,     0,   149,   180,     0,     0,     0,     0,     0,     0,
     241,     0,     0,     0,     0,   379,     0,   623,   181,     0,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,     0,   203,     0,     0,     0,   487,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   383,   203,     0,
       0,     0,     0,   650,   651,     0,     5,     6,     0,     0,
       0,     0,     7,     0,     0,     0,     0,     0,     0,     0,
       0,   664,   349,     0,     0,   666,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   673,     0,     0,     0,     0,
       0,     0,     8,     9,   677,     0,     0,   679,    10,     0,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,    22,    23,    24,    25,   398,     0,    26,    27,
      28,    29,    30,     0,    31,     0,     0,     0,    32,    33,
      34,    35,     0,    36,     0,    37,     0,    38,     0,     0,
      39,     0,     0,     0,    40,    41,    42,    43,    44,    45,
       0,    46,     0,    47,     0,     0,     0,    48,    49,    50,
       0,    51,    52,    53,    54,    55,    56,     0,     0,     0,
       0,    57,    58,    59,    60,    61,    62,    63,     0,     5,
       6,     0,     0,     0,    64,     7,     0,     0,     0,    65,
       0,    66,    67,     0,    68,    69,    70,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,     0,   203,     8,     9,     0,     0,     0,
       0,    10,     0,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,    22,    23,    24,    25,     0,
       0,    26,    27,    28,    29,    30,     0,    31,     0,     0,
       0,    32,    33,    34,    35,     0,    36,     0,    37,     0,
      38,     0,     0,    39,     0,     0,     0,    40,    41,    42,
      43,    44,    45,     0,    46,     0,    47,     0,     0,     0,
      48,    49,    50,     0,    51,    52,    53,   393,    55,    56,
       0,     0,     0,     0,    57,    58,    59,    60,    61,    62,
      63,     0,     5,     6,     0,     0,     0,    64,     7,     0,
       0,     0,    65,     0,    66,    67,     0,    68,    69,    70,
    -326,  -326,  -326,  -326,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,     0,   203,     8,     9,
       0,     0,     0,     0,    10,     0,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,    22,    23,
      24,    25,     0,     0,    26,    27,    28,    29,    30,     0,
      31,     0,     0,     0,    32,    33,    34,    35,     0,    36,
       0,    37,     0,    38,     0,     0,    39,     0,     0,     0,
      40,    41,     0,    43,    44,    45,     0,    46,     0,    47,
       0,     0,     0,     0,     0,    50,     0,    51,    52,    53,
       5,     6,     0,     0,     0,     0,     7,    57,    58,    59,
      60,    61,    62,    63,     0,     0,     0,     0,     0,     0,
      64,     0,     0,     0,     0,    65,     0,    66,    67,     0,
      68,    69,    70,     0,     0,     0,     8,     9,     0,     0,
       0,     0,    10,     0,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,    22,    23,    24,   180,
       0,     0,    26,    27,    28,    29,    30,     0,     0,     0,
       0,     0,    32,     0,   181,     0,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,     0,   203,     0,
       0,     0,     0,     0,     0,     0,    52,    53,     5,     6,
       0,     0,     0,     0,     7,    57,    58,    59,    60,    61,
      62,    63,     0,     0,     0,     0,     0,     0,    64,     0,
       0,     0,     0,    65,     0,   141,     0,     0,    68,    69,
      70,     0,     0,     0,     8,     9,     0,     0,     0,     0,
      10,     0,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,    22,    23,    24,     0,     0,     0,
      26,    27,    28,    29,    30,     0,     0,     0,     0,     0,
      32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   419,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,     0,   203,    52,    53,     5,     6,     0,     0,
       0,     0,     7,    57,    58,    59,    60,    61,    62,    63,
       0,     0,     0,     0,     0,     0,    64,     0,     0,     0,
       0,    65,     0,   143,     0,     0,    68,    69,    70,     0,
       0,     0,     8,     9,     0,     0,     0,     0,    10,     0,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,    22,    23,    24,   180,     0,     0,    26,    27,
      28,    29,    30,     0,     0,     0,     0,     0,    32,     0,
     181,     0,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,     0,   203,     0,     0,     0,     0,     0,
       0,     0,    52,    53,     5,     6,     0,     0,     0,     0,
       7,    57,    58,    59,    60,    61,    62,    63,     0,     0,
       0,     0,     0,     0,    64,     0,     0,     0,     0,    65,
       0,   147,     0,     0,    68,    69,    70,     0,     0,     0,
       8,     9,     0,     0,     0,     0,    10,     0,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
      22,    23,    24,     0,     0,     0,    26,    27,    28,    29,
      30,     0,     0,     0,     0,     0,    32,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   441,  -326,
    -326,  -326,  -326,   195,   196,   197,   198,   199,   200,   201,
     202,     0,   203,     5,     6,     0,     0,     0,     0,     7,
      52,    53,     0,     0,     0,     0,     0,     0,     0,    57,
      58,    59,    60,    61,    62,    63,     0,     0,   271,     0,
       0,     0,    64,     0,     0,     0,     0,    65,   230,     8,
       9,     0,    68,    69,    70,    10,     0,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,    22,
      23,    24,   180,     0,     0,    26,    27,    28,    29,    30,
       0,     0,     0,     0,     0,    32,     0,   181,     0,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
       0,   203,     5,     6,     0,     0,     0,     0,     7,    52,
      53,     0,     0,     0,     0,     0,     0,     0,    57,    58,
      59,    60,    61,    62,    63,     0,     0,   321,     0,     0,
       0,    64,     0,     0,     0,     0,    65,     0,     8,     9,
       0,    68,    69,    70,    10,     0,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,    22,    23,
      24,     0,     0,     0,    26,    27,    28,    29,    30,     0,
       0,     0,     0,     0,    32,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,     0,   203,   455,     0,     0,     0,     0,
       0,     5,     6,     0,     0,     0,     0,     7,    52,    53,
       0,     0,     0,     0,     0,     0,     0,    57,    58,    59,
      60,    61,    62,    63,     0,     0,   345,     0,     0,     0,
      64,     0,     0,     0,     0,    65,     0,     8,     9,     0,
      68,    69,    70,    10,     0,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,    22,    23,    24,
     180,     0,     0,    26,    27,    28,    29,    30,     0,     0,
       0,     0,     0,    32,     0,   181,     0,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,     0,   203,
       5,     6,     0,     0,     0,     0,     7,    52,    53,     0,
       0,     0,     0,     0,     0,     0,    57,    58,    59,    60,
      61,    62,    63,     0,     0,   448,     0,     0,     0,    64,
       0,     0,     0,     0,    65,     0,     8,     9,     0,    68,
      69,    70,    10,     0,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,    22,    23,    24,     0,
       0,     0,    26,    27,    28,    29,    30,     0,     0,     0,
       0,     0,    32,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
       0,   203,     0,   520,     0,     0,     0,     0,     0,     5,
       6,     0,     0,     0,     0,     7,    52,    53,     0,     0,
       0,     0,     0,     0,     0,    57,    58,    59,    60,    61,
      62,    63,     0,     0,   450,     0,     0,     0,    64,     0,
       0,     0,     0,    65,     0,     8,     9,     0,    68,    69,
      70,    10,     0,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,    22,    23,    24,   180,     0,
       0,    26,    27,    28,    29,    30,     0,     0,     0,     0,
       0,    32,     0,   181,     0,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,     0,   203,     5,     6,
       0,     0,     0,     0,     7,    52,    53,     0,     0,     0,
       0,     0,     0,     0,    57,    58,    59,    60,    61,    62,
      63,     0,     0,   477,     0,     0,     0,    64,     0,     0,
       0,     0,    65,     0,     8,     9,     0,    68,    69,    70,
      10,     0,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,    22,    23,    24,     0,     0,     0,
      26,    27,    28,    29,    30,     0,     0,     0,     0,     0,
      32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   580,     0,     0,     0,     0,     0,     5,     6,     0,
       0,     0,     0,     7,    52,    53,     0,     0,     0,     0,
       0,     0,     0,    57,    58,    59,    60,    61,    62,    63,
       0,     0,   552,     0,     0,     0,    64,     0,     0,     0,
       0,    65,     0,     8,     9,     0,    68,    69,    70,    10,
       0,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,    22,    23,    24,   180,     0,     0,    26,
      27,    28,    29,    30,     0,     0,     0,     0,     0,    32,
       0,   181,   624,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,     0,   203,     5,     6,     0,     0,
       0,     0,     7,    52,    53,     0,     0,     0,     0,     0,
       0,     0,    57,    58,    59,    60,    61,    62,    63,     0,
       0,     0,     0,     0,     0,    64,     0,     0,     0,     0,
      65,     0,     8,     9,     0,    68,    69,    70,    10,     0,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,    22,    23,    24,     0,     0,     0,    26,    27,
      28,    29,    30,     0,     0,     0,     0,     0,    32,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   625,     0,     0,
       0,     0,     0,     0,     0,     5,     6,     0,     0,     0,
       0,     7,    52,    53,     0,     0,     0,     0,     0,     0,
       0,    57,    58,    59,    60,    61,    62,    63,     0,     0,
       0,     0,     0,     0,    64,     0,     0,     0,     0,    65,
       0,     8,     9,     0,    68,    69,    70,    10,     0,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,    22,    23,    24,   180,     0,     0,    26,    27,    28,
     390,    30,     0,     0,     0,     0,     0,    32,     0,   181,
       0,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,     0,   203,     0,     0,     0,     0,     0,     0,
       0,    52,    53,     0,     0,     0,     0,     0,     0,     0,
      57,    58,    59,    60,    61,    62,    63,     0,     0,     0,
       0,   180,     0,    64,     0,     0,     0,     0,    65,     0,
       0,     0,     0,    68,    69,    70,   181,     0,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,     0,
     203,     0,     0,     0,     0,     0,     0,     0,     0,   180,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   181,   204,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   180,   203,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   181,     0,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   180,   203,     0,     0,     0,
       0,     0,   246,     0,     0,     0,     0,     0,     0,     0,
     181,     0,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,     0,   203,     0,   180,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     247,   181,     0,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   180,   203,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   254,   181,
       0,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   180,   203,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   281,     0,   181,     0,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     180,   203,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   181,   343,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   180,   203,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   181,   359,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   180,   203,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   181,   422,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   180,   203,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   181,
     427,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,     0,   203,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   584,     0,
       0,     0,   180,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   384,   181,   466,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     180,   203,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   505,   181,     0,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   181,   203,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,     0,   203,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,     0,   203
};

static const yytype_int16 yycheck[] =
{
      23,    23,    23,    23,   135,   342,   334,   345,   428,   203,
       8,     8,   340,     8,     8,     8,     8,    26,     8,     8,
      26,     8,     8,     8,     8,    61,    63,    72,    61,    31,
      10,    31,   179,    70,   515,    72,    70,    44,    72,    73,
       0,    70,     0,    61,    61,    25,   253,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    70,    49,
      72,    70,    72,    72,   139,     8,   557,    99,   139,   226,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    61,   122,    70,   139,    72,    72,    70,   144,
      72,   119,    77,   139,    72,   127,   142,   144,     8,   142,
     448,   140,   450,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,   142,    59,    60,    70,    72,
      72,   138,    70,   142,    72,   141,   464,   465,    70,   477,
      72,    70,   144,   141,   141,   144,   141,   141,   141,   141,
     140,   140,   283,   140,   140,   140,   140,   179,   179,    59,
      60,   136,   137,   141,   142,   585,   142,   147,   144,   139,
     139,   146,   144,   142,   139,    31,   144,   138,   139,   121,
     203,   203,   203,   203,   250,    92,    93,    72,   335,    91,
      92,    93,    77,   122,   260,   342,    92,    93,    91,    92,
      93,   144,   144,    72,   226,   226,   144,   140,    77,   139,
     142,    70,   144,   139,   552,   409,    72,    59,    60,   492,
       5,     6,     7,     8,     9,    10,    11,   234,    13,    14,
      15,    16,    17,    18,    19,   115,   143,    22,    20,    21,
     140,   143,    69,    70,   581,   115,    72,   143,    33,   577,
     143,   136,   137,   139,   142,    40,    41,   139,   139,    44,
     145,    46,   139,   536,   287,   538,   135,   136,   137,    45,
      46,    47,   139,    49,   296,   612,    91,    92,    93,    70,
      65,    70,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    28,   361,   362,    27,    97,    91,
      92,    93,   138,   434,   139,   104,   105,   106,   107,   108,
     109,   110,   119,   335,   335,   139,    49,   138,   138,   119,
     342,   342,    70,   108,    31,    20,    21,   334,    59,    60,
     139,    13,   142,   340,    13,   141,   140,   117,   404,    81,
     143,    70,   139,   128,   143,   476,   141,     8,    89,    44,
     481,    70,   137,   138,    70,   140,   140,    72,    89,   140,
       8,   250,   141,   140,    70,   117,   432,    13,   139,   139,
       8,   260,   147,   439,   140,   139,   442,    13,   138,   402,
     139,   166,   143,    13,   141,   170,   409,   409,   409,   409,
     139,    61,   177,   178,    70,   180,   143,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   425,   139,
     118,   628,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   581,   458,   221,   222,   645,   142,
     140,   140,    70,   138,   100,   139,    13,   232,   140,   234,
     235,   142,   659,   238,     8,   139,   141,   464,   465,   154,
     120,    13,   120,   141,   141,   612,   161,   162,   163,   535,
     255,   140,   361,   362,   681,     8,   139,   141,   140,   545,
     687,   547,   147,   140,   615,   119,   140,     8,   619,   620,
     140,   514,   260,   278,   147,   140,   703,    96,   119,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    97,   143,   298,   141,   404,    66,   141,   104,   105,
     106,   107,   108,   109,   110,   142,    72,   658,    13,   120,
      72,   140,   140,    13,   141,    42,    43,    13,   143,   234,
      72,    13,    72,   432,    72,    59,    60,    70,    13,   334,
     439,   140,    13,   442,   139,   340,   143,   143,   142,   581,
     581,    68,    69,    70,   140,   631,   632,   139,   143,   100,
     577,    78,    72,   142,   140,   270,   271,   693,   143,   602,
     373,   283,   283,   649,   279,   636,   458,   653,   486,   680,
     612,   612,   531,   361,   362,   623,   597,   663,   513,   384,
     519,   386,   497,   258,   570,   154,   672,   657,   472,   675,
     500,    -1,   446,    -1,    -1,   122,   123,   124,   125,   126,
     127,    96,    -1,    -1,    -1,    -1,   321,   141,   413,   104,
     105,   106,   107,   108,   109,    -1,   404,    -1,    -1,   334,
     425,    -1,    -1,   428,   429,   340,   535,    -1,    -1,    -1,
     345,    -1,    -1,    -1,    -1,    -1,   545,    -1,   547,    -1,
      -1,    -1,    -1,    -1,   432,    -1,    -1,    -1,    -1,   454,
      -1,   439,    -1,   696,   442,    -1,    -1,    -1,   373,   464,
     465,    -1,    -1,    -1,    -1,    -1,    -1,   472,   473,    42,
      43,    44,    45,    46,    47,   480,    49,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   502,    -1,    -1,
     505,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     425,    -1,    -1,   518,    -1,   430,   431,    -1,    -1,    -1,
      -1,    -1,   631,   632,    59,    60,    -1,    -1,    -1,    -1,
      -1,   446,    -1,   448,    -1,   450,    -1,    -1,    -1,    -1,
     649,    -1,    -1,    -1,   653,    -1,    -1,   535,    -1,   464,
     465,    -1,    -1,    -1,   663,    -1,    -1,   545,    -1,   547,
      -1,    -1,   477,   672,    -1,    -1,   675,    -1,    -1,    -1,
     485,    -1,   577,    10,    -1,    -1,    -1,    -1,    -1,    -1,
     585,    -1,    -1,    -1,    -1,   500,    -1,   592,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,   531,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,   552,    49,    -1,
      -1,    -1,    -1,   631,   632,    -1,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   649,   577,    -1,    -1,   653,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   663,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,   672,    -1,    -1,   675,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    64,    65,   143,    -1,    68,    69,
      70,    71,    72,    -1,    74,    -1,    -1,    -1,    78,    79,
      80,    81,    -1,    83,    -1,    85,    -1,    87,    -1,    -1,
      90,    -1,    -1,    -1,    94,    95,    96,    97,    98,    99,
      -1,   101,    -1,   103,    -1,    -1,    -1,   107,   108,   109,
      -1,   111,   112,   113,   114,   115,   116,    -1,    -1,    -1,
      -1,   121,   122,   123,   124,   125,   126,   127,    -1,     6,
       7,    -1,    -1,    -1,   134,    12,    -1,    -1,    -1,   139,
      -1,   141,   142,    -1,   144,   145,   146,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,    65,    -1,
      -1,    68,    69,    70,    71,    72,    -1,    74,    -1,    -1,
      -1,    78,    79,    80,    81,    -1,    83,    -1,    85,    -1,
      87,    -1,    -1,    90,    -1,    -1,    -1,    94,    95,    96,
      97,    98,    99,    -1,   101,    -1,   103,    -1,    -1,    -1,
     107,   108,   109,    -1,   111,   112,   113,   114,   115,   116,
      -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,   126,
     127,    -1,     6,     7,    -1,    -1,    -1,   134,    12,    -1,
      -1,    -1,   139,    -1,   141,   142,    -1,   144,   145,   146,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    -1,    -1,    68,    69,    70,    71,    72,    -1,
      74,    -1,    -1,    -1,    78,    79,    80,    81,    -1,    83,
      -1,    85,    -1,    87,    -1,    -1,    90,    -1,    -1,    -1,
      94,    95,    -1,    97,    98,    99,    -1,   101,    -1,   103,
      -1,    -1,    -1,    -1,    -1,   109,    -1,   111,   112,   113,
       6,     7,    -1,    -1,    -1,    -1,    12,   121,   122,   123,
     124,   125,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,
     134,    -1,    -1,    -1,    -1,   139,    -1,   141,   142,    -1,
     144,   145,   146,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    64,    10,
      -1,    -1,    68,    69,    70,    71,    72,    -1,    -1,    -1,
      -1,    -1,    78,    -1,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   113,     6,     7,
      -1,    -1,    -1,    -1,    12,   121,   122,   123,   124,   125,
     126,   127,    -1,    -1,    -1,    -1,    -1,    -1,   134,    -1,
      -1,    -1,    -1,   139,    -1,   141,    -1,    -1,   144,   145,
     146,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    64,    -1,    -1,    -1,
      68,    69,    70,    71,    72,    -1,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   143,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,   112,   113,     6,     7,    -1,    -1,
      -1,    -1,    12,   121,   122,   123,   124,   125,   126,   127,
      -1,    -1,    -1,    -1,    -1,    -1,   134,    -1,    -1,    -1,
      -1,   139,    -1,   141,    -1,    -1,   144,   145,   146,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    64,    10,    -1,    -1,    68,    69,
      70,    71,    72,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,   113,     6,     7,    -1,    -1,    -1,    -1,
      12,   121,   122,   123,   124,   125,   126,   127,    -1,    -1,
      -1,    -1,    -1,    -1,   134,    -1,    -1,    -1,    -1,   139,
      -1,   141,    -1,    -1,   144,   145,   146,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    64,    -1,    -1,    -1,    68,    69,    70,    71,
      72,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     6,     7,    -1,    -1,    -1,    -1,    12,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,
     122,   123,   124,   125,   126,   127,    -1,    -1,    31,    -1,
      -1,    -1,   134,    -1,    -1,    -1,    -1,   139,   140,    42,
      43,    -1,   144,   145,   146,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    64,    10,    -1,    -1,    68,    69,    70,    71,    72,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     6,     7,    -1,    -1,    -1,    -1,    12,   112,
     113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,
     123,   124,   125,   126,   127,    -1,    -1,    31,    -1,    -1,
      -1,   134,    -1,    -1,    -1,    -1,   139,    -1,    42,    43,
      -1,   144,   145,   146,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    -1,    -1,    -1,    68,    69,    70,    71,    72,    -1,
      -1,    -1,    -1,    -1,    78,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,   143,    -1,    -1,    -1,    -1,
      -1,     6,     7,    -1,    -1,    -1,    -1,    12,   112,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,
     124,   125,   126,   127,    -1,    -1,    31,    -1,    -1,    -1,
     134,    -1,    -1,    -1,    -1,   139,    -1,    42,    43,    -1,
     144,   145,   146,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      10,    -1,    -1,    68,    69,    70,    71,    72,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       6,     7,    -1,    -1,    -1,    -1,    12,   112,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,
     125,   126,   127,    -1,    -1,    31,    -1,    -1,    -1,   134,
      -1,    -1,    -1,    -1,   139,    -1,    42,    43,    -1,   144,
     145,   146,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    64,    -1,
      -1,    -1,    68,    69,    70,    71,    72,    -1,    -1,    -1,
      -1,    -1,    78,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,   143,    -1,    -1,    -1,    -1,    -1,     6,
       7,    -1,    -1,    -1,    -1,    12,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,
     126,   127,    -1,    -1,    31,    -1,    -1,    -1,   134,    -1,
      -1,    -1,    -1,   139,    -1,    42,    43,    -1,   144,   145,
     146,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,    10,    -1,
      -1,    68,    69,    70,    71,    72,    -1,    -1,    -1,    -1,
      -1,    78,    -1,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     6,     7,
      -1,    -1,    -1,    -1,    12,   112,   113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,   126,
     127,    -1,    -1,    31,    -1,    -1,    -1,   134,    -1,    -1,
      -1,    -1,   139,    -1,    42,    43,    -1,   144,   145,   146,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    64,    -1,    -1,    -1,
      68,    69,    70,    71,    72,    -1,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   143,    -1,    -1,    -1,    -1,    -1,     6,     7,    -1,
      -1,    -1,    -1,    12,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   121,   122,   123,   124,   125,   126,   127,
      -1,    -1,    31,    -1,    -1,    -1,   134,    -1,    -1,    -1,
      -1,   139,    -1,    42,    43,    -1,   144,   145,   146,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    10,    -1,    -1,    68,
      69,    70,    71,    72,    -1,    -1,    -1,    -1,    -1,    78,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     6,     7,    -1,    -1,
      -1,    -1,    12,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   121,   122,   123,   124,   125,   126,   127,    -1,
      -1,    -1,    -1,    -1,    -1,   134,    -1,    -1,    -1,    -1,
     139,    -1,    42,    43,    -1,   144,   145,   146,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    64,    -1,    -1,    -1,    68,    69,
      70,    71,    72,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     6,     7,    -1,    -1,    -1,
      -1,    12,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   121,   122,   123,   124,   125,   126,   127,    -1,    -1,
      -1,    -1,    -1,    -1,   134,    -1,    -1,    -1,    -1,   139,
      -1,    42,    43,    -1,   144,   145,   146,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    10,    -1,    -1,    68,    69,    70,
      71,    72,    -1,    -1,    -1,    -1,    -1,    78,    -1,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     121,   122,   123,   124,   125,   126,   127,    -1,    -1,    -1,
      -1,    10,    -1,   134,    -1,    -1,    -1,    -1,   139,    -1,
      -1,    -1,    -1,   144,   145,   146,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   141,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    10,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    10,    49,    -1,    -1,    -1,
      -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    10,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    10,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   140,    -1,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      10,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,   140,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    10,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   140,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    10,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   140,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    10,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
     140,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,    -1,
      -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   120,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      10,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   120,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    25,    49,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   149,   150,     0,   151,     6,     7,    12,    42,    43,
      48,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    62,    63,    64,    65,    68,    69,    70,    71,
      72,    74,    78,    79,    80,    81,    83,    85,    87,    90,
      94,    95,    96,    97,    98,    99,   101,   103,   107,   108,
     109,   111,   112,   113,   114,   115,   116,   121,   122,   123,
     124,   125,   126,   127,   134,   139,   141,   142,   144,   145,
     146,   152,   156,   157,   186,   187,   189,   192,   195,   197,
     229,   234,   235,   236,   243,   248,   257,   259,   260,   264,
     265,   267,   268,   276,   277,   278,   279,   280,   281,   287,
     297,   264,   264,   264,   264,   264,   264,   264,   242,   264,
     264,   264,   264,   264,   264,   264,    70,   267,   268,   267,
     264,    70,   248,   249,   250,   279,   280,   287,   139,   255,
     139,   138,   139,   230,   264,   163,   139,   139,   139,   173,
     139,   141,   264,   141,   264,   190,    70,   141,   236,   264,
     268,   174,   264,    72,   144,   215,   216,   115,   115,    72,
     217,   139,   139,   139,   139,   139,   139,   293,   264,   153,
     142,   293,   293,    70,    70,     8,   141,    28,    27,   138,
      10,    25,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    49,   141,    59,    60,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,   139,
     119,    61,   142,   144,   280,   264,   138,   239,   119,   280,
     140,   264,   158,    70,   244,     8,   141,   156,   161,   231,
     232,   264,   236,   268,   139,   264,   141,   141,    31,   188,
      13,   141,   141,   142,   141,   142,   265,   268,     8,   141,
      13,     8,   141,   184,   185,   268,   268,   298,   268,   140,
     237,    31,   264,   291,   292,    72,    77,   135,   136,   137,
     294,   140,   143,   154,   264,   145,   146,   117,   196,   194,
      70,   264,   264,    70,   276,   280,   287,   264,   240,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     249,    31,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   247,   269,   264,   282,   264,   276,
     139,   256,   251,   140,   264,    31,   213,   214,   236,   268,
     264,    81,   264,   141,     8,    89,    89,    70,   203,   140,
      70,    42,    43,    70,   122,   257,   258,   259,   153,   264,
     216,   258,    72,     8,   140,   140,   140,   141,   121,   268,
     288,   289,   266,   268,   120,   140,     8,   262,    61,   119,
      71,   264,   268,   114,   155,   156,   186,   187,   143,    70,
     248,   193,   117,   198,    13,   139,   139,   280,   264,    63,
     268,   213,    70,   142,   276,   283,   285,   286,   147,   143,
     213,   283,   140,   266,   140,     8,   139,   140,   165,   233,
     171,   169,    13,     8,   140,   168,   191,   258,   258,   139,
     143,   143,    13,   185,   141,   139,     8,   140,    31,   264,
      31,   264,   295,    70,    61,   143,   143,   139,   118,   199,
     200,   248,   142,   258,   245,   246,    26,   249,   140,   264,
     284,   270,    61,   142,   140,   252,   159,    31,   236,   268,
     164,   162,   231,   264,   268,    31,   202,   268,   258,    70,
     156,    26,   142,   204,   139,   258,   261,   263,   100,   258,
     290,   289,    13,   266,   266,   120,    70,    72,    73,   296,
     264,   140,   200,   142,     8,   218,   213,   213,   241,   238,
     143,   139,   274,   282,   264,   253,   156,   266,   264,   156,
     141,   120,   201,   268,   201,    13,   141,   205,   141,   205,
      70,   122,   210,   211,   212,   120,   140,     8,   262,   139,
     288,   264,    31,   264,   147,   147,   141,   218,   248,   104,
     105,   106,   107,   108,   109,   110,   143,   219,   224,   225,
     226,   227,   229,   140,   140,   264,   256,   275,   271,   147,
     143,   119,   254,   160,   140,   166,   202,   140,   140,   258,
     205,    91,    92,    93,   205,   143,   140,     8,    31,    72,
     258,   258,   175,   140,   266,   143,   143,   220,    96,   227,
     141,   213,   119,   272,   283,    66,   209,   141,   231,   172,
     170,    91,   141,   264,    26,   141,   208,   143,   142,   212,
      72,    13,   120,   248,    72,   228,   221,   140,   283,   156,
     140,   156,   156,   141,   208,   207,   153,    31,    72,    13,
     258,   258,   176,    13,     8,   141,   188,   273,   167,   206,
     153,   143,    72,    13,   258,    72,   258,    72,    70,   274,
     156,   153,    13,   258,   140,    13,   222,   258,   177,   258,
     139,   142,   210,   153,   140,   143,   141,   142,   223,   178,
     153,   100,   179,   180,   181,   143,   139,   181,   248,   182,
      72,   140,   183,   142,   153,   143
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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





/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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

/* Line 1455 of yacc.c  */
#line 152 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 152 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { HANDLE_INTERACTIVE(); }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 159 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_early_binding(TSRMLS_C); }
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 160 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_early_binding(TSRMLS_C); }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 161 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_halt_compiler_register(TSRMLS_C); YYACCEPT; }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 166 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 166 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { HANDLE_INTERACTIVE(); }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 175 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_error(E_COMPILE_ERROR, "__HALT_COMPILER() can only be used from the outermost scope"); }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 180 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_ticks(TSRMLS_C); }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 185 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyvsp[(1) - (2)]).u.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 185 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(1) - (5)]) TSRMLS_CC); }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 185 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(1) - (7)]), 1 TSRMLS_CC); }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 185 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_if_end(&(yyvsp[(1) - (9)]) TSRMLS_C); }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 186 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyvsp[(1) - (2)]).u.opline_num = get_next_op_number(CG(active_op_array));  }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 186 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_while_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(1) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 186 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_while_end(&(yyvsp[(1) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 187 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyvsp[(1) - (1)]).u.opline_num = get_next_op_number(CG(active_op_array));  zend_do_do_while_begin(TSRMLS_C); }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 187 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyvsp[(5) - (5)]).u.save.val1 = get_next_op_number(CG(active_op_array)); }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 187 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_do_while_end(&(yyvsp[(1) - (9)]), &(yyvsp[(5) - (9)]), &(yyvsp[(7) - (9)]) TSRMLS_CC); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 191 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(3) - (4)]) TSRMLS_CC); (yyvsp[(4) - (4)]).u.save.val1 = get_next_op_number(CG(active_op_array)); printf("saving into %d\n", get_next_op_number(CG(active_op_array))); }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 193 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); zend_do_for_cond(&(yyvsp[(6) - (7)]), &(yyvsp[(4) - (7)]) TSRMLS_CC); (yyvsp[(7) - (7)]).u.save.val1 = get_next_op_number(CG(active_op_array)); }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 195 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(9) - (10)]) TSRMLS_CC); (yyvsp[(7) - (10)]).u.save.val2 = get_next_op_number(CG(active_op_array)); zend_do_for_before_statement(TSRMLS_CC); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 196 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_for_end(&(yyvsp[(7) - (12)]), &(yyvsp[(4) - (12)]) TSRMLS_CC); }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 197 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_switch_cond(&(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 197 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_switch_end(&(yyvsp[(6) - (6)]) TSRMLS_CC); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 198 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_BRK, NULL TSRMLS_CC); }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 199 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_BRK, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 200 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_CONT, NULL TSRMLS_CC); }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 201 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_CONT, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 202 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_return(NULL, 0 TSRMLS_CC); }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 203 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_return(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 204 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_return(&(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 209 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 210 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 213 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 214 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 215 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 217 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 218 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(6) - (8)])); zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 219 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 220 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyvsp[(1) - (1)]).u.opline_num = get_next_op_number(CG(active_op_array)); zend_do_declare_begin(TSRMLS_C); }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 220 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_declare_end(&(yyvsp[(1) - (6)]) TSRMLS_CC); }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 222 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_try(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 223 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_initialize_try_catch_element(&(yyvsp[(1) - (7)]) TSRMLS_CC); }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 224 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_first_catch(&(yyvsp[(7) - (9)]) TSRMLS_CC); }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 225 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_begin_catch(&(yyvsp[(1) - (12)]), &(yyvsp[(9) - (12)]), &(yyvsp[(11) - (12)]), 1 TSRMLS_CC); }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 226 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_end_catch(&(yyvsp[(1) - (16)]) TSRMLS_CC); }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 227 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_mark_last_catch(&(yyvsp[(7) - (18)]), &(yyvsp[(18) - (18)]) TSRMLS_CC); }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 228 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_throw(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 233 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 234 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval).u.opline_num = -1; }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 238 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 239 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 244 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval).u.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 244 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_begin_catch(&(yyvsp[(1) - (6)]), &(yyvsp[(3) - (6)]), &(yyvsp[(5) - (6)]), 0 TSRMLS_CC); }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 244 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_end_catch(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 254 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(BP_VAR_UNSET, 0 TSRMLS_CC); zend_do_unset(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 258 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_ticks(TSRMLS_C); }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 262 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_ticks(TSRMLS_C); }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 267 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval).op_type = ZEND_RETURN_VAL; }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 268 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval).op_type = ZEND_RETURN_REF; }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 273 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyvsp[(1) - (1)]).u.opline_num = CG(zend_lineno); }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 273 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_begin_function_declaration(&(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), 0, (yyvsp[(3) - (4)]).op_type, NULL TSRMLS_CC); }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 274 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_end_function_declaration(&(yyvsp[(1) - (11)]) TSRMLS_CC); }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 279 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_begin_class_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 283 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_end_class_declaration(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]) TSRMLS_CC); }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 285 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_begin_class_declaration(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]), NULL TSRMLS_CC); }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 289 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_end_class_declaration(&(yyvsp[(1) - (7)]), &(yyvsp[(2) - (7)]) TSRMLS_CC); }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 294 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval).u.opline_num = CG(zend_lineno); (yyval).u.EA.type = 0; }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 295 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval).u.opline_num = CG(zend_lineno); (yyval).u.EA.type = ZEND_ACC_EXPLICIT_ABSTRACT_CLASS; }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 296 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval).u.opline_num = CG(zend_lineno); (yyval).u.EA.type = ZEND_ACC_FINAL_CLASS; }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 300 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 301 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 305 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval).u.opline_num = CG(zend_lineno); (yyval).u.EA.type = ZEND_ACC_INTERFACE; }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 319 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_implements_interface(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 320 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_implements_interface(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 324 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 325 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 330 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (1)])); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 331 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(2) - (2)])); (yyval) = (yyvsp[(2) - (2)]);  (yyval).u.EA.type |= ZEND_PARSED_REFERENCE_VARIABLE; }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 336 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_declare_stmt(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 337 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_declare_stmt(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 342 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 343 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 344 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (4)]); }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 345 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (5)]); }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 350 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 351 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C);  zend_do_case_before_statement(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 351 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (6)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 352 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C);  zend_do_default_before_statement(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 352 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (5)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 376 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(2) - (2)]), 0 TSRMLS_CC); (yyval).op_type = IS_CONST; Z_LVAL((yyval).u.constant)=1; Z_TYPE((yyval).u.constant)=IS_LONG; INIT_PZVAL(&(yyval).u.constant); zend_do_receive_arg(ZEND_RECV, &tmp, &(yyval), NULL, &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]), 0 TSRMLS_CC); }
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 377 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); (yyval).op_type = IS_CONST; Z_LVAL((yyval).u.constant)=1; Z_TYPE((yyval).u.constant)=IS_LONG; INIT_PZVAL(&(yyval).u.constant); zend_do_receive_arg(ZEND_RECV, &tmp, &(yyval), NULL, &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 1 TSRMLS_CC); }
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 378 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(3) - (5)]), 0 TSRMLS_CC); (yyval).op_type = IS_CONST; Z_LVAL((yyval).u.constant)=1; Z_TYPE((yyval).u.constant)=IS_LONG; INIT_PZVAL(&(yyval).u.constant); zend_do_receive_arg(ZEND_RECV_INIT, &tmp, &(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(1) - (5)]), &(yyvsp[(3) - (5)]), 1 TSRMLS_CC); }
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 379 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(2) - (4)]), 0 TSRMLS_CC); (yyval).op_type = IS_CONST; Z_LVAL((yyval).u.constant)=1; Z_TYPE((yyval).u.constant)=IS_LONG; INIT_PZVAL(&(yyval).u.constant); zend_do_receive_arg(ZEND_RECV_INIT, &tmp, &(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), 0 TSRMLS_CC); }
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 380 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (4)]); Z_LVAL((yyval).u.constant)++; zend_do_receive_arg(ZEND_RECV, &tmp, &(yyval), NULL, &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); }
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 381 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(5) - (5)]), 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (5)]); Z_LVAL((yyval).u.constant)++; zend_do_receive_arg(ZEND_RECV, &tmp, &(yyval), NULL, &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), 1 TSRMLS_CC); }
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 382 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(5) - (7)]), 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (7)]); Z_LVAL((yyval).u.constant)++; zend_do_receive_arg(ZEND_RECV_INIT, &tmp, &(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(3) - (7)]), &(yyvsp[(5) - (7)]), 1 TSRMLS_CC); }
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 383 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(4) - (6)]), 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (6)]); Z_LVAL((yyval).u.constant)++; zend_do_receive_arg(ZEND_RECV_INIT, &tmp, &(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), &(yyvsp[(4) - (6)]), 0 TSRMLS_CC); }
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 388 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 389 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 390 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; Z_TYPE((yyval).u.constant)=IS_NULL;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 395 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 396 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0; }
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 401 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 402 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 403 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(2) - (2)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 404 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 405 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 406 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (4)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(4) - (4)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 410 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_fetch_global_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 411 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_fetch_global_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 416 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 417 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 418 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 423 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 424 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 425 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 426 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 437 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { CG(access_type) = Z_LVAL((yyvsp[(1) - (1)]).u.constant); }
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 439 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyvsp[(2) - (2)]).u.opline_num = CG(zend_lineno); }
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 439 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_begin_function_declaration(&(yyvsp[(2) - (5)]), &(yyvsp[(5) - (5)]), 1, (yyvsp[(4) - (5)]).op_type, &(yyvsp[(1) - (5)]) TSRMLS_CC); }
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 440 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_abstract_method(&(yyvsp[(5) - (10)]), &(yyvsp[(1) - (10)]), &(yyvsp[(10) - (10)]) TSRMLS_CC); zend_do_end_function_declaration(&(yyvsp[(2) - (10)]) TSRMLS_CC); }
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 445 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 446 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0;	}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 450 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 451 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 455 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 456 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]);  if (!(Z_LVAL((yyval).u.constant) & ZEND_ACC_PPP_MASK)) { Z_LVAL((yyval).u.constant) |= ZEND_ACC_PUBLIC; } }
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 460 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 461 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = zend_do_verify_access_types(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)])); }
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 465 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 466 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PROTECTED; }
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 467 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PRIVATE; }
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 468 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_STATIC; }
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 469 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 470 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_FINAL; }
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 474 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(3) - (3)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 475 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), CG(access_type) TSRMLS_CC); }
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 476 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(1) - (1)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 477 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), CG(access_type) TSRMLS_CC); }
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 481 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_declare_class_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 482 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_declare_class_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 486 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 487 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 492 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_CONST;  Z_TYPE((yyval).u.constant) = IS_BOOL;  Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 493 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 497 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 497 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 498 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 503 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_and(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 504 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_and_begin(); zend_do_and(&(yyvsp[(1) - (3)]) TSRMLS_CC); zend_do_and(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 509 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_or(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 510 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_or_begin(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); zend_do_or(&(yyvsp[(1) - (3)]) TSRMLS_CC); zend_do_or(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 514 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_list_init(TSRMLS_C); }
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 514 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_list_end(&(yyval), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 515 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_assign(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 516 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (4)])); zend_do_end_variable_parse(BP_VAR_W, 0 TSRMLS_CC); zend_do_end_variable_parse(BP_VAR_W, 0 TSRMLS_CC); zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 517 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_error(E_STRICT, "Assigning the return value of new by reference is deprecated");  zend_check_writable_variable(&(yyvsp[(1) - (5)])); zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 517 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_end_new_object(&(yyvsp[(3) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); zend_do_end_variable_parse(BP_VAR_W, 0 TSRMLS_CC); zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (7)]), &(yyvsp[(3) - (7)]) TSRMLS_CC); }
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 518 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 518 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_end_new_object(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 519 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_clone(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 520 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 521 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 522 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 523 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 524 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 525 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 526 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 527 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 528 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 529 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 530 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 531 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_INC TSRMLS_CC); }
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 532 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_INC TSRMLS_CC); }
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 533 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_DEC TSRMLS_CC); }
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 534 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_DEC TSRMLS_CC); }
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 535 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_or_end(&(yyval) TSRMLS_CC); }
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 536 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_and_end(&(yyval) TSRMLS_CC); }
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 537 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BOOL_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 538 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 539 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 540 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 541 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 542 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 543 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 544 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 545 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 546 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 547 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 548 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 549 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { Z_LVAL((yyvsp[(1) - (2)]).u.constant)=0; Z_TYPE((yyvsp[(1) - (2)]).u.constant)=IS_LONG; (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 550 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { Z_LVAL((yyvsp[(1) - (2)]).u.constant)=0; Z_TYPE((yyvsp[(1) - (2)]).u.constant)=IS_LONG; (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 551 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_unary_op(ZEND_BOOL_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 552 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_unary_op(ZEND_BW_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 553 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 554 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_NOT_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 555 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 556 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_NOT_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 557 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 558 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 559 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 560 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 561 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_instanceof(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 562 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 563 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_begin_qm_op(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 564 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_qm_true(&(yyvsp[(4) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 565 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_qm_false(&(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(2) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 566 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 567 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_LONG TSRMLS_CC); }
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 568 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_DOUBLE TSRMLS_CC); }
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 569 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_STRING TSRMLS_CC); }
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 570 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_ARRAY TSRMLS_CC); }
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 571 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_OBJECT TSRMLS_CC); }
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 572 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_BOOL TSRMLS_CC); }
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 573 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_NULL TSRMLS_CC); }
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 574 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_exit(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 575 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_begin_silence(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 575 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_end_silence(&(yyvsp[(1) - (3)]) TSRMLS_CC); (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 576 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 577 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 578 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_shell_exec(&(yyval), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 579 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_print(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 583 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyvsp[(2) - (2)]).u.opline_num = zend_do_begin_function_call(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 585 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(4) - (5)]), 0, (yyvsp[(2) - (5)]).u.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 586 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 588 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 589 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 591 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 592 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_dynamic_function_call(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 594 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(4) - (5)]), 0, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 598 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 602 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 603 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(BP_VAR_R, 0 TSRMLS_CC); zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 608 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 609 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_declare_implicit_property(TSRMLS_C); }
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 610 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).u.EA.type = ZEND_PARSED_MEMBER; }
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 611 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 622 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); zend_do_declare_implicit_property(TSRMLS_C); }
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 626 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 627 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 628 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 633 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=0; }
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 634 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 639 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 640 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 641 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 642 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 643 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 644 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 645 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 646 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 651 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 652 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_CT TSRMLS_CC); }
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 653 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 654 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zval minus_one;  Z_TYPE(minus_one) = IS_LONG; Z_LVAL(minus_one) = -1;  mul_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant, &minus_one TSRMLS_CC);  (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 655 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); Z_TYPE((yyval).u.constant) = IS_CONSTANT_ARRAY; }
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 656 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 660 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_CT TSRMLS_CC); }
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 664 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_CT TSRMLS_CC); }
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 665 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 666 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 667 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 668 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 669 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 674 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); }
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 675 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 684 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_add_static_array_element(&(yyval), &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)])); }
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 685 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(3) - (3)])); }
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 686 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)])); }
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 687 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(1) - (1)])); }
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 691 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 692 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 697 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(BP_VAR_R, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 702 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(BP_VAR_W, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 707 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 712 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 713 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 714 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).u.EA.type = (yyvsp[(1) - (7)]).u.EA.type | ((yyvsp[(7) - (7)]).u.EA.type ? (yyvsp[(7) - (7)]).u.EA.type : (yyvsp[(6) - (7)]).u.EA.type); }
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 715 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 719 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval).u.EA.type = (yyvsp[(2) - (2)]).u.EA.type; }
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 720 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval).u.EA.type = 0; }
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 725 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 725 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval).u.EA.type = (yyvsp[(4) - (4)]).u.EA.type; }
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 729 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_pop_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); zend_do_begin_method_call(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 731 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (4)]), &(yyval), &(yyvsp[(3) - (4)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);
			  zend_do_push_object(&(yyval) TSRMLS_CC); (yyval).u.EA.type = ZEND_PARSED_METHOD_CALL; }
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 733 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_declare_implicit_property(TSRMLS_C); (yyval).u.EA.type = ZEND_PARSED_MEMBER; }
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 737 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 738 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 742 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 747 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 748 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); (yyval) = (yyvsp[(1) - (1)]); (yyval).u.EA.type = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 753 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).u.EA.type = ZEND_PARSED_VARIABLE; }
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 754 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); (yyval).u.EA.type = ZEND_PARSED_VARIABLE; }
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 755 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).u.EA.type = ZEND_PARSED_STATIC_MEMBER; }
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 759 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 760 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 761 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 766 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 767 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 771 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 772 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 777 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 778 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 778 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (2)]) TSRMLS_CC);}
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 782 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 783 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 784 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (1)]) TSRMLS_CC);}
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 788 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 789 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 793 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 794 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)++; }
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 804 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_add_list_element(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 805 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_new_list_begin(TSRMLS_C); }
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 805 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_new_list_end(TSRMLS_C); }
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 806 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_add_list_element(NULL TSRMLS_CC); }
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 811 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_init_array(&(yyval), NULL, NULL, 0 TSRMLS_CC); }
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 812 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 816 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(3) - (5)]), 0 TSRMLS_CC); }
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 817 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(3) - (3)]), NULL, 0 TSRMLS_CC); }
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 818 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 819 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 820 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 1 TSRMLS_CC); }
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 821 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(4) - (4)]), NULL, 1 TSRMLS_CC); }
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 822 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 1 TSRMLS_CC); }
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 823 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 827 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(BP_VAR_R, 0 TSRMLS_CC);  zend_do_add_variable(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 828 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_add_string(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 829 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_init_string(&(yyval) TSRMLS_CC); }
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 835 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 836 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 836 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { fetch_array_begin(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 837 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyvsp[(2) - (3)]), &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); zend_do_fetch_property(&(yyval), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 838 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_simple_variable(&(yyval), &(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 839 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_array_begin(&(yyval), &(yyvsp[(2) - (6)]), &(yyvsp[(4) - (6)]) TSRMLS_CC); }
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 840 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 845 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 846 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 847 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 852 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 853 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_isset_or_isempty(ZEND_ISEMPTY, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 854 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_include(ZEND_INCLUDE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 855 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_include(ZEND_INCLUDE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 859 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"
    { zend_do_isset_or_isempty(ZEND_ISSET, &(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;



/* Line 1455 of yacc.c  */
#line 5239 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.c"
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
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
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



/* Line 1675 of yacc.c  */
#line 863 "/home/kenny/php/php-5.2.6/Zend/zend_language_parser.y"


/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * indent-tabs-mode: t
 * End:
 */

