/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 36 "gpl.y"
{
 int            union_int;
 double         union_double;
 std::string    *union_string;  // MUST be a pointer to a string (this sucks!)
}
/* Line 1529 of yacc.c.  */
#line 241 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

