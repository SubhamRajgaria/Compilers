/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    BREAK = 258,
    CASE = 259,
    CHAR = 260,
    CONTINUE = 261,
    DEFAULT = 262,
    DO = 263,
    DOUBLE = 264,
    SHORT = 265,
    LONG = 266,
    ELSE = 267,
    FLOAT = 268,
    FOR = 269,
    GOTO = 270,
    IF = 271,
    INT = 272,
    RETURN = 273,
    SIGNED = 274,
    SWITCH = 275,
    UNSIGNED = 276,
    VOID = 277,
    WHILE = 278,
    BOOL = 279,
    MATRIX = 280,
    COMMENT = 281,
    IDENTIFIER = 282,
    INT_NO = 283,
    FLOAT_NO = 284,
    CHARACTER = 285,
    STRING = 286,
    LEFT_SQUARE_BRACE = 287,
    RIGHT_SQUARE_BRACE = 288,
    LEFT_ROUND_BRACE = 289,
    RIGHT_ROUND_BRACE = 290,
    LEFT_CURLY_BRACE = 291,
    RIGHT_CURLY_BRACE = 292,
    PERIOD = 293,
    ARROW = 294,
    INCREMENT = 295,
    DECREMENT = 296,
    AMPERSAND = 297,
    MULTIPLY = 298,
    ADD = 299,
    SUBTRACT = 300,
    TILDA = 301,
    NEGATION = 302,
    DIVIDE = 303,
    PERCENTILE = 304,
    LEFT_SHIFT = 305,
    RIGHT_SHIFT = 306,
    LESS_THAN = 307,
    GREATER_THAN = 308,
    LESS_THAN_EQUALTO = 309,
    GREATER_THAN_EQUALTO = 310,
    DOUBLE_EQUAL = 311,
    NOT_EQUAL = 312,
    XOR = 313,
    OR = 314,
    BINARY_AND = 315,
    BINARY_OR = 316,
    QUESTION_MARK = 317,
    COLON = 318,
    SEMI_COLON = 319,
    EQUAL = 320,
    STAR_EQUAL = 321,
    SLASH_EQUAL = 322,
    PERCENTILE_EQUAL = 323,
    PLUS_EQUAL = 324,
    MINUS_EQUAL = 325,
    LEFT_SHIFT_EQUAL = 326,
    RIGHT_SHIFT_EQUAL = 327,
    AND_EQUAL = 328,
    XOR_EQUAL = 329,
    OR_EQUAL = 330,
    COMMA = 331,
    HASH = 332,
    TRANSPOSE = 333,
    NEWLINE = 334,
    UNKNOWN = 335,
    IF_CONFLICT = 336
  };
#endif
/* Tokens.  */
#define BREAK 258
#define CASE 259
#define CHAR 260
#define CONTINUE 261
#define DEFAULT 262
#define DO 263
#define DOUBLE 264
#define SHORT 265
#define LONG 266
#define ELSE 267
#define FLOAT 268
#define FOR 269
#define GOTO 270
#define IF 271
#define INT 272
#define RETURN 273
#define SIGNED 274
#define SWITCH 275
#define UNSIGNED 276
#define VOID 277
#define WHILE 278
#define BOOL 279
#define MATRIX 280
#define COMMENT 281
#define IDENTIFIER 282
#define INT_NO 283
#define FLOAT_NO 284
#define CHARACTER 285
#define STRING 286
#define LEFT_SQUARE_BRACE 287
#define RIGHT_SQUARE_BRACE 288
#define LEFT_ROUND_BRACE 289
#define RIGHT_ROUND_BRACE 290
#define LEFT_CURLY_BRACE 291
#define RIGHT_CURLY_BRACE 292
#define PERIOD 293
#define ARROW 294
#define INCREMENT 295
#define DECREMENT 296
#define AMPERSAND 297
#define MULTIPLY 298
#define ADD 299
#define SUBTRACT 300
#define TILDA 301
#define NEGATION 302
#define DIVIDE 303
#define PERCENTILE 304
#define LEFT_SHIFT 305
#define RIGHT_SHIFT 306
#define LESS_THAN 307
#define GREATER_THAN 308
#define LESS_THAN_EQUALTO 309
#define GREATER_THAN_EQUALTO 310
#define DOUBLE_EQUAL 311
#define NOT_EQUAL 312
#define XOR 313
#define OR 314
#define BINARY_AND 315
#define BINARY_OR 316
#define QUESTION_MARK 317
#define COLON 318
#define SEMI_COLON 319
#define EQUAL 320
#define STAR_EQUAL 321
#define SLASH_EQUAL 322
#define PERCENTILE_EQUAL 323
#define PLUS_EQUAL 324
#define MINUS_EQUAL 325
#define LEFT_SHIFT_EQUAL 326
#define RIGHT_SHIFT_EQUAL 327
#define AND_EQUAL 328
#define XOR_EQUAL 329
#define OR_EQUAL 330
#define COMMA 331
#define HASH 332
#define TRANSPOSE 333
#define NEWLINE 334
#define UNKNOWN 335
#define IF_CONFLICT 336

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 11 "ass4_15CS10061_2.y" /* yacc.c:1909  */

	int intVal;
	char charVal;	
	double doubleVal;
	char* strVal;
	struct identifierAttr idAttr;
  	struct expressionAttr expAttr;
  	struct varDeclaration varAttr;
  	union initializerAttr initAttr;
  	quadEnum unaryOpAttr;
  	int instr;
  	struct listNode *NAttr;
  	struct listParam *paramAttr;

#line 231 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
