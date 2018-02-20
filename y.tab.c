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
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_INT = 258,
     T_DOUBLE = 259,
     T_STRING = 260,
     T_TRIANGLE = 261,
     T_PIXMAP = 262,
     T_CIRCLE = 263,
     T_RECTANGLE = 264,
     T_TEXTBOX = 265,
     T_FORWARD = 266,
     T_INITIALIZATION = 267,
     T_TERMINATION = 268,
     T_TRUE = 269,
     T_FALSE = 270,
     T_TOUCHES = 271,
     T_NEAR = 272,
     T_ANIMATION = 273,
     T_IF = 274,
     T_FOR = 275,
     T_ELSE = 276,
     T_PRINT = 277,
     T_EXIT = 278,
     T_LPAREN = 279,
     T_RPAREN = 280,
     T_LBRACE = 281,
     T_RBRACE = 282,
     T_LBRACKET = 283,
     T_RBRACKET = 284,
     T_SEMIC = 285,
     T_COMMA = 286,
     T_PERIOD = 287,
     T_ASSIGN = 288,
     T_PLUS_ASSIGN = 289,
     T_MINUS_ASSIGN = 290,
     T_PLUS_PLUS = 291,
     T_MINUS_MINUS = 292,
     T_MULTIPLY = 293,
     T_DIVIDE = 294,
     T_MOD = 295,
     T_PLUS = 296,
     T_MINUS = 297,
     T_SIN = 298,
     T_COS = 299,
     T_TAN = 300,
     T_ASIN = 301,
     T_ACOS = 302,
     T_ATAN = 303,
     T_SQRT = 304,
     T_FLOOR = 305,
     T_ABS = 306,
     T_RANDOM = 307,
     T_LESS = 308,
     T_GREATER = 309,
     T_LESS_EQUAL = 310,
     T_GREATER_EQUAL = 311,
     T_EQUAL = 312,
     T_NOT_EQUAL = 313,
     T_AND = 314,
     T_OR = 315,
     T_NOT = 316,
     T_ON = 317,
     T_SPACE = 318,
     T_LEFTARROW = 319,
     T_RIGHTARROW = 320,
     T_UPARROW = 321,
     T_DOWNARROW = 322,
     T_LEFTMOUSE_DOWN = 323,
     T_MIDDLEMOUSE_DOWN = 324,
     T_RIGHTMOUSE_DOWN = 325,
     T_LEFTMOUSE_UP = 326,
     T_MIDDLEMOUSE_UP = 327,
     T_RIGHTMOUSE_UP = 328,
     T_MOUSE_MOVE = 329,
     T_MOUSE_DRAG = 330,
     T_F1 = 331,
     T_AKEY = 332,
     T_SKEY = 333,
     T_DKEY = 334,
     T_FKEY = 335,
     T_HKEY = 336,
     T_JKEY = 337,
     T_KKEY = 338,
     T_LKEY = 339,
     T_WKEY = 340,
     T_ZKEY = 341,
     T_ID = 342,
     T_INT_CONSTANT = 343,
     T_DOUBLE_CONSTANT = 344,
     T_STRING_CONSTANT = 345,
     T_ERROR = 346,
     UNARY_OPS = 347,
     IF_NO_ELSE = 348
   };
#endif
/* Tokens.  */
#define T_INT 258
#define T_DOUBLE 259
#define T_STRING 260
#define T_TRIANGLE 261
#define T_PIXMAP 262
#define T_CIRCLE 263
#define T_RECTANGLE 264
#define T_TEXTBOX 265
#define T_FORWARD 266
#define T_INITIALIZATION 267
#define T_TERMINATION 268
#define T_TRUE 269
#define T_FALSE 270
#define T_TOUCHES 271
#define T_NEAR 272
#define T_ANIMATION 273
#define T_IF 274
#define T_FOR 275
#define T_ELSE 276
#define T_PRINT 277
#define T_EXIT 278
#define T_LPAREN 279
#define T_RPAREN 280
#define T_LBRACE 281
#define T_RBRACE 282
#define T_LBRACKET 283
#define T_RBRACKET 284
#define T_SEMIC 285
#define T_COMMA 286
#define T_PERIOD 287
#define T_ASSIGN 288
#define T_PLUS_ASSIGN 289
#define T_MINUS_ASSIGN 290
#define T_PLUS_PLUS 291
#define T_MINUS_MINUS 292
#define T_MULTIPLY 293
#define T_DIVIDE 294
#define T_MOD 295
#define T_PLUS 296
#define T_MINUS 297
#define T_SIN 298
#define T_COS 299
#define T_TAN 300
#define T_ASIN 301
#define T_ACOS 302
#define T_ATAN 303
#define T_SQRT 304
#define T_FLOOR 305
#define T_ABS 306
#define T_RANDOM 307
#define T_LESS 308
#define T_GREATER 309
#define T_LESS_EQUAL 310
#define T_GREATER_EQUAL 311
#define T_EQUAL 312
#define T_NOT_EQUAL 313
#define T_AND 314
#define T_OR 315
#define T_NOT 316
#define T_ON 317
#define T_SPACE 318
#define T_LEFTARROW 319
#define T_RIGHTARROW 320
#define T_UPARROW 321
#define T_DOWNARROW 322
#define T_LEFTMOUSE_DOWN 323
#define T_MIDDLEMOUSE_DOWN 324
#define T_RIGHTMOUSE_DOWN 325
#define T_LEFTMOUSE_UP 326
#define T_MIDDLEMOUSE_UP 327
#define T_RIGHTMOUSE_UP 328
#define T_MOUSE_MOVE 329
#define T_MOUSE_DRAG 330
#define T_F1 331
#define T_AKEY 332
#define T_SKEY 333
#define T_DKEY 334
#define T_FKEY 335
#define T_HKEY 336
#define T_JKEY 337
#define T_KKEY 338
#define T_LKEY 339
#define T_WKEY 340
#define T_ZKEY 341
#define T_ID 342
#define T_INT_CONSTANT 343
#define T_DOUBLE_CONSTANT 344
#define T_STRING_CONSTANT 345
#define T_ERROR 346
#define UNARY_OPS 347
#define IF_NO_ELSE 348




/* Copy the first part of user declarations.  */
#line 1 "gpl.y"
  // bison syntax to indicate the start of the header
    // the header is copied directly into y.tab.c (the generated parser)

extern int yylex();               // this lexer function returns next token
extern int yyerror(const char *); // used to print errors
extern int line_count;            // current line in the input; from record.l

#include "error.h"      // class for printing errors (used by gpl)
#include "parser.h"
#include <iostream>
#include <string>
using namespace std;

// bison syntax to indicate the end of the header


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 36 "gpl.y"
{
 int            union_int;
 double         union_double;
 std::string    *union_string;  // MUST be a pointer to a string (this sucks!)
}
/* Line 193 of yacc.c.  */
#line 304 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 317 "y.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   480

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  128
/* YYNRULES -- Number of states.  */
#define YYNSTATES  226

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   348

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    11,    14,    17,    20,    24,
      30,    32,    34,    36,    39,    41,    47,    53,    55,    57,
      59,    61,    63,    65,    67,    71,    73,    77,    84,    87,
      89,    91,    93,    95,    97,   100,   103,   113,   116,   119,
     123,   125,   127,   129,   131,   133,   135,   137,   139,   141,
     143,   145,   147,   149,   151,   153,   155,   157,   159,   161,
     163,   165,   167,   169,   171,   175,   177,   183,   184,   185,
     188,   190,   192,   194,   197,   200,   203,   209,   217,   231,
     236,   241,   243,   245,   249,   253,   257,   260,   263,   265,
     270,   274,   281,   283,   287,   291,   295,   299,   303,   307,
     311,   315,   319,   323,   327,   331,   335,   338,   341,   346,
     350,   354,   358,   360,   362,   364,   366,   368,   370,   372,
     374,   376,   378,   380,   382,   384,   386,   388,   390
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      95,     0,    -1,    96,   107,    -1,    96,    97,    -1,   132,
      -1,    98,    30,    -1,   101,    30,    -1,   106,    30,    -1,
      99,    87,   100,    -1,    99,    87,    28,   129,    29,    -1,
       3,    -1,     4,    -1,     5,    -1,    33,   129,    -1,   132,
      -1,   102,    87,    24,   103,    25,    -1,   102,    87,    28,
     129,    29,    -1,     6,    -1,     7,    -1,     8,    -1,     9,
      -1,    10,    -1,   104,    -1,   132,    -1,   104,    31,   105,
      -1,   105,    -1,    87,    33,   129,    -1,    11,    18,    87,
      24,   112,    25,    -1,   107,   108,    -1,   132,    -1,   109,
      -1,   110,    -1,   111,    -1,   114,    -1,    12,   117,    -1,
      13,   117,    -1,    18,    87,    24,   113,    25,    26,   120,
      27,   119,    -1,   102,    87,    -1,   102,    87,    -1,    62,
     115,   117,    -1,    63,    -1,    66,    -1,    67,    -1,    64,
      -1,    65,    -1,    68,    -1,    69,    -1,    70,    -1,    71,
      -1,    72,    -1,    73,    -1,    74,    -1,    75,    -1,    77,
      -1,    78,    -1,    79,    -1,    80,    -1,    81,    -1,    82,
      -1,    83,    -1,    84,    -1,    85,    -1,    86,    -1,    76,
      -1,   118,   121,   119,    -1,   117,    -1,    26,   118,   120,
      27,   119,    -1,    -1,    -1,   120,   121,    -1,   132,    -1,
     122,    -1,   123,    -1,   127,    30,    -1,   124,    30,    -1,
     125,    30,    -1,    19,    24,   129,    25,   116,    -1,    19,
      24,   129,    25,   116,    21,   116,    -1,    20,    24,   118,
     126,   119,    30,   129,    30,   118,   126,   119,    25,   117,
      -1,    22,    24,   129,    25,    -1,    23,    24,   129,    25,
      -1,   127,    -1,   132,    -1,   128,    33,   129,    -1,   128,
      34,   129,    -1,   128,    35,   129,    -1,   128,    36,    -1,
     128,    37,    -1,    87,    -1,    87,    28,   129,    29,    -1,
      87,    32,    87,    -1,    87,    28,   129,    29,    32,    87,
      -1,   130,    -1,   129,    60,   129,    -1,   129,    59,   129,
      -1,   129,    55,   129,    -1,   129,    56,   129,    -1,   129,
      53,   129,    -1,   129,    54,   129,    -1,   129,    57,   129,
      -1,   129,    58,   129,    -1,   129,    41,   129,    -1,   129,
      42,   129,    -1,   129,    38,   129,    -1,   129,    39,   129,
      -1,   129,    40,   129,    -1,    42,   129,    -1,    61,   129,
      -1,   131,    24,   129,    25,    -1,   129,    17,   129,    -1,
     129,    16,   129,    -1,    24,   129,    25,    -1,   128,    -1,
      88,    -1,    14,    -1,    15,    -1,    89,    -1,    90,    -1,
      43,    -1,    44,    -1,    45,    -1,    46,    -1,    47,    -1,
      48,    -1,    49,    -1,    51,    -1,    50,    -1,    52,    -1,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   181,   181,   188,   192,   200,   205,   210,   219,   224,
     232,   233,   234,   239,   244,   248,   249,   254,   255,   256,
     257,   258,   263,   264,   269,   270,   275,   280,   285,   286,
     291,   292,   293,   294,   299,   304,   309,   314,   319,   324,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   357,   358,   363,   367,   372,   378,
     379,   384,   385,   386,   387,   388,   393,   394,   399,   404,
     409,   414,   415,   420,   421,   422,   423,   424,   429,   430,
     431,   432,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   460,   461,   462,   463,   464,   465,   466,   471,   472,
     473,   474,   475,   476,   477,   478,   479,   480,   484
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "\"int\"", "\"double\"", "\"string\"",
  "\"triangle\"", "\"pixmap\"", "\"circle\"", "\"rectangle\"",
  "\"textbox\"", "\"forward\"", "\"initialization\"", "\"termination\"",
  "\"true\"", "\"false\"", "\"touches\"", "\"near\"", "\"animation\"",
  "\"if\"", "\"for\"", "\"else\"", "\"print\"", "\"exit\"", "\"(\"",
  "\")\"", "\"{\"", "\"}\"", "\"[\"", "\"]\"", "\";\"", "\",\"", "\".\"",
  "\"=\"", "\"+=\"", "\"-=\"", "\"++\"", "\"--\"", "\"*\"", "\"/\"",
  "\"%\"", "\"+\"", "\"-\"", "\"sin\"", "\"cos\"", "\"tan\"", "\"asin\"",
  "\"acos\"", "\"atan\"", "\"sqrt\"", "\"floor\"", "\"abs\"", "\"random\"",
  "\"<\"", "\">\"", "\"<=\"", "\">=\"", "\"==\"", "\"!=\"", "\"&&\"",
  "\"||\"", "\"!\"", "\"on\"", "\"space\"", "\"leftarrow\"",
  "\"rightarrow\"", "\"uparrow\"", "\"downarrow\"", "\"leftmouse_down\"",
  "\"middlemouse_down\"", "\"rightmouse_down\"", "\"leftmouse_up\"",
  "\"middlemouse_up\"", "\"rightmouse_up\"", "\"mouse_move\"",
  "\"mouse_drag\"", "\"f1\"", "\"akey\"", "\"skey\"", "\"dkey\"",
  "\"fkey\"", "\"hkey\"", "\"jkey\"", "\"kkey\"", "\"lkey\"", "\"wkey\"",
  "\"zkey\"", "\"identifier\"", "\"int constant\"", "\"double constant\"",
  "\"string constant\"", "\"error\"", "UNARY_OPS", "IF_NO_ELSE", "$accept",
  "program", "declaration_list", "declaration", "variable_declaration",
  "simple_type", "optional_initializer", "object_declaration",
  "object_type", "parameter_list_or_empty", "parameter_list", "parameter",
  "forward_declaration", "block_list", "block", "initialization_block",
  "termination_block", "animation_block", "animation_parameter",
  "check_animation_parameter", "on_block", "keystroke", "if_block",
  "statement_block", "statement_block_creator", "end_of_statement_block",
  "statement_list", "statement", "if_statement", "for_statement",
  "print_statement", "exit_statement", "assign_statement_or_empty",
  "assign_statement", "variable", "expression", "primary_expression",
  "math_operator", "empty", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    96,    96,    97,    97,    97,    98,    98,
      99,    99,    99,   100,   100,   101,   101,   102,   102,   102,
     102,   102,   103,   103,   104,   104,   105,   106,   107,   107,
     108,   108,   108,   108,   109,   110,   111,   112,   113,   114,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   116,   116,   117,   118,   119,   120,
     120,   121,   121,   121,   121,   121,   122,   122,   123,   124,
     125,   126,   126,   127,   127,   127,   127,   127,   128,   128,
     128,   128,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   130,   130,   130,   130,   130,   130,   130,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   132
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     1,     2,     2,     2,     3,     5,
       1,     1,     1,     2,     1,     5,     5,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     6,     2,     1,
       1,     1,     1,     1,     2,     2,     9,     2,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     5,     0,     0,     2,
       1,     1,     1,     2,     2,     2,     5,     7,    13,     4,
       4,     1,     1,     3,     3,     3,     2,     2,     1,     4,
       3,     6,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     4,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     128,     0,   128,     4,     1,    10,    11,    12,    17,    18,
      19,    20,    21,     0,     3,     0,     0,     0,     0,     0,
       2,    29,     0,     5,   128,     6,     0,     7,     0,     0,
       0,     0,    28,    30,    31,    32,    33,     0,     0,     0,
       8,    14,   128,     0,    67,    34,    35,     0,    40,    43,
      44,    41,    42,    45,    46,    47,    48,    49,    50,    51,
      52,    63,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,     0,     0,   114,   115,     0,     0,   118,   119,
     120,   121,   122,   123,   124,   126,   125,   127,     0,    88,
     113,   116,   117,   112,     0,    92,     0,    13,     0,     0,
      22,    25,    23,     0,   128,     0,    39,     0,     0,     0,
     106,   107,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    15,     0,    16,     0,    70,     0,     0,    37,
      27,   111,     0,    90,   110,   109,   103,   104,   105,   101,
     102,    97,    98,    95,    96,    99,   100,    94,    93,     0,
      26,    24,     0,     0,     0,     0,    68,    69,    71,    72,
       0,     0,     0,     0,    38,     0,    89,   108,     0,    67,
       0,     0,    66,    74,    75,    73,     0,     0,     0,    86,
      87,   128,     0,     0,   128,     0,     0,    83,    84,    85,
       0,    91,    67,    68,    81,    82,    79,    80,    68,    76,
      65,     0,     0,    36,    67,    68,     0,    77,    64,     0,
      67,   128,    68,     0,     0,    78
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    14,    15,    16,    40,    17,    18,    99,
     100,   101,    19,    20,    32,    33,    34,    35,   108,   138,
      36,    72,   209,   210,   211,   182,   135,   167,   168,   169,
     170,   171,   203,   172,    93,    94,    95,    96,   136
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -182
static const yytype_int16 yypact[] =
{
    -182,     6,   119,  -182,  -182,  -182,  -182,  -182,  -182,  -182,
    -182,  -182,  -182,     7,  -182,    -2,   -58,    13,   -57,    21,
       8,  -182,   -16,  -182,   -14,  -182,    -6,  -182,    46,    46,
       9,   371,  -182,  -182,  -182,  -182,  -182,    28,    17,    17,
    -182,  -182,    11,    17,  -182,  -182,  -182,    49,  -182,  -182,
    -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,
    -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,
    -182,  -182,    46,    48,  -182,  -182,    17,    17,  -182,  -182,
    -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,    17,    -5,
    -182,  -182,  -182,  -182,   116,  -182,    71,   373,    66,    78,
      77,  -182,  -182,   148,  -182,    48,  -182,    23,    87,   175,
    -182,  -182,    17,    27,    17,    17,  -182,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,  -182,    11,  -182,   -12,  -182,    44,    90,  -182,
    -182,  -182,   207,  -182,   420,   420,   184,   184,   184,   338,
     338,    60,    60,    60,    60,   -43,   -43,    79,  -182,   234,
     373,  -182,   117,   122,   123,   127,  -182,  -182,  -182,  -182,
     129,   130,   131,   101,  -182,   126,   121,  -182,    17,  -182,
      17,    17,  -182,  -182,  -182,  -182,    17,    17,    17,  -182,
    -182,  -182,    75,   261,    76,   288,   315,   373,   373,   373,
      26,  -182,    46,  -182,  -182,  -182,  -182,  -182,  -182,   145,
    -182,    14,   137,  -182,    46,  -182,    17,  -182,  -182,   346,
    -182,    76,  -182,   143,    46,  -182
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,   -61,  -182,
    -182,    47,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,
    -182,  -182,   -33,   -25,   -35,  -106,    -9,   -32,  -182,  -182,
    -182,  -182,   -37,  -181,  -100,   -38,  -182,  -182,     0
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
       3,    97,    21,    45,    46,   103,     4,   162,   163,   104,
     164,   165,   107,   204,    38,   166,   128,   129,    42,    39,
      28,    29,    43,   112,    41,    22,    30,   113,    23,    24,
      26,    74,    75,   162,   163,   173,   164,   165,   109,   110,
     204,    76,   102,    25,   137,   162,   163,   106,   164,   165,
     111,    27,    73,   208,     8,     9,    10,    11,    12,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      31,    37,    44,   105,   142,    89,   144,   145,    88,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   173,   130,    47,   212,    98,   131,
     173,    89,   213,   132,    89,    90,    91,    92,   133,   218,
     139,   173,   140,    89,   143,   175,   223,   126,   127,   128,
     129,   173,     5,     6,     7,     8,     9,    10,    11,    12,
      13,   174,   114,   115,   186,   187,   188,   189,   190,   129,
     193,   178,   195,   196,   194,   116,   179,   180,   197,   198,
     199,   181,   191,   192,   117,   118,   119,   120,   121,   183,
     184,   185,   201,    89,   114,   115,   214,   216,   224,   122,
     123,   124,   125,   126,   127,   128,   129,   134,   219,   215,
     161,   217,   200,     0,   222,   221,   117,   118,   119,   120,
     121,   114,   115,     0,   205,     0,     0,     0,     0,   225,
     141,   122,   123,   124,   125,   126,   127,   128,   129,     0,
       0,     0,     0,   117,   118,   119,   120,   121,     0,     0,
       0,   205,     0,   114,   115,   120,   121,     0,   122,   123,
     124,   125,   126,   127,   128,   129,   176,   122,   123,   124,
     125,   126,   127,   128,   129,   117,   118,   119,   120,   121,
     114,   115,     0,     0,     0,     0,     0,     0,     0,   177,
     122,   123,   124,   125,   126,   127,   128,   129,     0,     0,
       0,     0,   117,   118,   119,   120,   121,   114,   115,     0,
       0,     0,     0,     0,     0,     0,   202,   122,   123,   124,
     125,   126,   127,   128,   129,     0,     0,     0,     0,   117,
     118,   119,   120,   121,   114,   115,     0,     0,     0,     0,
       0,     0,     0,   206,   122,   123,   124,   125,   126,   127,
     128,   129,     0,     0,     0,     0,   117,   118,   119,   120,
     121,   114,   115,     0,     0,     0,     0,     0,     0,     0,
     207,   122,   123,   124,   125,   126,   127,   128,   129,     0,
       0,     0,     0,   117,   118,   119,   120,   121,     0,     0,
       0,     0,   114,   115,     0,     0,     0,     0,   122,   123,
     124,   125,   126,   127,   128,   129,   220,     0,     0,     0,
       0,     0,     0,     0,   117,   118,   119,   120,   121,   114,
     115,   122,   123,   124,   125,   126,   127,   128,   129,   122,
     123,   124,   125,   126,   127,   128,   129,     0,     0,     0,
       0,   117,   118,   119,   120,   121,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   122,   123,   124,   125,
     126,   127,   128,   129,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,   117,   118,
     119,   120,   121,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   122,   123,   124,   125,   126,   127,   128,
     129
};

static const yytype_int16 yycheck[] =
{
       0,    39,     2,    28,    29,    43,     0,    19,    20,    44,
      22,    23,    73,   194,    28,    27,    59,    60,    24,    33,
      12,    13,    28,    28,    24,    18,    18,    32,    30,    87,
      87,    14,    15,    19,    20,   135,    22,    23,    76,    77,
     221,    24,    42,    30,   105,    19,    20,    72,    22,    23,
      88,    30,    24,    27,     6,     7,     8,     9,    10,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      62,    87,    26,    24,   112,    87,   114,   115,    61,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   194,    24,    87,   203,    87,    33,
     200,    87,   208,    25,    87,    88,    89,    90,    31,   215,
      87,   211,    25,    87,    87,    25,   222,    57,    58,    59,
      60,   221,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    87,    16,    17,    33,    34,    35,    36,    37,    60,
     178,    24,   180,   181,   179,    29,    24,    24,   186,   187,
     188,    24,    26,    32,    38,    39,    40,    41,    42,    30,
      30,    30,    87,    87,    16,    17,    21,    30,    25,    53,
      54,    55,    56,    57,    58,    59,    60,    29,   216,   211,
     133,   214,   191,    -1,   221,   220,    38,    39,    40,    41,
      42,    16,    17,    -1,   194,    -1,    -1,    -1,    -1,   224,
      25,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      -1,    -1,    -1,    38,    39,    40,    41,    42,    -1,    -1,
      -1,   221,    -1,    16,    17,    41,    42,    -1,    53,    54,
      55,    56,    57,    58,    59,    60,    29,    53,    54,    55,
      56,    57,    58,    59,    60,    38,    39,    40,    41,    42,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    -1,
      -1,    -1,    38,    39,    40,    41,    42,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    -1,    -1,    -1,    38,    39,    40,    41,
      42,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      -1,    -1,    -1,    38,    39,    40,    41,    42,    -1,    -1,
      -1,    -1,    16,    17,    -1,    -1,    -1,    -1,    53,    54,
      55,    56,    57,    58,    59,    60,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,    16,
      17,    53,    54,    55,    56,    57,    58,    59,    60,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    -1,    -1,
      -1,    38,    39,    40,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    55,    56,
      57,    58,    59,    60,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    38,    39,
      40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    54,    55,    56,    57,    58,    59,
      60
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    95,    96,   132,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    97,    98,    99,   101,   102,   106,
     107,   132,    18,    30,    87,    30,    87,    30,    12,    13,
      18,    62,   108,   109,   110,   111,   114,    87,    28,    33,
     100,   132,    24,    28,    26,   117,   117,    87,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,   115,    24,    14,    15,    24,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    61,    87,
      88,    89,    90,   128,   129,   130,   131,   129,    87,   103,
     104,   105,   132,   129,   118,    24,   117,   102,   112,   129,
     129,   129,    28,    32,    16,    17,    29,    38,    39,    40,
      41,    42,    53,    54,    55,    56,    57,    58,    59,    60,
      24,    33,    25,    31,    29,   120,   132,   102,   113,    87,
      25,    25,   129,    87,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   105,    19,    20,    22,    23,    27,   121,   122,   123,
     124,   125,   127,   128,    87,    25,    29,    25,    24,    24,
      24,    24,   119,    30,    30,    30,    33,    34,    35,    36,
      37,    26,    32,   129,   118,   129,   129,   129,   129,   129,
     120,    87,    25,   126,   127,   132,    25,    25,    27,   116,
     117,   118,   119,   119,    21,   121,    30,   116,   119,   129,
      30,   118,   126,   119,    25,   117
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



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
        case 2:
#line 182 "gpl.y"
    {

  }
    break;

  case 3:
#line 189 "gpl.y"
    {
    
  }
    break;

  case 4:
#line 193 "gpl.y"
    {
    
  }
    break;

  case 5:
#line 201 "gpl.y"
    {
  
  }
    break;

  case 6:
#line 206 "gpl.y"
    {

  }
    break;

  case 7:
#line 211 "gpl.y"
    {

  }
    break;

  case 8:
#line 220 "gpl.y"
    {

  }
    break;

  case 9:
#line 225 "gpl.y"
    {

  }
    break;

  case 13:
#line 240 "gpl.y"
    {

  }
    break;


/* Line 1267 of yacc.c.  */
#line 1859 "y.tab.c"
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



