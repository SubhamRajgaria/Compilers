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
#line 1 "ass3_15CS10061.y" /* yacc.c:339  */

	#define YYSTYPE double
	#define YYDEBUG 1
	#include <ctype.h>
	#include <stdio.h>
	extern int yylex();
	void yyerror(char *s);

#line 75 "ass3_15CS10061.tab.c" /* yacc.c:339  */

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
   by #include "ass3_15CS10061.tab.h".  */
#ifndef YY_YY_ASS3_15CS10061_TAB_H_INCLUDED
# define YY_YY_ASS3_15CS10061_TAB_H_INCLUDED
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
    IDENTIFIER = 258,
    CONSTANT = 259,
    STRING_LITERAL = 260,
    PUNCTUATOR = 261,
    PRE = 282,
    POST = 283,
    NEG = 284,
    POINT = 285
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 10 "ass3_15CS10061.y" /* yacc.c:355  */

	int intval

#line 130 "ass3_15CS10061.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ASS3_15CS10061_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 145 "ass3_15CS10061.tab.c" /* yacc.c:358  */

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
#define YYFINAL  27
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   570

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  78
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  165
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  261

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   310

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    36,    22,     2,
      43,    44,    34,    33,     7,    32,    47,    35,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     8,    65,
      26,     9,    28,    51,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    45,     2,    46,    23,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    63,    50,    64,     2,     2,     2,     2,
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
       5,     6,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    24,    25,    27,    29,    30,    31,
      37,    38,    39,    40,    41,    42,    48,    49,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    35,    35,    36,    37,    38,    40,    41,    42,    43,
      44,    45,    46,    47,    49,    50,    52,    53,    55,    56,
      57,    58,    60,    61,    62,    63,    65,    66,    67,    68,
      69,    71,    72,    73,    75,    76,    77,    79,    80,    81,
      82,    83,    85,    86,    87,    90,    91,    93,    94,    97,
      98,   100,   101,   103,   104,   106,   107,   109,   110,   112,
     113,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   127,   128,   130,   131,   133,   134,   135,   137,
     138,   139,   140,   142,   143,   145,   146,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   160,   161,
     162,   163,   164,   165,   167,   168,   170,   171,   172,   173,
     175,   176,   178,   179,   181,   182,   184,   185,   187,   188,
     190,   191,   193,   194,   196,   197,   198,   200,   201,   203,
     204,   205,   206,   207,   208,   210,   211,   212,   214,   215,
     216,   218,   219,   221,   222,   224,   225,   226,   227,   229,
     230,   231,   232,   234,   235,   236,   237,   239,   240,   242,
     243,   245,   247,   248,   250,   251
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "PUNCTUATOR", "','", "':'", "'='", "\"*=\"", "\"/=\"",
  "\"%=\"", "\"+=\"", "\"-=\"", "\"<<=\"", "\">>=\"", "\"&=\"", "\"^=\"",
  "\"|=\"", "\"&&\"", "\"||\"", "'&'", "'^'", "\"==\"", "\"!=\"", "'<'",
  "\"<=\"", "'>'", "\">=\"", "\"<<\"", "\">>\"", "'-'", "'+'", "'*'",
  "'/'", "'%'", "\"++\"", "\"--\"", "PRE", "POST", "NEG", "POINT", "'('",
  "')'", "'['", "']'", "'.'", "\"->\"", "\".'\"", "'|'", "'?'", "\"void\"",
  "\"char\"", "\"short\"", "\"int\"", "\"long\"", "\"float\"",
  "\"double\"", "\"Matrix\"", "\"signed\"", "\"unsigned\"", "\"Bool\"",
  "'{'", "'}'", "';'", "\"case\"", "\"default :\"", "\"if\"", "\"else\"",
  "\"switch\"", "\"while\"", "\"do\"", "\"for\"", "\"goto\"",
  "\"continue\"", "\"break\"", "\"return\"", "$accept",
  "primary_expression", "postfix_expression",
  "argument_expression_list_opt", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "AND_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression_opt",
  "assignment_expression", "assignment_operator", "expression_opt",
  "expression", "constant_expression", "declaration_specifiers_opt",
  "declaration", "declaration_specifiers", "init_declarator_list_opt",
  "init_declarator_list", "init_declarator", "type_specifier",
  "declarator", "direct_declarator", "pointer_opt", "pointer",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list_opt", "identifier_list", "initializer",
  "initializer_row_list", "initializer_row", "designation_opt",
  "designation", "designation_list", "designator", "statement",
  "labeled_statement", "compound_statement", "block_item_list_opt",
  "block_item_list", "block_item", "expression_statement",
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list_opt", "declaration_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,    44,    58,    61,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,    38,    94,   274,   275,    60,   276,    62,   277,
     278,   279,    45,    43,    42,    47,    37,   280,   281,   282,
     283,   284,   285,    40,    41,    91,    93,    46,   286,   287,
     124,    63,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   123,   125,    59,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310
};
# endif

#define YYPACT_NINF -120

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-120)))

#define YYTABLE_NINF -164

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     497,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,    12,   497,     7,  -120,  -120,   -17,  -120,
     -17,  -120,   272,     8,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,    13,   145,  -120,   -17,   -49,   497,  -120,   -17,   -33,
    -120,  -120,  -120,  -120,   505,  -120,  -120,   501,   501,   -11,
    -120,   121,   551,   501,  -120,    -6,    11,     9,    -3,    33,
      15,    24,    20,    34,   -13,  -120,  -120,  -120,   168,  -120,
    -120,    32,   200,   501,  -120,  -120,  -120,   426,   501,    30,
      10,    73,   145,  -120,    26,  -120,  -120,  -120,   501,   501,
      96,    99,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,   501,  -120,  -120,   501,   501,   501,
     501,   501,   501,   501,   501,   501,   501,   501,   501,   501,
     501,   501,   501,   501,   501,   501,    98,   501,   318,    72,
      75,    79,   318,    80,   123,    59,    62,   501,    64,   501,
    -120,  -120,  -120,  -120,    66,   243,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,    12,    90,   497,  -120,    91,   133,    94,
    -120,  -120,  -120,  -120,   106,  -120,  -120,   -11,   -11,  -120,
    -120,  -120,   101,   501,  -120,   406,  -120,  -120,  -120,  -120,
    -120,  -120,    -6,    -6,    11,    11,     9,     9,     9,     9,
      -3,    -3,    33,  -120,    24,    20,    34,   340,   318,   149,
    -120,   501,   501,   501,    82,   365,  -120,  -120,  -120,    97,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
      73,   145,  -120,  -120,  -120,   501,  -120,   318,   442,   450,
     485,   118,   109,   501,  -120,  -120,  -120,  -120,   318,   318,
     318,   501,   501,   110,   107,  -120,  -120,   493,   115,   501,
     318,   116,   501,   119,  -120,  -120,   139,   318,   318,  -120,
    -120
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,   160,    82,    78,     0,   157,   159,   105,    79,
      81,    83,    85,     0,   104,    80,    77,     1,   158,   106,
      84,    85,     0,   164,    82,     0,   162,    99,   105,    98,
       2,     3,     4,    22,    25,    24,    23,     0,     0,   123,
       6,    18,    26,     0,    27,    31,    34,    37,    42,    45,
      47,    49,    51,    53,    55,    59,   116,    86,    73,   161,
     165,     0,   113,    58,    20,    19,    74,     0,     0,     0,
       0,   118,     0,   122,     0,   125,    11,    12,    15,     0,
       0,     0,    13,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,     0,    26,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,    73,     0,
       0,     0,    73,     0,     0,     0,     0,    73,     0,    72,
     143,   144,   129,   130,     0,    73,   141,   131,   132,   133,
     134,   100,   114,   111,     0,   107,   108,     0,   112,     0,
      57,     5,    75,    76,     0,   128,   117,   123,   123,   120,
     124,   126,     0,    14,    16,     0,     9,    10,    60,    28,
      29,    30,    33,    32,    35,    36,    38,    41,    39,    40,
      43,    44,    46,    48,    50,    52,    54,     0,    73,     0,
     137,     0,     0,     0,     0,    73,   153,   154,   155,     0,
     145,   138,   142,   110,   102,   109,   103,   115,   101,   127,
     119,     0,     8,    17,     7,     0,   135,    73,     0,     0,
       0,     0,     0,    73,   156,   121,    56,   136,    73,    73,
      73,     0,    73,     0,   146,   148,   149,     0,     0,    73,
      73,     0,    73,     0,   147,   150,     0,    73,    73,   152,
     151
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -120,  -120,  -120,  -120,  -120,   -26,  -120,    -4,     3,     4,
      -5,    14,    67,    63,    69,    70,    68,  -120,   -74,  -120,
     -32,  -120,  -105,   -47,    77,  -120,   -20,     5,  -120,  -120,
     166,  -120,    -7,  -120,   177,  -120,  -120,  -120,    51,  -120,
    -120,   -79,  -120,    40,    41,  -120,  -120,   126,  -119,  -120,
     178,  -120,  -120,    71,  -120,  -120,  -120,  -120,  -120,   197,
    -120,  -120,  -120
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    50,    51,   172,   173,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,   159,
      76,   104,   138,   139,   164,    25,    12,    34,    19,    20,
      21,    14,    31,    39,    23,    24,   154,   155,   156,   157,
     158,    67,    80,    81,    82,    83,    84,    85,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,    15,    16,
      17,    35,    36
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      66,    77,    33,   169,   163,    13,    22,    27,   124,   200,
      72,    37,    73,   204,    68,  -105,    70,    18,    74,    26,
      13,    75,    32,   114,   115,   116,   117,   105,   107,   108,
     109,    71,   209,   165,    78,   170,    79,   120,   125,   112,
     113,   160,   175,   110,   111,   162,    18,   121,   140,   106,
      66,    38,   105,   163,   123,  -105,   174,   118,   119,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
     122,    78,   178,    79,   166,   167,   151,   153,   197,   226,
     168,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   176,
     232,   105,   177,   179,   180,   181,   198,   162,   237,   186,
     187,   188,   189,   182,   183,   201,   184,   185,   202,   244,
     245,   246,   203,   205,   207,   140,   206,   208,   243,   210,
     211,   254,   190,   191,   214,   216,   217,   248,   259,   260,
     218,   223,   235,   162,   253,   222,   213,   256,    40,    41,
      42,   236,   219,   231,   228,   229,   230,   227,    86,    87,
     153,   241,   234,   257,    88,   162,    89,    43,    90,    91,
      92,   126,    41,    42,   242,   249,   250,    44,    45,    46,
     252,   255,    47,   258,   193,   233,    30,   192,    48,    66,
      43,   194,   196,   195,   247,    29,   162,   162,   162,   105,
      44,    45,    46,   152,   199,    47,   215,   220,    49,   221,
     171,    48,    28,    69,     0,   162,   212,     0,     0,     0,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    68,  -140,     0,   127,   128,   129,     0,   130,   131,
     132,   133,   134,   135,   136,   137,   126,    41,    42,     0,
       0,     0,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,     0,     0,    43,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    44,    45,    46,     0,     0,
      47,    32,     0,     0,     0,     0,    48,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    68,  -139,     0,   127,
     128,   129,     0,   130,   131,   132,   133,   134,   135,   136,
     137,   126,    41,    42,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,  -163,     0,     0,     0,     0,
      43,     0,     0,    40,    41,    42,     0,     0,   225,     0,
      44,    45,    46,     0,     0,    47,     0,     0,     0,     0,
       0,    48,    43,     0,     0,     0,     0,     0,    40,    41,
      42,     0,    44,    45,    46,     0,     0,    47,     0,     0,
       0,    68,     0,    48,   127,   128,   129,    43,   130,   131,
     132,   133,   134,   135,   136,   137,     0,    44,    45,    46,
       0,     0,    47,     0,     0,     0,     0,     0,    48,    40,
      41,    42,     0,     0,     0,     0,     0,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    43,    40,
      41,    42,     0,     0,     0,     0,     0,     0,    44,    45,
      46,     0,     0,    47,     0,    40,    41,    42,    43,    48,
       0,     0,   224,    40,    41,    42,     0,     0,    44,    45,
      46,     0,     0,    47,    43,     0,     0,     0,     0,    48,
     161,     0,    43,     0,    44,    45,    46,     0,     0,    47,
       0,     0,    44,    45,    46,    48,   238,    47,    40,    41,
      42,     0,     0,    48,   239,     0,    40,    41,    42,     0,
       0,     0,     0,     0,    40,    41,    42,    43,    40,    41,
      42,     0,     0,     0,     0,    43,     0,    44,    45,    46,
       0,     0,    47,    43,     0,    44,    45,    46,    48,   240,
      47,     0,     0,    44,    45,    46,    48,   251,    47,    46,
       0,     0,    47,     0,    48,     0,     0,     0,    48,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103
};

static const yytype_int16 yycheck[] =
{
      32,    48,    22,    82,    78,     0,    13,     0,    21,   128,
      43,     3,    45,   132,    63,     3,    36,    34,    44,    14,
      15,    47,     9,    26,    27,    28,    29,    53,    34,    35,
      36,    38,   137,     3,    45,     9,    47,    22,    51,    30,
      31,    73,    89,    32,    33,    77,    34,    23,    68,    53,
      82,    43,    78,   127,    20,    43,    88,    24,    25,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      50,    45,   104,    47,    64,    65,    44,    72,   125,   198,
       7,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,     3,
     205,   127,     3,   107,   108,   109,     8,   139,   227,   114,
     115,   116,   117,   110,   111,    43,   112,   113,    43,   238,
     239,   240,    43,    43,    65,   145,     3,    65,   233,    65,
      64,   250,   118,   119,    44,    44,     3,   242,   257,   258,
      46,   173,   221,   175,   249,    44,   153,   252,     3,     4,
       5,   225,    46,    71,   201,   202,   203,     8,    37,    38,
     155,    43,    65,    44,    43,   197,    45,    22,    47,    48,
      49,     3,     4,     5,    65,    65,    69,    32,    33,    34,
      65,    65,    37,    44,   121,   205,    20,   120,    43,   221,
      22,   122,   124,   123,   241,    18,   228,   229,   230,   225,
      32,    33,    34,     3,   127,    37,   155,   167,    63,   168,
      84,    43,    15,    35,    -1,   247,   145,    -1,    -1,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    -1,    66,    67,    68,    -1,    70,    71,
      72,    73,    74,    75,    76,    77,     3,     4,     5,    -1,
      -1,    -1,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,    -1,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    -1,    -1,
      37,     9,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    66,
      67,    68,    -1,    70,    71,    72,    73,    74,    75,    76,
      77,     3,     4,     5,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
      22,    -1,    -1,     3,     4,     5,    -1,    -1,     8,    -1,
      32,    33,    34,    -1,    -1,    37,    -1,    -1,    -1,    -1,
      -1,    43,    22,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,    32,    33,    34,    -1,    -1,    37,    -1,    -1,
      -1,    63,    -1,    43,    66,    67,    68,    22,    70,    71,
      72,    73,    74,    75,    76,    77,    -1,    32,    33,    34,
      -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    43,     3,
       4,     5,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    22,     3,
       4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,    -1,    -1,    37,    -1,     3,     4,     5,    22,    43,
      -1,    -1,    46,     3,     4,     5,    -1,    -1,    32,    33,
      34,    -1,    -1,    37,    22,    -1,    -1,    -1,    -1,    43,
      44,    -1,    22,    -1,    32,    33,    34,    -1,    -1,    37,
      -1,    -1,    32,    33,    34,    43,    44,    37,     3,     4,
       5,    -1,    -1,    43,    44,    -1,     3,     4,     5,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    22,     3,     4,
       5,    -1,    -1,    -1,    -1,    22,    -1,    32,    33,    34,
      -1,    -1,    37,    22,    -1,    32,    33,    34,    43,    44,
      37,    -1,    -1,    32,    33,    34,    43,    44,    37,    34,
      -1,    -1,    37,    -1,    43,    -1,    -1,    -1,    43,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,   104,   105,   109,   136,   137,   138,    34,   106,
     107,   108,   110,   112,   113,   103,   105,     0,   137,   112,
     108,   110,     9,   104,   105,   139,   140,     3,    43,   111,
       3,     4,     5,    22,    32,    33,    34,    37,    43,    63,
      79,    80,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    98,   119,    63,   128,
     104,   110,    43,    45,    83,    83,    98,   101,    45,    47,
     120,   121,   122,   123,   124,   125,    37,    38,    43,    45,
      47,    48,    49,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    99,    83,    85,    34,    35,    36,
      32,    33,    30,    31,    26,    27,    28,    29,    24,    25,
      22,    23,    50,    20,    21,    51,     3,    66,    67,    68,
      70,    71,    72,    73,    74,    75,    76,    77,   100,   101,
     104,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,    44,     3,   105,   114,   115,   116,   117,   118,    97,
      98,    44,    98,    96,   102,     3,    64,    65,     7,   119,
       9,   125,    81,    82,    98,   101,     3,     3,    98,    85,
      85,    85,    86,    86,    87,    87,    88,    88,    88,    88,
      89,    89,    90,    91,    92,    93,    94,   101,     8,   102,
     126,    43,    43,    43,   126,    43,     3,    65,    65,   100,
      65,    64,   131,   110,    44,   116,    44,     3,    46,    46,
     121,   122,    44,    98,    46,     8,   126,     8,   101,   101,
     101,    71,   100,   104,    65,   119,    96,   126,    44,    44,
      44,    43,    65,   100,   126,   126,   126,   101,   100,    65,
      69,    44,    65,   100,   126,    65,   100,    44,    44,   126,
     126
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    78,    79,    79,    79,    79,    80,    80,    80,    80,
      80,    80,    80,    80,    81,    81,    82,    82,    83,    83,
      83,    83,    84,    84,    84,    84,    85,    86,    86,    86,
      86,    87,    87,    87,    88,    88,    88,    89,    89,    89,
      89,    89,    90,    90,    90,    91,    91,    92,    92,    93,
      93,    94,    94,    95,    95,    96,    96,    97,    97,    98,
      98,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,   100,   100,   101,   101,   102,   103,   103,   104,
     105,   106,   106,   107,   107,   108,   108,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   110,   111,
     111,   111,   111,   111,   112,   112,   113,   114,   115,   115,
     116,   116,   117,   117,   118,   118,   119,   119,   120,   120,
     121,   121,   122,   122,   123,   124,   124,   125,   125,   126,
     126,   126,   126,   126,   126,   127,   127,   127,   128,   129,
     129,   130,   130,   131,   131,   132,   133,   133,   133,   134,
     134,   134,   134,   135,   135,   135,   135,   136,   136,   137,
     137,   138,   139,   139,   140,   140
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     4,     3,
       3,     2,     2,     2,     1,     0,     1,     2,     1,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     5,     1,     0,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     2,     1,     1,     0,     2,
       2,     1,     0,     1,     2,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       3,     4,     4,     4,     1,     0,     2,     1,     1,     2,
       2,     1,     1,     0,     1,     2,     1,     3,     1,     3,
       2,     4,     1,     0,     2,     1,     2,     3,     2,     1,
       1,     1,     1,     1,     1,     3,     4,     2,     3,     1,
       0,     1,     2,     1,     1,     2,     5,     7,     5,     5,
       7,     9,     8,     2,     2,     2,     3,     1,     2,     1,
       1,     4,     1,     0,     1,     2
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
#line 35 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("It is an identifier\n");}
#line 1507 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 36 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("It is a constant\n");}
#line 1513 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 37 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("It is a string literal\n");}
#line 1519 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 38 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("It is an expression\n ");}
#line 1525 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 40 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf ("postfix-expression -> primary_expression");}
#line 1531 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 41 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf ("postfix-expression -> postfix_expression[expression]");}
#line 1537 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 42 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf ("postfix-expression -> postfix_expression(expression)");}
#line 1543 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 43 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf ("postfix-expression.identifier");}
#line 1549 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 44 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf ("postfix-expression->identifier");}
#line 1555 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 45 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf ("postfix-expression++");}
#line 1561 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 46 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf ("postfix-expression--");}
#line 1567 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 47 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf ("postfix-expression.'");}
#line 1573 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 49 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("argument_optional->argument_expression_list");}
#line 1579 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 50 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("null");}
#line 1585 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 52 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("argument_expression_list-> assignment_expression");}
#line 1591 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 53 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("argument_expression_list->argument_expression_list   assignment_expression");}
#line 1597 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 55 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("unary_expression-> postfix_expression");}
#line 1603 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 56 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("unary_expression-> ++unary_expression");}
#line 1609 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 57 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("unary_expression-> -unary_expression");}
#line 1615 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 58 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("unary_expression-> unary_operator cast_expression");}
#line 1621 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 60 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("unary_operator -> & ");}
#line 1627 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 61 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("unary_operator -> * ");}
#line 1633 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 62 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("unary_operator -> + ");}
#line 1639 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 63 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("unary_operator -> - ");}
#line 1645 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 65 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("unary_operator -> & ");}
#line 1651 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 66 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("multiplicative-expression -> cast-expression");}
#line 1657 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 67 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("multiplicative-expression ->multiplicative-expression * cast-expression");}
#line 1663 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 68 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("multiplicative-expression ->multiplicative-expression / cast-expression");}
#line 1669 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 69 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("multiplicative-expression ->multiplicative-expression % cast-expression");}
#line 1675 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 71 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("additive_expression-> multiplicative_expression");}
#line 1681 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 72 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("additive_expression-> additive-expression + multiplicative_expression");}
#line 1687 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 73 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("additive_expression-> additive-expression - multiplicative_expression");}
#line 1693 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 75 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("shift_expression -> additive_expression");}
#line 1699 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 76 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("shift_expression -> shift_expression << additive_expression");}
#line 1705 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 77 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("shift_expression -> shift_expression >> additive_expression");}
#line 1711 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 79 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("relational_expression -> shift_expression");}
#line 1717 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 80 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("relational_expression -> relational-expression < shift_expression");}
#line 1723 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 81 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("relational_expression -> relational-expression > shift_expression");}
#line 1729 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 82 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("relational_expression -> relational-expression >= shift_expression");}
#line 1735 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 83 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("relational_expression -> relational-expression <= shift_expression");}
#line 1741 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 85 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("equality_expression -> relational_expression");}
#line 1747 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 86 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("equality_expression -> equality_expression == relational_expression");}
#line 1753 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 87 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("equality_expression -> equality_expression != relational_expression");}
#line 1759 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 90 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("AND-expression -> equality_expression");}
#line 1765 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 91 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("AND-expression ->AND-expression & equality_expression");}
#line 1771 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 93 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("exclusive_or_expression -> AND-expression");}
#line 1777 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 94 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("exclusive_or_expression -> exclusive_or_expression ^ AND-expression");}
#line 1783 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 97 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("inclusive_or_expression -> exclusive_or_expression");}
#line 1789 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 98 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("inclusive_or_expression -> inclusive_or_expression | exclusive_or_expression");}
#line 1795 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 100 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("logical-and-expression -> inclusive_or_expression");}
#line 1801 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 101 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("logical-and-expression ->logical-and-expression && inclusive_or_expression");}
#line 1807 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 103 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("logical-or-expression ->logical-and-expression");}
#line 1813 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 104 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("logical-or-expression -> logical-or-expression || logical-and-expression");}
#line 1819 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 106 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("conditional-expression -> logical-or-expression");}
#line 1825 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 107 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("conditional-expression -> logical-or-expression? expression : conditional_expression");}
#line 1831 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 109 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("assignment_expression_opt -> assignment_expression");}
#line 1837 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 110 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("assignment_expression_opt -> empty");}
#line 1843 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 112 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("assignment_expression_opt -> conditional-expression");}
#line 1849 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 113 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("assignment_expression -> unary_expression assignment_operator assignment-expression");}
#line 1855 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 115 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("assignment-operator -> =");}
#line 1861 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 116 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("assignment-operator -> *=");}
#line 1867 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 117 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("assignment-operator -> /=");}
#line 1873 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 118 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("assignment-operator -> %=");}
#line 1879 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 119 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("assignment-operator -> +=");}
#line 1885 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 120 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("assignment-operator -> -=");}
#line 1891 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 121 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("assignment-operator -> <<=");}
#line 1897 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 122 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("assignment-operator -> >>=");}
#line 1903 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 123 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("assignment-operator -> &=");}
#line 1909 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 124 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("assignment-operator -> ^=");}
#line 1915 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 125 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("assignment-operator -> |=");}
#line 1921 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 127 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("expression-optional -> expression");}
#line 1927 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 128 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("expression-optional -> empty");}
#line 1933 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 130 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("expression -> assignment-expression");}
#line 1939 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 131 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("expression -> expression assignment-expression");}
#line 1945 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 133 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("constant-expression -> conditional_expression");}
#line 1951 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 134 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("declaration_specifiers_opt-> declaration_specifiers");}
#line 1957 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 135 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("declaration_specifiers_opt-> empty ");}
#line 1963 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 137 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("declaration -> declaration-specifiers init-declarator-list-optional");}
#line 1969 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 138 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("declaration-specifiers -> type-specifier declaration_specifiers_optional"); }
#line 1975 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 139 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("init-declarator-list-optional -> init-declarator-list");}
#line 1981 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 140 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("init-declarator-list-optional -> empty");}
#line 1987 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 142 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("init-declarator-list -> init-declarator");}
#line 1993 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 143 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("init-declarator-list ->init-declarator-list init-declarator");}
#line 1999 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 145 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("init-declarator -> declarator");}
#line 2005 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 146 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("init-declarator -> declarator=initializer");}
#line 2011 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 148 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("type-specifier -> void");}
#line 2017 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 149 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("type-specifier -> char");}
#line 2023 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 150 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("type-specifier -> short");}
#line 2029 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 151 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("type-specifier -> int");}
#line 2035 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 152 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("type-specifier -> long");}
#line 2041 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 153 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("type-specifier -> float");}
#line 2047 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 154 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("type-specifier -> double");}
#line 2053 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 155 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("type-specifier -> Matrix");}
#line 2059 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 156 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("type-specifier -> signed");}
#line 2065 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 157 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("type-specifier -> unsigned");}
#line 2071 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 158 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("type-specifier -> Bool");}
#line 2077 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 160 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("decalrator -> pointer_opt direct_declarator");}
#line 2083 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 161 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("direct_declarator -> identifier");}
#line 2089 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 162 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("direct_declarator -> (declarator)");}
#line 2095 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 163 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("direct_declarator -> direct-declarator[assignment-expression-optional]");}
#line 2101 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 164 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("direct_declarator -> direct-declarator(parameter-type-list)");}
#line 2107 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 165 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("direct_declarator -> direct-declarator(identifier-list-optional)");}
#line 2113 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 167 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("pointer-optional -> pointer");}
#line 2119 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 168 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("pointer-optional -> empty");}
#line 2125 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 170 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("pointer -> *pointer-optional");}
#line 2131 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 171 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("parameter_type_list-> parameter-list");}
#line 2137 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 172 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("parameter_list -> parameter_declaration");}
#line 2143 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 173 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("parameter_list -> parameter-list parameter_declaration");}
#line 2149 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 175 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("parameter_declaration -> declaration-specifiers declarator");}
#line 2155 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 176 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("parameter_declaration -> declaration-specifiers");}
#line 2161 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 178 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("identifier_list_optional -> identifier_list");}
#line 2167 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 179 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("identifier_list_optional -> empty");}
#line 2173 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 181 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("identifier-list -> identifier");}
#line 2179 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 182 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("identifier-list ->identifier-list identifier");}
#line 2185 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 184 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("initializer -> assignment-expression");}
#line 2191 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 185 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("initializer -> initializer-row-list");}
#line 2197 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 187 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("initializer_row_list-> initializer_row");}
#line 2203 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 188 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("initializer_row_list -> initializer_row_list;initializer-row");}
#line 2209 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 190 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("initializer-row -> designation-optional initializer");}
#line 2215 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 191 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("initializer-row ->initializer-row, designation-optional initializer");}
#line 2221 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 193 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("designation-optional -> designation");}
#line 2227 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 194 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("designation-optional -> empty");}
#line 2233 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 196 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("designation -> designation-list");}
#line 2239 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 197 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("designation-list -> designator");}
#line 2245 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 198 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("designation-list -> designation-list designator");}
#line 2251 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 200 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("designator -> [constant-expression]");}
#line 2257 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 201 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("designator -> .identifier");}
#line 2263 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 203 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("statement -> labeled statement");}
#line 2269 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 204 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("statement -> compound statement");}
#line 2275 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 205 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("statement -> expression statement");}
#line 2281 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 206 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("statement -> selection statement");}
#line 2287 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 207 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("statement -> iteration statement");}
#line 2293 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 208 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("statement -> jump statement");}
#line 2299 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 210 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("labeled-statement -> identifier:statement");}
#line 2305 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 211 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("labeled-statement ->case constant-expression:statement");}
#line 2311 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 212 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("labeled-statement ->default :statement");}
#line 2317 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 214 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("compound-statement -> {block-item-list-optional}");}
#line 2323 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 215 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("block-item-list-optional -> block-item-list");}
#line 2329 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 216 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("block-item-list-optional -> empty");}
#line 2335 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 218 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("block-item-list -> block-item");}
#line 2341 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 219 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("block-item-list ->block-item-list block-item");}
#line 2347 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 221 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("block-item -> declaration");}
#line 2353 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 222 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("block-item -> statement");}
#line 2359 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 224 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("expression-statement-> expression-optional");}
#line 2365 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 225 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("expression-statement-> if(expression)statement");}
#line 2371 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 226 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("expression-statement-> if(expression)statement else statement");}
#line 2377 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 227 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("expression-statement-> switch(expression)statement");}
#line 2383 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 229 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("iteration-statement-> while(expression)statement");}
#line 2389 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 230 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("iteration-statement-> do statement while(expression);");}
#line 2395 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 231 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("iteration-statement -> for ( expression_optional ;expression_optional;expression_optional)statement");}
#line 2401 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 232 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("iteration-statement -> for ( declaration_optional ;expression_optional)statement");}
#line 2407 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 234 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("jump-statement -> goto indentifier");}
#line 2413 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 235 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("jump-statement -> continue;");}
#line 2419 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 236 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("jump-statement ->  break;");}
#line 2425 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 237 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("jump-statement -> return expression-optional;");}
#line 2431 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 239 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("translation-unit -> external-declaration");}
#line 2437 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 240 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("translation-unit -> translation-unit external-declaration");}
#line 2443 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 242 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("external-declaration-> function-definition");}
#line 2449 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 243 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("external-declaration-> declaration");}
#line 2455 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 245 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("function-definition -> decalration-specifiers declarator declaration-list-optional compound-statement");}
#line 2461 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 247 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("declaration-list-optional -> declaration-list");}
#line 2467 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 248 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("declaration-list-optional -> empty");}
#line 2473 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 250 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("declaration-list -> declaration");}
#line 2479 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 251 "ass3_15CS10061.y" /* yacc.c:1646  */
    {printf("declaration-list ->declaration-list declaration");}
#line 2485 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
    break;


#line 2489 "ass3_15CS10061.tab.c" /* yacc.c:1646  */
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
#line 253 "ass3_15CS10061.y" /* yacc.c:1906  */

void yyerror(char *s) {
    printf("Error occured due to : %s\n",s);
}


