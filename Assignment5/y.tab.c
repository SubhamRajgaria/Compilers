/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "ass5_15CS10061.y" /* yacc.c:339  */

#include <stdio.h>
#include <iostream>
extern int yylex();
#include "ass5_15CS10061_translator.h"
#include <string.h>
#include <sstream>
void yyerror(const char* s);

#line 76 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 11 "ass5_15CS10061.y" /* yacc.c:355  */

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

#line 293 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 308 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  28
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   527

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  82
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  165
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  292

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   336

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      75,    76,    77,    78,    79,    80,    81
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   158,   158,   160,   165,   174,   183,   193,   202,   209,
     211,   212,   257,   271,   293,   294,   295,   311,   327,   350,
     353,   357,   368,   394,   421,   519,   520,   525,   526,   528,
     530,   531,   651,   718,   787,   788,   916,  1005,  1006,  1016,
    1027,  1028,  1037,  1046,  1055,  1065,  1066,  1075,  1086,  1087,
    1098,  1099,  1110,  1111,  1122,  1123,  1130,  1131,  1138,  1139,
    1160,  1161,  1236,  1237,  1238,  1239,  1240,  1241,  1242,  1243,
    1244,  1245,  1246,  1248,  1249,  1251,  1256,  1257,  1272,  1280,
    1282,  1286,  1288,  1323,  1375,  1381,  1387,  1388,  1394,  1395,
    1396,  1402,  1408,  1409,  1410,  1412,  1419,  1425,  1442,  1443,
    1455,  1462,  1468,  1469,  1478,  1479,  1484,  1486,  1494,  1501,
    1508,  1510,  1511,  1513,  1514,  1516,  1517,  1530,  1537,  1546,
    1547,  1549,  1551,  1552,  1554,  1555,  1557,  1558,  1559,  1560,
    1561,  1562,  1564,  1565,  1566,  1568,  1570,  1571,  1573,  1574,
    1579,  1580,  1582,  1584,  1592,  1607,  1609,  1620,  1628,  1640,
    1642,  1643,  1644,  1645,  1646,  1651,  1652,  1654,  1655,  1657,
    1658,  1660,  1661,  1666,  1667,  1669
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BREAK", "CASE", "CHAR", "CONTINUE",
  "DEFAULT", "DO", "DOUBLE", "SHORT", "LONG", "ELSE", "FLOAT", "FOR",
  "GOTO", "IF", "INT", "RETURN", "SIGNED", "SWITCH", "UNSIGNED", "VOID",
  "WHILE", "BOOL", "MATRIX", "COMMENT", "IDENTIFIER", "INT_NO", "FLOAT_NO",
  "CHARACTER", "STRING", "LEFT_SQUARE_BRACE", "RIGHT_SQUARE_BRACE",
  "LEFT_ROUND_BRACE", "RIGHT_ROUND_BRACE", "LEFT_CURLY_BRACE",
  "RIGHT_CURLY_BRACE", "PERIOD", "ARROW", "INCREMENT", "DECREMENT",
  "AMPERSAND", "MULTIPLY", "ADD", "SUBTRACT", "TILDA", "NEGATION",
  "DIVIDE", "PERCENTILE", "LEFT_SHIFT", "RIGHT_SHIFT", "LESS_THAN",
  "GREATER_THAN", "LESS_THAN_EQUALTO", "GREATER_THAN_EQUALTO",
  "DOUBLE_EQUAL", "NOT_EQUAL", "XOR", "OR", "BINARY_AND", "BINARY_OR",
  "QUESTION_MARK", "COLON", "SEMI_COLON", "EQUAL", "STAR_EQUAL",
  "SLASH_EQUAL", "PERCENTILE_EQUAL", "PLUS_EQUAL", "MINUS_EQUAL",
  "LEFT_SHIFT_EQUAL", "RIGHT_SHIFT_EQUAL", "AND_EQUAL", "XOR_EQUAL",
  "OR_EQUAL", "COMMA", "HASH", "TRANSPOSE", "NEWLINE", "UNKNOWN",
  "IF_CONFLICT", "$accept", "M", "N", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "AND_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_AND_expression",
  "logical_OR_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "type_specifier",
  "declarator", "direct_declarator", "pointer", "parameter_type_list",
  "parameter_list", "parameter_declaration", "identifier_list",
  "initializer", "initializer_row_list", "initializer_row",
  "designation_opt", "designation", "designator_list", "designator",
  "statement", "labeled_statement", "compound_statement",
  "block_item_list_opt", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "expression_opt", "translation_unit",
  "external_declaration", "function_definition", "declaration_list", "O", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
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
     335,   336
};
# endif

#define YYPACT_NINF -203

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-203)))

#define YYTABLE_NINF -166

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     414,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,
    -203,  -203,  -203,    -4,   414,   396,  -203,  -203,  -203,   -19,
      -5,  -203,   -42,  -203,   122,    76,    35,  -203,  -203,  -203,
     -10,  -203,  -203,   -19,   413,  -203,    -4,   188,    32,   432,
     368,    76,  -203,  -203,    22,  -203,  -203,  -203,  -203,  -203,
     470,    74,   470,   470,  -203,  -203,  -203,  -203,  -203,    25,
     452,   470,  -203,    -1,   -31,    75,    62,    80,    56,    47,
      50,    64,    87,  -203,  -203,  -203,   224,  -203,  -203,  -203,
    -203,    96,  -203,  -203,   -19,   103,    84,  -203,   -23,  -203,
     -18,   470,   118,   -28,    91,   413,  -203,    69,  -203,  -203,
    -203,   470,   451,   142,   147,  -203,  -203,  -203,  -203,  -203,
    -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,   470,
    -203,  -203,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,  -203,  -203,
     119,   120,   470,   124,   126,  -203,   148,   156,   157,   327,
     160,  -203,   127,   -33,  -203,  -203,  -203,  -203,   159,   163,
    -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,   414,  -203,
     177,  -203,   470,  -203,   173,  -203,  -203,    74,    74,  -203,
    -203,  -203,   -26,  -203,   -15,  -203,  -203,  -203,  -203,  -203,
    -203,  -203,    -1,    -1,   -31,   -31,    75,    75,    75,    75,
      62,    62,    80,    56,    47,   470,   470,  -203,  -203,   145,
    -203,   267,   267,   308,   150,   470,  -203,    24,   470,   181,
     267,  -203,  -203,   224,  -203,  -203,  -203,  -203,    91,   413,
    -203,  -203,   470,    50,    64,   470,   267,  -203,  -203,   470,
    -203,  -203,   135,  -203,    -9,   470,  -203,  -203,  -203,  -203,
     135,  -203,   193,   470,   470,   183,   267,   135,   187,   185,
     135,   201,  -203,  -203,  -203,   221,  -203,   470,   267,  -203,
     267,  -203,   470,   135,  -203,   470,  -203,   267,  -203,   222,
    -203,   208,  -203,   158,   226,  -203,  -203,  -203,   267,   267,
    -203,  -203
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    85,    90,    86,    88,    89,    87,    92,    93,    84,
      94,    91,   160,     0,    78,     0,   157,   159,    97,     0,
     104,    76,     0,    80,    82,    96,     0,    79,     1,   158,
       0,   105,    77,     0,     0,   163,     0,     0,     0,     0,
       0,    95,    98,    81,    82,     4,     5,     6,     7,     8,
       0,   119,     0,     0,    25,    26,    27,    28,    10,    21,
      29,     0,    30,    34,    37,    40,    45,    48,    50,    52,
      54,    56,    58,    60,   113,    83,   136,   164,   161,   162,
     100,     0,   111,   103,   110,     0,   106,   107,     0,    73,
       0,     0,     0,     0,   115,     0,   120,     0,   122,    22,
      23,     0,     0,     0,     0,    16,    17,    18,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,     0,
      29,    24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     2,
       0,     0,     0,     0,     0,     2,     0,     0,     0,     0,
       0,     2,     4,     0,   140,   141,   126,   127,     0,     2,
     138,   128,   129,   130,   131,    99,   109,   101,     0,   102,
       0,     9,     0,    75,     0,   125,   114,   119,   119,   117,
     121,   123,     0,    12,     0,    19,    14,    15,    61,    31,
      32,    33,    35,    36,    38,    39,    41,    42,    44,    43,
      46,    47,    49,    51,    53,     0,     0,     2,   152,     0,
     151,     0,     0,     0,     0,     0,   153,     0,     0,     0,
       0,   142,   135,     0,   108,   112,    74,   124,   116,     0,
      11,    13,     0,    55,    57,     0,     0,   134,     2,     0,
       2,   150,     3,   154,     0,     0,   132,   139,   118,    20,
       3,   133,     0,   155,     0,     0,     0,     3,     0,     0,
     156,     0,     3,     2,   145,     0,     2,     0,     0,     2,
       0,     2,     0,     3,   149,   155,     3,     0,    59,     0,
       3,   143,   146,     0,     0,     2,   147,     2,     0,     0,
     144,   148
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -203,  -110,  -100,  -203,  -203,  -203,   -51,  -203,   -29,    26,
      36,   -11,    37,   128,   123,   125,    67,    70,  -203,   -86,
      -6,  -203,   -50,   136,   -21,     4,  -203,   244,  -203,     8,
     253,   260,  -203,  -203,   116,  -203,   -89,  -203,   109,   110,
    -203,  -203,   192,  -166,  -203,   141,  -203,  -203,    68,  -202,
    -203,  -203,  -203,    17,  -203,   278,  -203,  -203,  -203
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   205,   140,    58,    59,   184,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      89,   119,   153,   174,    12,    36,    22,    23,    14,    44,
      25,    26,    85,    86,    87,    88,    75,    93,    94,    95,
      96,    97,    98,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   261,    15,    16,    17,    37,    38
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      90,    99,   100,    35,    13,   173,   179,   230,    18,   176,
     120,   240,   169,   125,   126,    19,    77,   171,    27,    13,
     231,    24,    32,    18,    20,    42,   256,    30,    74,   206,
      19,   221,   121,    81,    33,   212,   177,   253,    20,    20,
     120,   219,   122,   172,    84,   237,   238,   123,   124,   223,
     172,   182,   262,   170,   246,   154,   173,   101,   172,   102,
      21,   232,    18,   103,   104,   105,   106,   172,    76,    19,
     251,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,    34,   243,    74,
     264,   120,   166,   189,   190,   191,   185,   235,   135,   217,
     172,    91,   274,   107,   276,   136,    91,    92,    39,   137,
      40,   282,    92,   188,   129,   130,   131,   132,   196,   197,
     198,   199,   290,   291,   138,   127,   128,     1,   252,   165,
     254,     2,     3,     4,   180,     5,   133,   134,   167,     6,
     248,     7,   255,     8,     9,   175,    10,    11,   139,    -3,
     258,   192,   193,   270,   120,   120,   272,   265,  -165,   275,
     168,   277,   269,   194,   195,   242,   226,   178,   244,   186,
     200,   201,    84,   279,   187,   288,   281,   289,    78,    79,
     284,   207,   213,   214,   208,   250,   278,    34,   210,   211,
     220,   215,   239,     1,   218,   257,   222,     2,     3,     4,
    -137,     5,   154,   260,   225,     6,   227,     7,   236,     8,
       9,   172,    10,    11,   241,   245,   259,   273,   263,   267,
     285,   120,   286,    74,    76,   260,   249,   141,   142,     1,
     143,   144,   145,     2,     3,     4,   268,     5,   146,   147,
     148,     6,   149,     7,   150,     8,     9,   151,    10,    11,
     266,   152,    46,    47,    48,    49,   271,   283,    50,   203,
      76,   287,   204,   202,    52,    53,    54,    55,    56,    57,
     141,   142,   233,   143,   144,   145,   234,    43,   209,    41,
      31,   146,   147,   148,   224,   149,   228,   150,   229,   181,
     151,   247,   280,    29,   152,    46,    47,    48,    49,     0,
       0,    50,     0,    76,     0,     0,     0,    52,    53,    54,
      55,    56,    57,     1,     0,     0,     0,     2,     3,     4,
       0,     5,     0,     0,     0,     6,     0,     7,     0,     8,
       9,     0,    10,    11,     0,    45,    46,    47,    48,    49,
       0,     0,    50,     0,     0,     0,     0,     0,    52,    53,
      54,    55,    56,    57,    45,    46,    47,    48,    49,     0,
       0,    50,     0,     0,     0,     0,     0,    52,    53,    54,
      55,    56,    57,     1,     0,     0,     0,     2,     3,     4,
       0,     5,     0,     0,     0,     6,     0,     7,     0,     8,
       9,   216,    10,    11,     0,    82,    28,     0,     0,     0,
       0,     1,     0,    83,     0,     2,     3,     4,     0,     5,
       0,     0,     0,     6,     0,     7,     0,     8,     9,     1,
      10,    11,     0,     2,     3,     4,     0,     5,     0,     0,
       0,     6,     0,     7,     0,     8,     9,     0,    10,    11,
      45,    46,    47,    48,    49,     0,     0,    50,     0,    51,
       0,     0,     0,    52,    53,    54,    55,    56,    57,    45,
      46,    47,    48,    49,     0,    80,    50,     0,     0,     0,
       0,     0,    52,    53,    54,    55,    56,    57,    45,    46,
      47,    48,    49,     0,     0,    50,   183,     0,     0,     0,
       0,    52,    53,    54,    55,    56,    57,    45,    46,    47,
      48,    49,     0,     0,    50,     0,     0,     0,     0,     0,
      52,    53,    54,    55,    56,    57,     0,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118
};

static const yytype_int16 yycheck[] =
{
      50,    52,    53,    24,     0,    91,    95,    33,    27,    37,
      61,   213,    35,    44,    45,    34,    37,    35,    14,    15,
      35,    13,    64,    27,    43,    35,    35,    19,    34,   139,
      34,    64,    61,    39,    76,   145,    64,   239,    43,    43,
      91,   151,    43,    76,    40,   211,   212,    48,    49,   159,
      76,   101,   254,    76,   220,    76,   142,    32,    76,    34,
      64,    76,    27,    38,    39,    40,    41,    76,    36,    34,
     236,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,    65,    64,    95,
     256,   142,    84,   122,   123,   124,   102,   207,    42,   149,
      76,    32,   268,    78,   270,    58,    32,    38,    32,    59,
      34,   277,    38,   119,    52,    53,    54,    55,   129,   130,
     131,   132,   288,   289,    60,    50,    51,     5,   238,    33,
     240,     9,    10,    11,    65,    13,    56,    57,    35,    17,
     229,    19,   242,    21,    22,    27,    24,    25,    61,    62,
     250,   125,   126,   263,   205,   206,   266,   257,    36,   269,
      76,   271,   262,   127,   128,   215,   172,    76,   218,    27,
     133,   134,   168,   273,    27,   285,   276,   287,    37,    38,
     280,    62,    34,    27,    64,   235,   272,    65,    64,    63,
      63,    34,   213,     5,    34,   245,    37,     9,    10,    11,
      37,    13,   223,   253,    27,    17,    33,    19,    63,    21,
      22,    76,    24,    25,    64,    34,    23,   267,    35,    34,
      12,   272,    64,   229,    36,   275,   232,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    35,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      63,    27,    28,    29,    30,    31,    35,    35,    34,   136,
      36,    35,   137,   135,    40,    41,    42,    43,    44,    45,
       3,     4,   205,     6,     7,     8,   206,    33,   142,    26,
      20,    14,    15,    16,   168,    18,   177,    20,   178,    97,
      23,   223,   275,    15,    27,    28,    29,    30,    31,    -1,
      -1,    34,    -1,    36,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    45,     5,    -1,    -1,    -1,     9,    10,    11,
      -1,    13,    -1,    -1,    -1,    17,    -1,    19,    -1,    21,
      22,    -1,    24,    25,    -1,    27,    28,    29,    30,    31,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    40,    41,
      42,    43,    44,    45,    27,    28,    29,    30,    31,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    45,     5,    -1,    -1,    -1,     9,    10,    11,
      -1,    13,    -1,    -1,    -1,    17,    -1,    19,    -1,    21,
      22,    64,    24,    25,    -1,    27,     0,    -1,    -1,    -1,
      -1,     5,    -1,    35,    -1,     9,    10,    11,    -1,    13,
      -1,    -1,    -1,    17,    -1,    19,    -1,    21,    22,     5,
      24,    25,    -1,     9,    10,    11,    -1,    13,    -1,    -1,
      -1,    17,    -1,    19,    -1,    21,    22,    -1,    24,    25,
      27,    28,    29,    30,    31,    -1,    -1,    34,    -1,    36,
      -1,    -1,    -1,    40,    41,    42,    43,    44,    45,    27,
      28,    29,    30,    31,    -1,    33,    34,    -1,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    45,    27,    28,
      29,    30,    31,    -1,    -1,    34,    35,    -1,    -1,    -1,
      -1,    40,    41,    42,    43,    44,    45,    27,    28,    29,
      30,    31,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      40,    41,    42,    43,    44,    45,    -1,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     9,    10,    11,    13,    17,    19,    21,    22,
      24,    25,   106,   107,   110,   136,   137,   138,    27,    34,
      43,    64,   108,   109,   111,   112,   113,   107,     0,   137,
     111,   113,    64,    76,    65,   106,   107,   139,   140,    32,
      34,   112,    35,   109,   111,    27,    28,    29,    30,    31,
      34,    36,    40,    41,    42,    43,    44,    45,    85,    86,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   118,    36,   106,   127,   127,
      33,   102,    27,    35,   107,   114,   115,   116,   117,   102,
     104,    32,    38,   119,   120,   121,   122,   123,   124,    88,
      88,    32,    34,    38,    39,    40,    41,    78,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,   103,
      88,    90,    43,    48,    49,    44,    45,    50,    51,    52,
      53,    54,    55,    56,    57,    42,    58,    59,    60,    61,
      84,     3,     4,     6,     7,     8,    14,    15,    16,    18,
      20,    23,    27,   104,   106,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,    33,   111,    35,    76,    35,
      76,    35,    76,   101,   105,    27,    37,    64,    76,   118,
      65,   124,   104,    35,    87,   102,    27,    27,   102,    90,
      90,    90,    91,    91,    92,    92,    93,    93,    93,    93,
      94,    94,    95,    96,    97,    83,    83,    62,    64,   105,
      64,    63,    83,    34,    27,    34,    64,   104,    34,    83,
      63,    64,    37,    83,   116,    27,   102,    33,   120,   121,
      33,    35,    76,    98,    99,    83,    63,   125,   125,   106,
     131,    64,   104,    64,   104,    34,   125,   130,   118,   102,
     104,   125,    83,   131,    83,    84,    35,   104,    84,    23,
     104,   135,   131,    35,   125,    84,    63,    34,    35,    84,
      83,    35,    83,   104,   125,    83,   125,    83,   101,    84,
     135,    84,   125,    35,    84,    12,    64,    35,    83,    83,
     125,   125
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    82,    83,    84,    85,    85,    85,    85,    85,    85,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    87,
      87,    88,    88,    88,    88,    89,    89,    89,    89,    90,
      91,    91,    91,    91,    92,    92,    92,    93,    93,    93,
      94,    94,    94,    94,    94,    95,    95,    95,    96,    96,
      97,    97,    98,    98,    99,    99,   100,   100,   101,   101,
     102,   102,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   104,   104,   105,   106,   106,   107,   107,
     108,   108,   109,   109,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   111,   111,   112,   112,   112,
     112,   112,   112,   112,   113,   113,   114,   115,   115,   116,
     116,   117,   117,   118,   118,   119,   119,   120,   120,   121,
     121,   122,   123,   123,   124,   124,   125,   125,   125,   125,
     125,   125,   126,   126,   126,   127,   128,   128,   129,   129,
     130,   130,   131,   132,   132,   132,   133,   133,   133,   133,
     134,   134,   134,   134,   134,   135,   135,   136,   136,   137,
     137,   138,   138,   139,   139,   140
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     1,     1,     1,     1,     1,     3,
       1,     4,     3,     4,     3,     3,     2,     2,     2,     1,
       3,     1,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     4,     1,     4,     1,     9,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     2,     3,     1,     2,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     3,     4,
       3,     4,     4,     3,     1,     2,     1,     1,     3,     2,
       1,     1,     3,     1,     3,     1,     3,     2,     4,     0,
       1,     2,     1,     2,     3,     2,     1,     1,     1,     1,
       1,     1,     3,     4,     3,     3,     0,     1,     1,     3,
       1,     1,     2,     8,    11,     5,     8,    10,    12,     7,
       3,     2,     2,     2,     3,     0,     1,     1,     2,     1,
       1,     4,     4,     1,     2,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 158 "ass5_15CS10061.y" /* yacc.c:1646  */
    { (yyval.instr) = nextInstr;}
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 160 "ass5_15CS10061.y" /* yacc.c:1646  */
    { (yyval.NAttr) = makelist(nextInstr);	// lead to next instruction and print value
	quad_array->emit(_GOTO,0,0,0, 0,0,0);
}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 165 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
	(yyvsp[0].idAttr).loc = currentSymTable->lookup((yyvsp[0].idAttr).var);	// check if in current symbol table
	if(!((yyvsp[0].idAttr).loc))	
		(yyvsp[0].idAttr).loc = globalSymTable->lookup((yyvsp[0].idAttr).var);	// check if in global symbol table
	(yyval.expAttr).loc = (yyvsp[0].idAttr).loc;
	(yyval.expAttr).type = ((yyvsp[0].idAttr).loc)->Type;
	(yyval.expAttr).array = (yyval.expAttr).loc;
	(yyval.expAttr).loc1 = 0;
}
#line 1692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 174 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
	(yyval.expAttr).val.intData = (yyvsp[0].intVal);
	(yyval.expAttr).type = newNode(_INT,-1);
	(yyval.expAttr).loc = currentSymTable->gentemp(_INT);
	char *arg1 = new char[10];
	sprintf(arg1,"%d",(yyvsp[0].intVal));
	char *res = strdup(((yyval.expAttr).loc)->name);
	quad_array->emit(res, arg1, 0, (yyval.expAttr).loc);	
}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 183 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		(yyval.expAttr).val.doubleData = (yyvsp[0].doubleVal);
		(yyval.expAttr).type = newNode(_DOUBLE,-1);
		(yyval.expAttr).loc = currentSymTable->gentemp(_DOUBLE);
	  	char *arg1 = new char[10];
	  	sprintf(arg1,"%lf",(yyvsp[0].doubleVal));
	  	char *res = strdup(((yyval.expAttr).loc)->name);
	  	quad_array->emit(res, arg1, 0, (yyval.expAttr).loc);
		floats.push_back((yyvsp[0].doubleVal));	
}
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 193 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		(yyval.expAttr).val.charData = (yyvsp[0].charVal);
	  	(yyval.expAttr).type = newNode(_CHAR,-1);
	  	(yyval.expAttr).loc = currentSymTable->gentemp(_CHAR);
	  	char *arg1 = new char[10];
	  	sprintf(arg1,"%c",(yyvsp[0].charVal));
	  	char *res = strdup(((yyval.expAttr).loc)->name);
	  	quad_array->emit(res, arg1, 0, (yyval.expAttr).loc);	
}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 202 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		toc[countToc] = strdup((yyvsp[0].strVal));
	  	char *temp = new char[10];
	  	sprintf(temp,".LC%d",countToc);
	  	countToc++;
	  	(yyval.expAttr).loc = new symbolTableRow(temp);
}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 209 "ass5_15CS10061.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[-1].expAttr);}
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 211 "ass5_15CS10061.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 212 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		(yyval.expAttr).array = (yyvsp[-3].expAttr).array;
	  	(yyval.expAttr).type = ((yyvsp[-3].expAttr).type)->right;
	  	// Only one square brace encountered
	  	if(!((yyvsp[-3].expAttr).loc1)){
	  		(yyval.expAttr).loc1 = currentSymTable->gentemp(_INT);
			symbolTableRow *u = currentSymTable->gentemp(_INT);
	  		int m = compute_width(((yyvsp[-3].expAttr).type)->right);
			char *arg1 = new char[10];
			sprintf(arg1,"%d", m);
			char *res = strdup(u->name);
			quad_array->emit(res, arg1, 0, u);
	  		arg1 = strdup(((yyvsp[-1].expAttr).loc)->name);
	  		char *arg2 = strdup(u->name);
	  		res = strdup(((yyval.expAttr).loc1)->name);
	  		// Calculate offset from base address
	  		quad_array->emit(INTO, res, arg1, arg2,(yyvsp[-1].expAttr).loc,u,(yyval.expAttr).loc1);
	  	}
	  	// Two square braces encountered
	  	else{
	  		symbolTableRow *temp = currentSymTable->gentemp(_INT);
		  	(yyval.expAttr).loc1 = currentSymTable->gentemp(_INT);
			symbolTableRow *u = currentSymTable->gentemp(_INT);
		  	int n = compute_width((yyval.expAttr).type);
			char *arg1 = new char[10];
		  	sprintf(arg1,"%d",n);
		  	char *res = strdup(u->name);
			quad_array->emit(res, arg1, 0, u);
		  	arg1 = strdup(((yyvsp[-1].expAttr).loc)->name);
		  	char *arg2 = strdup(u->name);
		  	res = strdup(temp->name);
		  	quad_array->emit(INTO, res, arg1, arg2,(yyvsp[-1].expAttr).loc,u,temp);
		  	arg1 = strdup(((yyvsp[-3].expAttr).loc1)->name);
		  	arg2 = strdup(temp->name);
		  	res = strdup(((yyval.expAttr).loc1)->name);
		  	// Calculate final offset from base address of matrix/ array
		  	quad_array->emit(PLUS, res, arg1, arg2,(yyvsp[-3].expAttr).loc1,temp,(yyval.expAttr).loc1);
		  	//cout << "Convert kar diya "<<endl;
		  	// If it was a matrix type, convert it into double as we are now accessing one of its elements
		  	if(((yyvsp[-3].expAttr).type)->middle ==3)
	  			(yyval.expAttr).type = newNode(_DOUBLE,-1);
	  		(yyval.expAttr).isMatrix = true;
	  	}
	  	flag_array = 1;
}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 257 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		int count = 0;
	  	symbolTableRow *t = globalSymTable->lookup(((yyvsp[-2].expAttr).loc)->name);
	  	(yyval.expAttr).loc = currentSymTable->gentemp(((((t->nestedTable)->table)[count]).Type)->middle);
	  	char *res = strdup(((yyval.expAttr).loc)->name);
	  	char *arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  	char *arg2 = new char[10];
	  	sprintf(arg2,"%d",count);
	  	if((((yyval.expAttr).loc)->Type)->middle == _VOID)
	  		quad_array->emit(call_void, 0, arg1, arg2,(yyvsp[-2].expAttr).loc,0,(yyval.expAttr).loc);
	  	else
	  		quad_array->emit(call, res, arg1, arg2,(yyvsp[-2].expAttr).loc,0,(yyval.expAttr).loc);
	  	(yyval.expAttr).type = ((yyval.expAttr).loc)->Type;
}
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 271 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		listParam *temp = (yyvsp[-1].paramAttr);
	  	int count = 0;
	  	while(temp){
	  		char *arg1 = strdup((temp->parameter)->name);
	  		quad_array->emit(PARAM, 0, arg1, temp->parameter,0);
	  		count++;
	  		temp = temp->next;
	  	}
	  	symbolTableRow *t = globalSymTable->lookup(((yyvsp[-3].expAttr).loc)->name);
	  	(yyval.expAttr).loc = currentSymTable->gentemp(((((t->nestedTable)->table)[count]).Type)->middle);
	  	char *res = strdup(((yyval.expAttr).loc)->name);
	  	char *arg1 = strdup(((yyvsp[-3].expAttr).loc)->name);
	  	char *arg2 = new char[10];
	  	sprintf(arg2,"%d",count);
	  	if((((yyval.expAttr).loc)->Type)->middle == _VOID)
	  		quad_array->emit(call_void, 0, arg1, arg2,(yyvsp[-3].expAttr).loc,0,(yyval.expAttr).loc);
	  	else
	  		quad_array->emit(call, res, arg1, arg2,(yyvsp[-3].expAttr).loc,0,(yyval.expAttr).loc);
	  	(yyval.expAttr).type = ((yyval.expAttr).loc)->Type;
	  	//printf("Yo\n");
}
#line 1855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 293 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 294 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 295 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		(yyval.expAttr).loc = currentSymTable->gentemp(((yyvsp[-1].expAttr).type)->middle);
	  	char *arg1 = strdup(((yyvsp[-1].expAttr).loc)->name);
	  	char *res = strdup(((yyval.expAttr).loc)->name);
	  	quad_array->emit(res, arg1, (yyvsp[-1].expAttr).loc, (yyval.expAttr).loc);
		symbolTableRow *u = currentSymTable->gentemp(_INT);
	  	arg1 = new char[10];
		sprintf(arg1,"1");
		res = strdup(u->name);
		quad_array->emit(res,arg1,0,u);
		arg1 = strdup(((yyvsp[-1].expAttr).loc)->name);
	  	char *arg2 = strdup(u->name);
	  	res = strdup(((yyvsp[-1].expAttr).loc)->name);
	  	quad_array->emit(PLUS, res, arg1, arg2,(yyvsp[-1].expAttr).loc,u,(yyvsp[-1].expAttr).loc );
	  	(yyval.expAttr).type = (yyvsp[-1].expAttr).type;
}
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 311 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		(yyval.expAttr).loc = currentSymTable->gentemp(((yyvsp[-1].expAttr).type)->middle);
	  	char *arg1 = strdup(((yyvsp[-1].expAttr).loc)->name);
	  	char *res = strdup(((yyval.expAttr).loc)->name);
	  	quad_array->emit(res, arg1, (yyvsp[-1].expAttr).loc, (yyval.expAttr).loc);
		symbolTableRow *u = currentSymTable->gentemp(_INT);
	  	arg1 = new char[10];
		sprintf(arg1,"1");
		res = strdup(u->name);
		quad_array->emit(res,arg1,0,u);
		arg1 = strdup(((yyvsp[-1].expAttr).loc)->name);
	  	char *arg2 = strdup(u->name);
	  	res = strdup(((yyvsp[-1].expAttr).loc)->name);
	  	quad_array->emit(MINUS, res, arg1, arg2,(yyvsp[-1].expAttr).loc,u,(yyvsp[-1].expAttr).loc );
	  	(yyval.expAttr).type = (yyvsp[-1].expAttr).type;
}
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 327 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
	symbolTableRow *temp = currentSymTable->gentemp(((yyvsp[-1].expAttr).type)->middle);
	//cout << *($1.type->left)<<" transposing" <<  *($1.type->right->left)<< endl;
	temp->Type->left = (yyvsp[-1].expAttr).type->right->left;	// Assign cols of original matrix to rows of new one
	temp->Type->right = newNode(_INT,-1);		
	temp->Type->right->left = (yyvsp[-1].expAttr).type->left;	// Assign rows of original matrix to cols of new one
	int m = *((yyvsp[-1].expAttr).type->left);
	int n = *((yyvsp[-1].expAttr).type->right->left);
	temp->size = m*n*8+8;					// Calculate size of the new matrix
	(yyval.expAttr).loc = temp;
	//cout << temp->Type;
	(yyval.expAttr).isMatrix = true;
	char *arg1 = strdup(((yyvsp[-1].expAttr).loc)->name);
	char *res = strdup(temp->name);
	quad_array->emit(TRANS, res, arg1, (yyvsp[-1].expAttr).loc, temp);
	(yyval.expAttr).type = newNode(_MATRIX,-1);
	//$$.type->rows = n;
	//$$.type->cols = m;
}
#line 1933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 350 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
	  	(yyval.paramAttr) = makeParamList((yyvsp[0].expAttr).loc);
}
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 353 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
	(yyval.paramAttr) = mergeParamList((yyvsp[-2].paramAttr),makeParamList((yyvsp[0].expAttr).loc));
}
#line 1949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 357 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		(yyval.expAttr) = (yyvsp[0].expAttr);
	  	if((yyvsp[0].expAttr).loc1){
	  		(yyval.expAttr).loc = currentSymTable->gentemp(((yyvsp[0].expAttr).type)->middle);
	  		char *arg1 = strdup(((yyvsp[0].expAttr).array)->name);
	  		char *arg2 = strdup(((yyvsp[0].expAttr).loc1)->name);
	  		char *res = strdup(((yyval.expAttr).loc)->name);
	  		quad_array->emit(EQ_BRACKET, res, arg1, arg2,(yyvsp[0].expAttr).loc,(yyvsp[0].expAttr).loc1,(yyval.expAttr).loc);
	  		//$$.loc1 = 0;
	  	}
}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 368 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		(yyval.expAttr).loc = currentSymTable->gentemp(((yyvsp[0].expAttr).type)->middle);
		symbolTableRow *u = currentSymTable->gentemp(_INT);
		char *arg1 = new char[10];
		sprintf(arg1,"1");
		char *res = strdup(u->name);
		quad_array->emit(res,arg1, 0, u);
	  	arg1 = strdup(((yyvsp[0].expAttr).loc)->name);
	  	char *arg2 = strdup(u->name);
	  	if((yyvsp[0].expAttr).isMatrix){
			(yyval.expAttr).type = newNode(_DOUBLE,-1);
			//quad_array->emit(EQ_BRACKET, $$.loc->name, $2.loc1->name, $2.loc->name, $2.loc1, $2.loc, $$.loc );
			(yyval.expAttr).loc->Type = (yyval.expAttr).type;
			(yyval.expAttr).loc->size = compute_width((yyval.expAttr).type);
			quad_array->emit(PLUS, (yyvsp[0].expAttr).loc->name, (yyvsp[0].expAttr).loc->name, arg2, (yyvsp[0].expAttr).loc, u, (yyvsp[0].expAttr).loc );
			quad_array->emit((yyval.expAttr).loc->name,(yyvsp[0].expAttr).loc->name, (yyvsp[0].expAttr).loc, (yyval.expAttr).loc);
		}
		else{
		  	res = strdup(((yyvsp[0].expAttr).loc)->name);
		  	quad_array->emit(PLUS, res, arg1, arg2,(yyvsp[0].expAttr).loc,u,(yyvsp[0].expAttr).loc);
		  	arg1 = strdup(((yyvsp[0].expAttr).loc)->name);
		  	res = strdup(((yyval.expAttr).loc)->name);
		  	quad_array->emit(res, arg1,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc);
		  	(yyval.expAttr).type = (yyvsp[0].expAttr).type;
		}
}
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 394 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		(yyval.expAttr).loc = currentSymTable->gentemp(((yyvsp[0].expAttr).type)->middle);
		symbolTableRow *u = currentSymTable->gentemp(_INT);
		char *arg1 = new char[10];
		sprintf(arg1,"1");
		char *res = strdup(u->name);
		quad_array->emit(res,arg1, 0, u);
	  	arg1 = strdup(((yyvsp[0].expAttr).loc)->name);
	  	char *arg2 = strdup(u->name);
	  	if((yyvsp[0].expAttr).isMatrix){
			(yyval.expAttr).type = newNode(_DOUBLE,-1);
			//quad_array->emit(EQ_BRACKET, $$.loc->name, $2.loc1->name, $2.loc->name, $2.loc1, $2.loc, $$.loc );
			(yyval.expAttr).loc->Type = (yyval.expAttr).type;
			(yyval.expAttr).loc->size = compute_width((yyval.expAttr).type);
			quad_array->emit(MINUS, (yyvsp[0].expAttr).loc->name, (yyvsp[0].expAttr).loc->name, arg2, (yyvsp[0].expAttr).loc, u, (yyvsp[0].expAttr).loc );
			quad_array->emit((yyval.expAttr).loc->name,(yyvsp[0].expAttr).loc->name, (yyvsp[0].expAttr).loc, (yyval.expAttr).loc);
		}
		else{
		  	res = strdup(((yyvsp[0].expAttr).loc)->name);
		  	quad_array->emit(MINUS, res, arg1, arg2,(yyvsp[0].expAttr).loc,u,(yyvsp[0].expAttr).loc);
		  	arg1 = strdup(((yyvsp[0].expAttr).loc)->name);
		  	res = strdup(((yyval.expAttr).loc)->name);
		  	quad_array->emit(res, arg1,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc);
		  	(yyval.expAttr).type = (yyvsp[0].expAttr).type;
		}
	  	
}
#line 2028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 421 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		/*if($1 == U_ADDR){
			$$=$2;
			$$.type = newNode(_PTR,-1);
			$$.type->right = newNode(($2.type)->middle,-1);
			$$.loc = currentSymTable->gentemp(($$.type)->middle);
			if($2.isMatrix = false)
				quad_array->emit($1, ($$.loc)->name, ($2.loc)->name, 0, $2.loc,0,$$.loc);
			else{
				quad_array->emit(PLUS, $2.loc->name, $$.loc->name, $2.loc1->name, $$.loc, $2.loc1, $2.loc);
				$$.isMatrix = false;
			}
		}
		else if($1 == U_STAR){
			$$ = $2;
			$$.type = newNode($2.type->right->middle, -1);
		}
		else if($1 == U_PLUS){
			$$=$2;
			if($2.isMatrix){
				$$.isMatrix = false;
				symbolTableRow *temp = currentSymTable->gentemp(_DOUBLE);
				quad_array->emit(EQ_BRACKET, temp->name, $2.loc1->name, $2.loc->name, $2.loc1, $2.loc, temp);
				$$.loc = temp;
				$$.type = newNode(_DOUBLE,-1);
			}
			else{
				$$.loc = currentSymTable->gentemp(($2.type)->middle);
				char *arg1 = strdup(($2.loc)->name);
	  			char *res = strdup(($$.loc)->name);
	  			quad_array->emit($1, res, arg1, 0, $2.loc,0,$$.loc);
	  			$$.type = $2.type;
			}
		}
		else if($1== U_MINUS){
			$$=$2;
			if($2.isMatrix){
				$$.isMatrix = false;
				symbolTableRow *temp = currentSymTable->gentemp(_DOUBLE);
				quad_array->emit(EQ_BRACKET, temp->name, $2.loc1->name, $2.loc->name, $2.loc1, $2.loc, temp);
				$$.loc = temp;
				$$.type = newNode(_DOUBLE,-1);
			}
			else{
				$$.loc = currentSymTable->gentemp(($2.type)->middle);
				char *arg1 = strdup(($2.loc)->name);
	  			char *res = strdup(($$.loc)->name);
	  			quad_array->emit($1, res, arg1, 0, $2.loc,0,$$.loc);
	  			$$.type = $2.type;
			}
		}*/
		/*if($1== U_ADDR)
		{
			$$.loc = currentSymTable->gentemp(_PTR);
			$$.loc->Type->right = newNode(($2.type)->middle, -1);
		}
		else if(($2.type)->right)
			$$.loc = currentSymTable->gentemp((($2.type)->right)->middle);
		else	
			$$.loc = currentSymTable->gentemp(($2.type)->middle);
		//cout << $2.loc->Type->middle <<endl;//<< " " << $2.loc->Type->right->middle<<endl;
	  	char *arg1 = strdup(($2.loc)->name);
	  	char *res = strdup(($$.loc)->name);
	  	quad_array->emit($1, res, arg1, 0, $2.loc,0,$$.loc);
	  	$$.type = $2.type;*/

	  	if(((yyvsp[-1].unaryOpAttr) == U_STAR) && ((starCount > 1 && leftOrRight == 1)||(leftOrRight == 2))){
	  		(yyval.expAttr).loc = currentSymTable->gentempComplex(((yyvsp[0].expAttr).type)->right);
	  		char *arg1 = strdup(((yyvsp[0].expAttr).loc)->name);
		  	char *res = strdup(((yyval.expAttr).loc)->name);
		  	//quadArrayRow x(arg1,0,res,$1,$2.loc,0,$$.loc);
		  	quad_array->emit((yyvsp[-1].unaryOpAttr), res, arg1, 0, (yyvsp[0].expAttr).loc,0,(yyval.expAttr).loc);
		  	(yyval.expAttr).type = ((yyval.expAttr).loc)->Type;
	  		starCount--;
	  	}
	  	else if((yyvsp[-1].unaryOpAttr) == U_ADDR){
	  		treeNodeType *tu = newNode(_PTR,-1);
	  		tu->right = (yyvsp[0].expAttr).type;
	  		(yyval.expAttr).loc = currentSymTable->gentempComplex(tu);
	  		char *arg1 = strdup(((yyvsp[0].expAttr).loc)->name);
		  	char *res = strdup(((yyval.expAttr).loc)->name);
		  	//quadArrayRow x(arg1,0,res,$1,$2.loc,0,$$.loc);
		  	quad_array->emit((yyvsp[-1].unaryOpAttr), res, arg1, 0, (yyvsp[0].expAttr).loc,0,(yyval.expAttr).loc);
		  	(yyval.expAttr).type = ((yyval.expAttr).loc)->Type;
	  	}
	  	else if(!(starCount == 1 && leftOrRight == 1)){
	  		(yyval.expAttr).loc = currentSymTable->gentemp(((yyvsp[0].expAttr).type)->middle);
	  		char *arg1 = strdup(((yyvsp[0].expAttr).loc)->name);
		  	char *res = strdup(((yyval.expAttr).loc)->name);
		  	//quadArrayRow x(arg1,0,res,$1,$2.loc,0,$$.loc);
		  	quad_array->emit((yyvsp[-1].unaryOpAttr), res, arg1, 0, (yyvsp[0].expAttr).loc,0,(yyval.expAttr).loc);
		  	(yyval.expAttr).type = ((yyval.expAttr).loc)->Type;
	  	}
	  	else
	  		(yyval.expAttr) = (yyvsp[0].expAttr);	

}
#line 2130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 519 "ass5_15CS10061.y" /* yacc.c:1646  */
    {(yyval.unaryOpAttr) = U_ADDR;}
#line 2136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 520 "ass5_15CS10061.y" /* yacc.c:1646  */
    {(yyval.unaryOpAttr) = U_STAR;
					if(leftOrRight ==1)
						isLeft =1;
					starCount++;
				}
#line 2146 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 525 "ass5_15CS10061.y" /* yacc.c:1646  */
    {(yyval.unaryOpAttr) = U_PLUS;}
#line 2152 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 526 "ass5_15CS10061.y" /* yacc.c:1646  */
    {(yyval.unaryOpAttr) = U_MINUS;}
#line 2158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 528 "ass5_15CS10061.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 2164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 530 "ass5_15CS10061.y" /* yacc.c:1646  */
    {(yyval.expAttr) = (yyvsp[0].expAttr);}
#line 2170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 531 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		if(typecheck((yyvsp[-2].expAttr).type, (yyvsp[0].expAttr).type)){
	  		(yyval.expAttr).loc = currentSymTable->gentemp(((yyvsp[-2].expAttr).type)->middle);
	  		//cout << "abbey yahan aa gaya"<<endl;
	  		// Check if two matrices are getting multiplied (this is done here for matrices with both dimensions equal)
	  		if(((yyvsp[-2].expAttr).type)->middle == 3 && ((yyvsp[0].expAttr).type)->middle == 3)
	  		{
	  			// check if cols of first matrix = rows of second matrix
	  			if(*((yyvsp[0].expAttr).type->left) == *((yyvsp[-2].expAttr).type->right->left))
	  			{
	  				(yyval.expAttr).loc->Type->left = (yyvsp[-2].expAttr).type->left;
	  				(yyval.expAttr).loc->Type->right = newNode(_INT,-1);
	  				(yyval.expAttr).loc->Type->right->left = (yyvsp[0].expAttr).type->right->left;
	  				int m = *((yyvsp[-2].expAttr).type->left);
	  				int n = *((yyvsp[0].expAttr).type->right->left);
	  				(yyval.expAttr).loc->size = m*n*8+8;
	  				//cout << m << " "<<n << endl;
	  				char *res = strdup((yyval.expAttr).loc->name);
	  				char *arg1 = (((yyvsp[-2].expAttr).loc)->name);
	  				char *arg2 = (((yyvsp[0].expAttr).loc)->name);
	  				quad_array->emit(INTO, res, arg1, arg2,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc);
	  				(yyval.expAttr).type = newNode(_MATRIX,-1);
	  				(yyval.expAttr).type->left = (yyvsp[-2].expAttr).type->left;
	  				(yyval.expAttr).type->right = newNode(_INT,-1);
	  				(yyval.expAttr).type->right->left = (yyvsp[0].expAttr).type->right->left;
	  			}
	  			else
	  				cout << "Error in matrix multiplication"<< endl;
	  		}
	  		else{
	  			char *arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(((yyval.expAttr).loc)->name);
	  			quad_array->emit(INTO, res, arg1, arg2,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc);
	  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;	
	  		}
	  		
	  	}
	  	else{
	  		symbolTableRow *temp1, *temp2;
	  		// Check if two matrices are getting multiplied (this is done here for matrices with unequal dimensions)
	  		if(((yyvsp[-2].expAttr).type)->middle == 3 && ((yyvsp[0].expAttr).type)->middle == 3)
	  		{
	  			// check if cols of first matrix = rows of second matrix
	  			if(*((yyvsp[0].expAttr).type->left) == *((yyvsp[-2].expAttr).type->right->left))
	  			{
	  				temp1 = currentSymTable->gentemp(_MATRIX);
	  				temp1->Type->left = (yyvsp[-2].expAttr).type->left;
	  				temp1->Type->right = newNode(_INT,-1);
	  				temp1->Type->right->left = (yyvsp[0].expAttr).type->right->left;
	  				int m = *((yyvsp[-2].expAttr).type->left);
	  				int n = *((yyvsp[0].expAttr).type->right->left);
	  				temp1->size = m*n*8+8;
	  				//cout << m << " "<<n << endl;
	  				char *res = strdup(temp1->name);
	  				char *arg1 = (((yyvsp[-2].expAttr).loc)->name);
	  				char *arg2 = (((yyvsp[0].expAttr).loc)->name);
	  				quad_array->emit(INTO, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2);
	  				(yyval.expAttr).type = newNode(_MATRIX,-1);
	  				(yyval.expAttr).type->left = (yyvsp[-2].expAttr).type->left;
	  				(yyval.expAttr).type->right = newNode(_INT,-1);
	  				(yyval.expAttr).type->right->left = (yyvsp[0].expAttr).type->right->left;
	  			}
	  		}
	  		// Check for type conversion
	  		if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _DOUBLE){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[-2].expAttr).loc,temp1 );
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(INTO, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2);
	  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _CHAR){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[0].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(INTO, res, arg1, arg2,(yyvsp[-2].expAttr).loc,temp1,temp2);
	  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _DOUBLE && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[0].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(INTO, res, arg1, arg2 ,(yyvsp[-2].expAttr).loc,temp1,temp2);
	  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _CHAR && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, (yyvsp[-2].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(INTO, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2 );
	  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
	  		}
	  		(yyval.expAttr).loc = temp2;
	  	}
}
#line 2295 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 651 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		if(typecheck((yyvsp[-2].expAttr).type, (yyvsp[0].expAttr).type)){
	  		(yyval.expAttr).loc = currentSymTable->gentemp(((yyvsp[-2].expAttr).type)->middle);
	  		char *arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  		char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  		char *res = strdup(((yyval.expAttr).loc)->name);
	  		quad_array->emit(DIV, res, arg1, arg2,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc);
	  		(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  	}
	  	else{
	  		symbolTableRow *temp1, *temp2;
	  		// check for type conversion
	  		if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _DOUBLE){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[-2].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2);
	  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _CHAR){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[0].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,(yyvsp[-2].expAttr).loc,temp1,temp2);
	  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _DOUBLE && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[0].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2, (yyvsp[-2].expAttr).loc,temp1,temp2);
	  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _CHAR && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[-2].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(DIV, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2);
	  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
	  		}
	  		(yyval.expAttr).loc = temp2;
	  	}
}
#line 2367 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 718 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		if(typecheck((yyvsp[-2].expAttr).type, (yyvsp[0].expAttr).type)){
	  		(yyval.expAttr).loc = currentSymTable->gentemp(((yyvsp[-2].expAttr).type)->middle);
	  		char *arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  		char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  		char *res = strdup(((yyval.expAttr).loc)->name);
	  		quad_array->emit(PERCENT, res, arg1, arg2,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc);
	  		(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  	}
	  	else{
	  		symbolTableRow *temp1, *temp2;
	  		// check for type conversion
	  		if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _DOUBLE){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, (yyvsp[-2].expAttr).loc, temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(PERCENT, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2);
	  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _CHAR){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, (yyvsp[0].expAttr).loc, temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(PERCENT, res, arg1, arg2,(yyvsp[-2].expAttr).loc,temp1,temp2);
	  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _DOUBLE && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, (yyvsp[0].expAttr).loc, temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(PERCENT, res, arg1, arg2,(yyvsp[-2].expAttr).loc,temp1,temp2);
	  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _CHAR && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, (yyvsp[-2].expAttr).loc, temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  			res = strdup(temp2->name);

	  			quad_array->emit(PERCENT, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2);
	  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
	  		}
	  		(yyval.expAttr).loc = temp2;
	  	}
}
#line 2440 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 787 "ass5_15CS10061.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 2446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 788 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		if(typecheck((yyvsp[-2].expAttr).type, (yyvsp[0].expAttr).type)){
			char *arg1, *arg2, *res, *arg3, *arg4;
	  		(yyval.expAttr).loc = currentSymTable->gentemp(((yyvsp[-2].expAttr).type)->middle);
			int m,n;
	  		// if we are adding matrices
	  		if(((yyvsp[-2].expAttr).type)->middle==3){
	  			(yyval.expAttr).loc->Type->left = (yyvsp[-2].expAttr).type->left;	// assign rows to temporary generated
	  			(yyval.expAttr).loc->Type->right = newNode(_INT,-1);
	  			(yyval.expAttr).loc->Type->right->left = (yyvsp[-2].expAttr).type->right->left; // assign cols to generated temporary
	  			m = *((yyvsp[-2].expAttr).type->left);
	  			n = *((yyvsp[-2].expAttr).type->right->left);
	  			(yyval.expAttr).loc->size = m*n*8+8;
				symbolTableRow *temp1, *temp2,*temp3;
				
				for(int i=0; i< m; i++)
				{
					
					for(int j=0; j< n; j++)
					{
						temp1 = currentSymTable->gentemp(_DOUBLE);
						temp2 = currentSymTable->gentemp(_DOUBLE);
						temp3 = currentSymTable->gentemp(_DOUBLE);
						arg4 = strdup(temp1->name);
						arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
						//printf("Hello\n");
						//printf("%s\n", arg4);
						int d = (i*j)*8+8*j;
						//printf("%d\n",d);
						arg2 = new char[10];
						sprintf(arg2, "%d", d);
						quad_array->emit(EQ_BRACKET, arg4, arg1, arg2, (yyvsp[-2].expAttr).loc, 0, temp1);
						arg3 = temp2->name;
						arg1 = strdup(((yyvsp[0].expAttr).loc)->name);
						arg2 = new char[10];
						sprintf(arg2, "%d", d);
						quad_array->emit(EQ_BRACKET, arg3, arg1, arg2, (yyvsp[-2].expAttr).loc,0, temp2);
						res = strdup(temp3->name);
						quad_array->emit(PLUS, res, strdup(temp1->name), strdup(temp2->name),temp1,temp2,temp3 );
						arg1 = strdup(((yyval.expAttr).loc)->name);
						arg2 = new char[10];
						sprintf(arg2, "%d", d);
						quad_array->emit(BRACKET_EQ, res, arg1, arg2, (yyval.expAttr).loc,0, temp3);
						arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
				  		arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
				  		res = strdup(((yyval.expAttr).loc)->name);
				  		quad_array->emit(PLUS, res, arg1, arg2,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc );
					}
				}
				(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  		}
			else{
		  		arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
		  		arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
		  		res = strdup(((yyval.expAttr).loc)->name);
		  		quad_array->emit(PLUS, res, arg1, arg2,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc );
		  		(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
			}
	  	}
	  	else{
	  		symbolTableRow *temp1, *temp2;
	  		// If adding matrix element and non-matrix element
	  		if(((yyvsp[-2].expAttr).type)->middle == 3 && ((yyvsp[-2].expAttr).type)->middle != 3){
	  			//cout << "Idhar aaya" << endl;
	  			(yyvsp[-2].expAttr).type = newNode(_DOUBLE,-1);
	  			(yyvsp[-2].expAttr).isMatrix  = false;	
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle != 3 && ((yyvsp[-2].expAttr).type)->middle == 3){
	  			(yyvsp[0].expAttr).type = newNode(_DOUBLE,-1);
	  			(yyvsp[0].expAttr).isMatrix  = false;
	  		}
	  		// check for type conversion
	  		if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _DOUBLE){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[-2].expAttr).loc,temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(PLUS, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2);
	  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _CHAR){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, (yyvsp[0].expAttr).loc, temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(PLUS, res, arg1, arg2,(yyvsp[-2].expAttr).loc,temp1,temp2);
	  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _DOUBLE && ((yyvsp[0].expAttr).type)->middle == _INT){
				//cout << "Double to Int"<<endl;
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, (yyvsp[0].expAttr).loc, temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(PLUS, res, arg1, arg2,(yyvsp[-2].expAttr).loc,temp1,temp2);
	  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _CHAR && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, (yyvsp[-2].expAttr).loc, temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(PLUS, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2);
	  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
	  		}
	  		(yyval.expAttr).loc = temp2;
	  	}
}
#line 2579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 916 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		if(typecheck((yyvsp[-2].expAttr).type, (yyvsp[0].expAttr).type)){
	  		//printf("Help me\n");
	  		(yyval.expAttr).loc = currentSymTable->gentemp(((yyvsp[-2].expAttr).type)->middle);
	  		// If two matrices are getting subtracted
	  		if(((yyvsp[-2].expAttr).type)->middle==3){
	  			(yyval.expAttr).loc->Type->left = (yyvsp[-2].expAttr).type->left;
	  			(yyval.expAttr).loc->Type->right = newNode(_INT,-1);
	  			(yyval.expAttr).loc->Type->right->left = (yyvsp[-2].expAttr).type->right->left;
	  			int m = *((yyvsp[-2].expAttr).type->left);
	  			int n = *((yyvsp[-2].expAttr).type->right->left);
	  			(yyval.expAttr).loc->size = m*n*8+8;
	  		}
	  		char *arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  		char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  		char *res = strdup(((yyval.expAttr).loc)->name);
	  		quad_array->emit(MINUS, res, arg1,arg2,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc);
	  		(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  	}
	  	else{
	  		symbolTableRow *temp1, *temp2;
	  		// If adding matrix element and non-matrix element
	  		if(((yyvsp[-2].expAttr).type)->middle == 3 && ((yyvsp[-2].expAttr).type)->middle != 3){
	  			//cout << "Idhar aaya" << endl;
	  			(yyvsp[-2].expAttr).type = newNode(_DOUBLE,-1);
	  			(yyvsp[-2].expAttr).isMatrix  = false;	
	  		}
	  		else if (((yyvsp[-2].expAttr).type)->middle != 3 && ((yyvsp[-2].expAttr).type)->middle == 3){
	  			//cout << "2nd convert hua" << endl;
	  			(yyvsp[0].expAttr).type = newNode(_DOUBLE,-1);
	  			(yyvsp[0].expAttr).isMatrix  = false;
	  		}
	  		// check for type conversion
	  		if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _DOUBLE){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, (yyvsp[-2].expAttr).loc, temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(MINUS, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2);
	  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _CHAR){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, (yyvsp[0].expAttr).loc, temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(MINUS, res, arg1, arg2,(yyvsp[-2].expAttr).loc,temp1,temp2);
	  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _DOUBLE && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_DOUBLE);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2dbl(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, (yyvsp[0].expAttr).loc, temp1);
	  			temp2 = currentSymTable->gentemp(_DOUBLE);
	  			arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  			char *arg2 = strdup(temp1->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(MINUS, res, arg1, arg2,(yyvsp[-2].expAttr).loc,temp1,temp2);
	  			(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _CHAR && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"char2int(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, (yyvsp[-2].expAttr).loc, temp1);
	  			temp2 = currentSymTable->gentemp(_INT);
	  			arg1 = strdup(temp1->name);
	  			char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  			res = strdup(temp2->name);
	  			quad_array->emit(MINUS, res, arg1, arg2,temp1,(yyvsp[0].expAttr).loc,temp2);
	  			(yyval.expAttr).type = (yyvsp[0].expAttr).type;
	  		}
	  		(yyval.expAttr).loc = temp2;
	  	}
}
#line 2672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 1005 "ass5_15CS10061.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 2678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 1006 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
	if(typecheck((yyvsp[-2].expAttr).type, (yyvsp[0].expAttr).type)){
	  		(yyval.expAttr).loc = currentSymTable->gentemp(((yyvsp[-2].expAttr).type)->middle);
	  		char *arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  		char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  		char *res = strdup(((yyval.expAttr).loc)->name);
	  		quad_array->emit(SL, res, arg1, arg2,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc);
	  		(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  	}
}
#line 2693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 1016 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
	if(typecheck((yyvsp[-2].expAttr).type, (yyvsp[0].expAttr).type)){
	  		(yyval.expAttr).loc = currentSymTable->gentemp(((yyvsp[-2].expAttr).type)->middle);
	  		char *arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  		char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  		char *res = strdup(((yyval.expAttr).loc)->name);
	  		quad_array->emit(SR, res, arg1, arg2,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc);
	  		(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  	}
}
#line 2708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 1027 "ass5_15CS10061.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 2714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 1028 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		(yyval.expAttr).TL = makelist(nextInstr);
	  	char *arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  	char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  	quad_array->emit(goto_LT, 0, arg1, arg2,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,0);
	  	(yyval.expAttr).FL = makelist(nextInstr);
	  	quad_array->emit(_GOTO, 0, 0, 0, 0);
	  	(yyval.expAttr).type = newNode(_BOOL,-1);	
}
#line 2728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 1037 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		(yyval.expAttr).TL = makelist(nextInstr);
	  	char *arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  	char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  	quad_array->emit(goto_GT, 0, arg1, arg2,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,0);
	  	(yyval.expAttr).FL = makelist(nextInstr);
	  	quad_array->emit(_GOTO, 0, 0, 0, 0);
	  	(yyval.expAttr).type = newNode(_BOOL,-1);
}
#line 2742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 1046 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		(yyval.expAttr).TL = makelist(nextInstr);
	  	char *arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  	char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  	quad_array->emit(goto_GTE, 0, arg1, arg2,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,0);
	  	(yyval.expAttr).FL = makelist(nextInstr);
	  	quad_array->emit(_GOTO, 0, 0, 0, 0);
	  	(yyval.expAttr).type = newNode(_BOOL,-1);
}
#line 2756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 1055 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		(yyval.expAttr).TL = makelist(nextInstr);
	  	char *arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  	char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  	quad_array->emit(goto_LTE, 0, arg1, arg2,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,0);
	  	(yyval.expAttr).FL = makelist(nextInstr);
	  	quad_array->emit(_GOTO, 0, 0, 0, 0);
	  	(yyval.expAttr).type = newNode(_BOOL,-1);
}
#line 2770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 1065 "ass5_15CS10061.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 2776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 1066 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		(yyval.expAttr).TL = makelist(nextInstr);
	  	char *arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  	char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  	quad_array->emit(goto_EQ, 0, arg1, arg2, (yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,0);
	  	(yyval.expAttr).FL = makelist(nextInstr);
	  	quad_array->emit(_GOTO, 0, 0, 0, 0);
	  	(yyval.expAttr).type = newNode(_BOOL,-1);
}
#line 2790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 1075 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		(yyval.expAttr).TL = makelist(nextInstr);
	  	char *arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  	char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  	quad_array->emit(goto_NEQ, 0, arg1, arg2, (yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,0);
	  	(yyval.expAttr).FL = makelist(nextInstr);
	  	quad_array->emit(_GOTO, 0, 0, 0, 0);
	  	(yyval.expAttr).type = newNode(_BOOL,-1);
}
#line 2804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 1086 "ass5_15CS10061.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 2810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 1087 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		if(typecheck((yyvsp[-2].expAttr).type, (yyvsp[0].expAttr).type)){
	  		(yyval.expAttr).loc = currentSymTable->gentemp(((yyvsp[-2].expAttr).type)->middle);
	  		char *arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  		char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  		char *res = strdup(((yyval.expAttr).loc)->name);
	  		quad_array->emit(BW_AND, res, arg1, arg2,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc);
	  		(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  	}
}
#line 2825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 1098 "ass5_15CS10061.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 2831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 1099 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		if(typecheck((yyvsp[-2].expAttr).type, (yyvsp[0].expAttr).type)){
	  		(yyval.expAttr).loc = currentSymTable->gentemp(((yyvsp[-2].expAttr).type)->middle);
	  		char *arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  		char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  		char *res = strdup(((yyval.expAttr).loc)->name);
	  		quad_array->emit(BW_XOR, res, arg1, arg2,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc);
	  		(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  	}
}
#line 2846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 1110 "ass5_15CS10061.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 2852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 1111 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		if(typecheck((yyvsp[-2].expAttr).type, (yyvsp[0].expAttr).type)){
	  		(yyval.expAttr).loc = currentSymTable->gentemp(((yyvsp[-2].expAttr).type)->middle);
	  		char *arg1 = strdup(((yyvsp[-2].expAttr).loc)->name);
	  		char *arg2 = strdup(((yyvsp[0].expAttr).loc)->name);
	  		char *res = strdup(((yyval.expAttr).loc)->name);
	  		quad_array->emit(BW_INOR, res, arg1, arg2,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc);
	  		(yyval.expAttr).type = (yyvsp[-2].expAttr).type;
	  	}
}
#line 2867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 1122 "ass5_15CS10061.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 2873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 1123 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		backpatch((yyvsp[-3].expAttr).TL,(yyvsp[-1].instr));
	  	(yyval.expAttr).FL = merge((yyvsp[-3].expAttr).FL, (yyvsp[0].expAttr).FL);
	  	(yyval.expAttr).TL = (yyvsp[0].expAttr).TL;
	  	(yyval.expAttr).type = newNode(_BOOL,-1);
}
#line 2884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 1130 "ass5_15CS10061.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 2890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 1131 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		backpatch((yyvsp[-3].expAttr).FL,(yyvsp[-1].instr));
	  	(yyval.expAttr).TL = merge((yyvsp[-3].expAttr).TL,(yyvsp[0].expAttr).TL);
	  	(yyval.expAttr).FL = (yyvsp[0].expAttr).FL;
	  	(yyval.expAttr).type = newNode(_BOOL,-1);
}
#line 2901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 1138 "ass5_15CS10061.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 2907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 1139 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		(yyval.expAttr).loc = currentSymTable->gentemp(((yyvsp[-4].expAttr).type)->middle);
	  	(yyval.expAttr).type = (yyvsp[-4].expAttr).type;
	  	char *res = strdup(((yyval.expAttr).loc)->name);
	  	char *arg1 = strdup(((yyvsp[0].expAttr).loc)->name);
	  	quad_array->emit(res, arg1,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc);
	  	listNode *l = makelist(nextInstr);
	  	quad_array->emit(_GOTO, 0, 0, 0,0);
	  	backpatch((yyvsp[-3].NAttr),nextInstr);
	  	res = strdup(((yyval.expAttr).loc)->name);
	  	arg1 = strdup(((yyvsp[-4].expAttr).loc)->name);
	  	quad_array->emit(res, arg1,(yyvsp[-4].expAttr).loc,(yyval.expAttr).loc);
	  	l = merge(l,makelist(nextInstr));
	  	quad_array->emit(_GOTO, 0, 0, 0,0);
	  	backpatch((yyvsp[-7].NAttr),nextInstr);
	  	conv2Bool(&(yyvsp[-8].expAttr));
	  	backpatch((yyvsp[-8].expAttr).TL,(yyvsp[-5].instr));
	  	backpatch((yyvsp[-8].expAttr).FL,(yyvsp[-1].instr));
	  	backpatch(l,nextInstr);
}
#line 2932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 1160 "ass5_15CS10061.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 2938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 1161 "ass5_15CS10061.y" /* yacc.c:1646  */
    {	
	if(isLeft == 1)
	{
		char *arg1 = strdup(((yyvsp[0].expAttr).loc)->name);
		char *res = strdup(((yyvsp[-2].expAttr).loc)->name);
		quad_array->emit(LEFT_STAR, res, arg1, 0, (yyvsp[0].expAttr).loc, 0, (yyvsp[-2].expAttr).loc);
	}
	else{
		if(typecheck((yyvsp[-2].expAttr).type,(yyvsp[0].expAttr).type)){
			// if matrix element is being assigned
	  		if((yyvsp[-2].expAttr).loc1){
		  		//printf("%s\n",($1.loc)->name);
		  		char *arg1 = strdup(((yyvsp[-2].expAttr).array)->name);
		  		char *arg2 = strdup(((yyvsp[-2].expAttr).loc1)->name);
		  		char *res = strdup(((yyvsp[0].expAttr).loc)->name);
		  		quad_array->emit(BRACKET_EQ, res, arg1, arg2,(yyvsp[-2].expAttr).loc,(yyvsp[-2].expAttr).loc1,(yyvsp[0].expAttr).loc);
	  		}
	  		else{
		  		char *arg1 = strdup(((yyvsp[0].expAttr).loc)->name);
			  	char *res = strdup(((yyvsp[-2].expAttr).loc)->name);
			  	quad_array->emit(res, arg1,(yyvsp[0].expAttr).loc,(yyvsp[-2].expAttr).loc);
	  		}
	  	}
	  	else{
	  		symbolTableRow *temp1, *temp2;
	  		// check for type conversion
	  		if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _DOUBLE){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"dbl2int(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, (yyvsp[0].expAttr).loc, temp1);
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _INT && ((yyvsp[0].expAttr).type)->middle == _CHAR){
	  			temp1 = currentSymTable->gentemp(_CHAR);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2char(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, (yyvsp[-2].expAttr).loc, temp1);
	  			
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _DOUBLE && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_INT);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"dbl2int(%s)",((yyvsp[-2].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1,(yyvsp[-2].expAttr).loc,temp1);
	  		}
	  		else if(((yyvsp[-2].expAttr).type)->middle == _CHAR && ((yyvsp[0].expAttr).type)->middle == _INT){
	  			temp1 = currentSymTable->gentemp(_CHAR);
	  			char *arg1 = new char[100];
	  			sprintf(arg1,"int2char(%s)",((yyvsp[0].expAttr).loc)->name);
	  			char *res = strdup(temp1->name);
	  			quad_array->emit(res, arg1, (yyvsp[0].expAttr).loc, temp1);
	  		}
	  		// if array element is assigned to some variable
	  		if((yyvsp[-2].expAttr).loc1){
		  		//printf("%s\n",($1.loc)->name);
		  		char *arg1 = strdup(((yyvsp[-2].expAttr).array)->name);
		  		char *arg2 = strdup(((yyvsp[-2].expAttr).loc1)->name);
		  		char *res = strdup((temp1)->name);
		  		quad_array->emit(BRACKET_EQ,res, arg1, arg2,(yyvsp[-2].expAttr).loc,(yyvsp[-2].expAttr).loc1,(yyvsp[0].expAttr).loc );
	  		}
	  		else{
		  		char *arg1 = strdup((temp1)->name);
			  	char *res = strdup(((yyvsp[-2].expAttr).loc)->name);
			  	quad_array->emit(res, arg1,(yyvsp[0].expAttr).loc,(yyvsp[-2].expAttr).loc);
	  		}
	  	}
	}
	leftOrRight = 1;
	isLeft = 0;
	starCount =0;
}
#line 3017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 1236 "ass5_15CS10061.y" /* yacc.c:1646  */
    {leftOrRight = 2;}
#line 3023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 1237 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 1238 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 1239 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 1240 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 1241 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 1242 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 1243 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 1244 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 1245 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 1246 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 1248 "ass5_15CS10061.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 3089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 1249 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 1251 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 1256 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 1257 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		if(flag1 == 1 && flag2 == 0){
	  		treeNodeType *temp = newNode(((yyvsp[-2].varAttr).type)->middle,-1);
	  		char *temp1 = strdup("retVal");
	  		symbolTableRow x(temp1,temp,0,(yyvsp[-2].varAttr).width,-1,0);
	  		tempUseSymTable->insert(x);
	  		temp = newNode(_FUNC,-1);
	  		symbolTableRow y((yyvsp[-1].varAttr).var,temp,0,0,-1,tempUseSymTable);
	  		globalSymTable->insert(y);
	  	}
	  	flag1 = 0;
	  	flag2 = 0;
	  	c = 0;
}
#line 3126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 1272 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		if(flag1 == 0 || flag2 == 0){
	  		(yyval.varAttr).type = (yyvsp[0].varAttr).type;
	  		(yyval.varAttr).width = (yyvsp[0].varAttr).width;
	  		t = (yyval.varAttr).type;
	  		w = (yyval.varAttr).width;
	  	}
}
#line 3139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 1280 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 1282 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
	if(flag1 == 1 && flag2 == 0)
	  		(yyval.varAttr).var = (yyvsp[0].varAttr).var;
}
#line 3154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 1286 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 1288 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		if(flag1 == 0){
	  		treeNodeType *temp = newNode(t->middle,-1);
	  		temp = mergeNode((yyvsp[0].varAttr).type,temp);
	  		int temp_flag=0;
	  		int temp_size;
	  		if(temp->middle == _PTR)
	  			temp_size = SIZE_OF_PTR;
	  		else{
		  		switch(t->middle){
		  			case _INT : temp_size = SIZE_OF_INT;
		  					   break;
		  			case _DOUBLE : temp_size = SIZE_OF_DOUBLE;
		  						  break;
		  			case _CHAR   : temp_size = SIZE_OF_CHAR;
		  						  break;
		  			case _PTR : temp_size = SIZE_OF_PTR;
		  						break;
		  			case _MATRIX : temp_size = SIZE_OF_DOUBLE;
		  						temp_flag=1;
		  						break; 	
	  			}
	  		}
	  		temp_size = temp_size * (yyvsp[0].varAttr).width;
	  		// adding the extra 8 for rows and cols 
	  		if(temp_flag==1)
	  			temp_size+=8;
	  		symbolTableRow x((yyvsp[0].varAttr).var,temp,0,temp_size,-1,0);
	  		currentSymTable->insert(x);
	  		//currentSymTableprint_table();
	  	}
	  	else if(flag1 == 1 && flag2 == 0){
	  		(yyval.varAttr).var = (yyvsp[0].varAttr).var;
	  	}
}
#line 3200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1323 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		if(flag1 == 0){
	  		treeNodeType *temp = newNode(t->middle,-1);
	  		temp = mergeNode((yyvsp[-2].varAttr).type,temp);
	  		void *value;
	  		int *v1;
	  		double *v2;
	  		char *v3;
	  		int temp_size;
	  		int temp_flag=0;
	  		vector<double> *vec;
	  		//cout << $3.doubleData << endl;
	  		switch(t->middle){
	  			case _INT : v1 = (int *)malloc(sizeof(int));
	  					   (*v1) = (yyvsp[0].initAttr).intData; 	
	  					   value = (void *)v1;
	  					   temp_size = SIZE_OF_INT;
	  					   break;
	  			case _DOUBLE : v2 = (double *)malloc(sizeof(double));
		  					   (*v2) = (yyvsp[0].initAttr).doubleData;
		  					   //printf("%lf\n",$3.doubleData); 	
		  					   value = (void *)v2;
		  					   //printf("%lf\n",*v2);
		  					   temp_size = SIZE_OF_DOUBLE;
		  					   break;
	  			case _CHAR   :v3 = (char *)malloc(sizeof(char));
	  					   (*v3) = (yyvsp[0].initAttr).charData; 	
	  					   value = (void *)v3;
	  					   temp_size = SIZE_OF_CHAR;
	  					   break;
	  			case _MATRIX : temp_size = SIZE_OF_DOUBLE;
	  							temp_flag=1;
	  							vec = (yyvsp[0].initAttr).p;
	  							value = (void *)vec;
	  							break;
	  			case _PTR : temp_size = SIZE_OF_PTR;
	  						break;
	  			default     : value = 0; 
	  						//cout << "Here"<< endl;
	  						break;	
	  		}
	  		temp_size = temp_size * (yyvsp[-2].varAttr).width;
	  		// adding 8 for rows and cols
	  		if(temp_flag==1)
	  			temp_size +=8;
	  		symbolTableRow x((yyvsp[-2].varAttr).var,temp,value,temp_size,-1,0);
	  		currentSymTable->insert(x);
	  		// emitting the quad for assignment of newly declared variable
	  		quad_array->emit((yyvsp[-2].varAttr).var, (currentSymTable->table[(currentSymTable->curr_length)-1].name), (currentSymTable->table), &x);
	  	}	
}
#line 3256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 1375 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
	if(flag2 == 0 || flag1 == 0){
	  		(yyval.varAttr).type = newNode(_VOID,-1);
	  		(yyval.varAttr).width = 0;
	 }
}
#line 3267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 1381 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		if(flag2 == 0 || flag1 == 0){
	  		(yyval.varAttr).type = newNode(_CHAR,-1);
	  		(yyval.varAttr).width = SIZE_OF_CHAR;
	  	}	
}
#line 3278 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1387 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3284 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 1388 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		if(flag2 == 0 || flag1 == 0){
	  		(yyval.varAttr).type = newNode(_INT,-1);
	  		(yyval.varAttr).width = SIZE_OF_INT;
	  	}
}
#line 3295 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 1394 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3301 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1395 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1396 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		if(flag2 == 0 || flag1 == 0){
	  		(yyval.varAttr).type = newNode(_DOUBLE,-1);
	  		(yyval.varAttr).width = SIZE_OF_DOUBLE;
	  	}
}
#line 3318 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 1402 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		if(flag2 == 0 || flag1 == 0){
	  		(yyval.varAttr).type = newNode(_MATRIX,-1);
	  		(yyval.varAttr).width = 2*SIZE_OF_INT;
	  	}
}
#line 3329 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 1408 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3335 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1409 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3341 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1410 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1412 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
	if(flag1 == 0 || flag2 == 0){
	  	(yyval.varAttr).type = mergeNode((yyvsp[0].varAttr).type,(yyvsp[-1].varAttr).type);
	  	(yyval.varAttr).width = (yyvsp[0].varAttr).width;
	  	(yyval.varAttr).var = (yyvsp[0].varAttr).var;
	}
}
#line 3359 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1419 "ass5_15CS10061.y" /* yacc.c:1646  */
    {	
			(yyval.varAttr).type = (yyvsp[0].varAttr).type;
	  		(yyval.varAttr).var = (yyvsp[0].varAttr).var;
	  		(yyval.varAttr).width = (yyvsp[0].varAttr).width;
}
#line 3369 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1425 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		if(flag1 == 0 || flag2 == 0){
	  		(yyval.varAttr).var = (yyvsp[0].idAttr).var;
		  	(yyval.varAttr).type = 0;
		  	(yyval.varAttr).width = 1;
		  	if(c == 0){
		  		symbolTableRow *t = currentSymTable->lookup((yyvsp[0].idAttr).var);
			  	if(t){
			  		flag2 = 1;
			  		tempUseSymTable = (t->nestedTable);	// Set flag to handle multiple declaration
			  	}														
			  	else                              // (to be used in other actions)              
			  		flag2 = 0; 
			  	c++;	
		  	}
	  	}		
}
#line 3391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1442 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1443 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
	
	if(flag1 == 0 || flag2 == 0){
		//if(($1.type)->middle !=3)
		//	temp = newNode(_ARR,$3.val.intData);
		//else
	  	treeNodeType *temp = newNode(_MATRIX,(yyvsp[-1].expAttr).val.intData); // considered only matrix type arrays 
	  	(yyval.varAttr).type = mergeNode((yyvsp[-3].varAttr).type,temp);
	  	(yyval.varAttr).width = (yyvsp[-3].varAttr).width * (yyvsp[-1].expAttr).val.intData;
	  	(yyval.varAttr).var = (yyvsp[-3].varAttr).var;
	}
}
#line 3414 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1455 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		if(flag1 == 0 || flag2 == 0){
	  		(yyval.varAttr).var = (yyvsp[-2].varAttr).var;
		  	(yyval.varAttr).type = (yyvsp[-2].varAttr).type;
		  	(yyval.varAttr).width = (yyvsp[-2].varAttr).width;
	  	}
}
#line 3426 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1462 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		flag1 = 1;										// Flag1 is set for variable declaration
	  	(yyval.varAttr).var = (yyvsp[-3].varAttr).var;
	  	(yyval.varAttr).type = 0;
	  	(yyval.varAttr).width = 1;
}
#line 3437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1468 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1469 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		flag1 = 1;
	  	if(flag2 == 0)
	  		tempUseSymTable = createSymbolTable();	// Generate symbol table for new function
	  	(yyval.varAttr).var = (yyvsp[-2].varAttr).var;
	  	(yyval.varAttr).type = 0;
	  	(yyval.varAttr).width = 1;
}
#line 3456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1478 "ass5_15CS10061.y" /* yacc.c:1646  */
    {(yyval.varAttr).type = newNode(_PTR,-1);}
#line 3462 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1479 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		treeNodeType *temp = newNode(_PTR,-1);
	  	(yyval.varAttr).type = mergeNode((yyvsp[0].varAttr).type,temp);
}
#line 3471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1484 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1486 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		if(flag2 == 0){	
			//cout << "Parameter" <<endl;									// An indication of the fact that function has not been
	  		tempUseSymTable = createSymbolTable();				// declared previously
	  		symbolTableRow x((yyvsp[0].varAttr).var,(yyvsp[0].varAttr).type,0,(yyvsp[0].varAttr).width,-1,0); //Insert in sym tab of function(offset comp.in insert)
	  		tempUseSymTable->insert(x);
	  	}
}
#line 3490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1494 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		if(flag2 == 0){
	  		symbolTableRow x((yyvsp[0].varAttr).var,(yyvsp[0].varAttr).type,0,(yyvsp[0].varAttr).width,-1,0); //Insert in sym tab of function(offset comp. in insert)
	  		tempUseSymTable->insert(x);
	  	}
}
#line 3501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1501 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		if(flag2 == 0){										// An indication that function has not been declared prev
	  		(yyval.varAttr).type = mergeNode((yyvsp[0].varAttr).type,(yyvsp[-1].varAttr).type);
	  		(yyval.varAttr).var = (yyvsp[0].varAttr).var;
	  		(yyval.varAttr).width = (yyvsp[-1].varAttr).width*(yyvsp[0].varAttr).width;
	  	}	
}
#line 3513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1508 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1510 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1511 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1513 "ass5_15CS10061.y" /* yacc.c:1646  */
    {(yyval.initAttr) = (yyvsp[0].expAttr).val;}
#line 3537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1514 "ass5_15CS10061.y" /* yacc.c:1646  */
    {(yyval.initAttr)=(yyvsp[-1].initAttr); counter++;}
#line 3543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1516 "ass5_15CS10061.y" /* yacc.c:1646  */
    {(yyval.initAttr)=(yyvsp[0].initAttr);}
#line 3549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1517 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
	//cout << "Initialise ho jaa" << endl;
	vector <double> pq = *((yyvsp[-2].initAttr).p);
	vector <double> pqr = *((yyvsp[0].initAttr).p);
	int i=0;
	// Push back elements stored in intializer row to initializer row list's vector
	for(i=0;i<pqr.size();i++){
		pq.push_back(pqr[i]);
		//cout << pqr[i];
	}
	(yyval.initAttr).p = &pq;
}
#line 3566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1530 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
	vector <double> pq ;
	
	pq.push_back((yyvsp[0].initAttr).doubleData); 
	matI[counter].push_back((yyvsp[0].initAttr).doubleData);	// push back data in the global vector of vectors
	(yyval.initAttr).p = &pq;
}
#line 3578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1537 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
	vector <double> pq = *((yyvsp[-3].initAttr).p);
	// considered initializer to have double data
	pq.push_back((yyvsp[0].initAttr).doubleData);
	//cout << pq.size()<< "Size"<<endl;
	matI[counter].push_back((yyvsp[0].initAttr).doubleData); 	// push back data in the global vector of vectors
	(yyval.initAttr).p = &pq;
}
#line 3591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1546 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1547 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1549 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1551 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1552 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1554 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1555 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1557 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1558 "ass5_15CS10061.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 3645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1559 "ass5_15CS10061.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 3651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1560 "ass5_15CS10061.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 3657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1561 "ass5_15CS10061.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 3663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1562 "ass5_15CS10061.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 3669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1564 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1565 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1566 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1568 "ass5_15CS10061.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[-1].expAttr);}
#line 3693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1570 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1571 "ass5_15CS10061.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 3705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1573 "ass5_15CS10061.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 3711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1574 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		backpatch((yyvsp[-2].expAttr).NL,(yyvsp[-1].instr));
		(yyval.expAttr) = (yyvsp[0].expAttr);
}
#line 3720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1579 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1580 "ass5_15CS10061.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 3732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1582 "ass5_15CS10061.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[-1].expAttr);}
#line 3738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1584 "ass5_15CS10061.y" /* yacc.c:1646  */
    { 
		// M and N augmented, IF_CONFLICT used to remove ambiguity of grammar
		backpatch((yyvsp[-4].NAttr),nextInstr); 	// backapatch N and next instruction
	  	conv2Bool(&(yyvsp[-5].expAttr));			// convert expression to bool
	  	backpatch((yyvsp[-5].expAttr).TL,(yyvsp[-2].instr));	//if expression is true go to statement, hence backpatch
	  	(yyval.expAttr).NL = merge((yyvsp[-1].expAttr).NL,(yyvsp[-5].expAttr).FL);		// nextlist = merger of next statements next list and expression's false list
	  	(yyval.expAttr).NL = merge((yyval.expAttr).NL,(yyvsp[0].NAttr));		// finally nextlist is merged version of previous;y generated nextlist and last N
}
#line 3751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1592 "ass5_15CS10061.y" /* yacc.c:1646  */
    { 
		// M and N Augmented
		listNode *l = 0;
	  	if(((yyvsp[-8].expAttr).type)->middle!=_BOOL){
	  		l = makelist(nextInstr);
	  		quad_array->emit(_GOTO, 0, 0, 0,0);
	  	}
	  	backpatch((yyvsp[-7].NAttr),nextInstr); 
	  	conv2Bool(&(yyvsp[-8].expAttr));		// generate goto
	  	backpatch((yyvsp[-8].expAttr).TL,(yyvsp[-5].instr));	// if expression is true check for next instruction before else
	  	backpatch((yyvsp[-8].expAttr).FL,(yyvsp[-1].instr));	// if expression is false check for next instruction after else
	  	listNode *temp = merge((yyvsp[-3].NAttr),(yyvsp[-4].expAttr).NL);	// merge nextlist of statement inside if and N after if
	  	(yyval.expAttr).NL = merge(temp,(yyvsp[0].expAttr).NL);		// nextlist of final expression = merged version of temp and nextlist of last statement
	  	(yyval.expAttr).NL = merge((yyval.expAttr).NL,l);		
}
#line 3771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1607 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1609 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		// M and N augmented grammar 
		char *res = new char[10];
	  	sprintf(res,"%d",(yyvsp[-6].instr));
	  	quad_array->emit(_GOTO, res, 0,0,0);
	  	backpatch((yyvsp[-3].NAttr),nextInstr);	// backpatch N
	  	conv2Bool(&(yyvsp[-4].expAttr));			// convert expression to bool
	  	backpatch((yyvsp[0].expAttr).NL,(yyvsp[-6].instr));	// backpatch statement's next list and first M
	  	backpatch((yyvsp[-4].expAttr).TL,(yyvsp[-1].instr));	// if expression is true go to statement
	  	(yyval.expAttr).NL = (yyvsp[-4].expAttr).FL;			// next list  = falselist of expression
}
#line 3793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1620 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		// M and N augmented grammar 
		backpatch((yyvsp[-2].NAttr),nextInstr);
	  	conv2Bool(&(yyvsp[-3].expAttr));		// convert condition to bool type and generate gotos
	  	backpatch((yyvsp[-3].expAttr).TL,(yyvsp[-8].instr));	// if condition is true go back to 2 and execute again
	  	backpatch((yyvsp[-7].expAttr).NL,(yyvsp[-6].instr));	// next list of statement backpatched with M 
	  	(yyval.expAttr).NL = (yyvsp[-3].expAttr).FL;			// nextlist =  falselist of expression in while
}
#line 3806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1628 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		// M and N augmented grammar 
		backpatch((yyvsp[-3].NAttr),(yyvsp[-8].instr));	// backpatch N with first M, to see that after updation we do the condition check
	  	listNode *l = makelist(nextInstr);
	  	quad_array->emit(_GOTO, 0, 0,0,0);
	  	(yyvsp[0].expAttr).NL = merge((yyvsp[0].expAttr).NL,l);	// next list of statement is backpatched with nextInstruction
	  	backpatch((yyvsp[0].expAttr).NL,(yyvsp[-5].instr));	// backpatch nextlist of statement with second M, i.e., after executing statement do updation
	  	backpatch((yyvsp[-6].NAttr),nextInstr);	// backpatch N with next instruction
	  	conv2Bool(&(yyvsp[-7].expAttr));			// condition check is in second expression
	  	backpatch((yyvsp[-7].expAttr).TL,(yyvsp[-1].instr));	// if expression is true to goto next instruction
	  	(yyval.expAttr).NL = (yyvsp[-7].expAttr).FL;			// next list is falselist of expression
}
#line 3823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1640 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1642 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1643 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1644 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1645 "ass5_15CS10061.y" /* yacc.c:1646  */
    {quad_array->emit(_RETURN, 0, 0, 0, 0);}
#line 3853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1646 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
			char *arg1 = strdup(((yyvsp[-1].expAttr).loc)->name);
	  		quad_array->emit(RETURN_EXP, 0, arg1, (yyvsp[-1].expAttr).loc, 0);
}
#line 3862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1651 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1652 "ass5_15CS10061.y" /* yacc.c:1646  */
    {(yyval.expAttr)=(yyvsp[0].expAttr);}
#line 3874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1654 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1655 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1657 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1658 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1660 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1661 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
	// O augmented
	currentSymTable = globalSymTable;
}
#line 3913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1666 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1667 "ass5_15CS10061.y" /* yacc.c:1646  */
    {}
#line 3925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1669 "ass5_15CS10061.y" /* yacc.c:1646  */
    {
		currentSymTable = tempUseSymTable; // As we are entering the function current should point to symbol table of function
		//current->print_table();
		//printf("Yes\n");
		int i;
		char *t;
		for(i=0;i<=globalSymTable->curr_length;i++){
			if((((globalSymTable->table)[i]).nestedTable) == currentSymTable){
				t = strdup(((globalSymTable->table)[i]).name);
				break;
			}
		}
		quad_array->emit(Function, 0, t, 0,((globalSymTable->table)+i),0,0);
		flag1 = 0;
		flag2 = 0;
		c = 0;
		//printf("Yes\n");
}
#line 3948 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3952 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 1688 "ass5_15CS10061.y" /* yacc.c:1906  */


void yyerror(const char *s) {
    printf("Error occured due to : %s\n",s);
}
