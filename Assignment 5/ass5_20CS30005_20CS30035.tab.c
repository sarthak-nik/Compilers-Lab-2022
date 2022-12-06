/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "ass5_20CS30005_20CS30035.y" /* yacc.c:339  */

    /**
    * Bison specifications
    */

    #include <iostream>
    #include "ass5_20CS30005_20CS30035_translator.h"
    using namespace std;

    extern int yylex();         // From lexer
    void yyerror(string s);     // Function to report errors
    extern char* yytext;        // From lexer, gives the text being currently scanned
    extern int yylineno;        // Used for keeping track of the line number
    extern string varType;      // Used for storing the last encountered type

#line 82 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:339  */

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
   by #include "ass5_20CS30005_20CS30035.tab.h".  */
#ifndef YY_YY_ASS5_20CS30005_20CS30035_TAB_H_INCLUDED
# define YY_YY_ASS5_20CS30005_20CS30035_TAB_H_INCLUDED
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
    AUTO = 258,
    BREAK = 259,
    CASE = 260,
    CHAR = 261,
    CONST = 262,
    CONTINUE = 263,
    DEFAULT = 264,
    DO = 265,
    DOUBLE = 266,
    ELSE = 267,
    ENUM = 268,
    EXTERN = 269,
    FLOAT = 270,
    FOR = 271,
    GOTO = 272,
    IF = 273,
    INLINE = 274,
    INT = 275,
    LONG = 276,
    REGISTER = 277,
    RESTRICT = 278,
    RETURN = 279,
    SHORT = 280,
    SIGNED = 281,
    SIZEOF = 282,
    STATIC = 283,
    STRUCT = 284,
    SWITCH = 285,
    TYPEDEF = 286,
    UNION = 287,
    UNSIGNED = 288,
    VOID = 289,
    VOLATILE = 290,
    WHILE = 291,
    BOOL = 292,
    COMPLEX = 293,
    IMAGINARY = 294,
    SQUARE_BRACE_OPEN = 295,
    SQUARE_BRACE_CLOSE = 296,
    PARENTHESIS_OPEN = 297,
    PARENTHESIS_CLOSE = 298,
    CURLY_BRACE_OPEN = 299,
    CURLY_BRACE_CLOSE = 300,
    DOT = 301,
    ARROW = 302,
    INCREMENT = 303,
    DECREMENT = 304,
    BITWISE_AND = 305,
    MULTIPLY = 306,
    ADD = 307,
    SUBTRACT = 308,
    BITWISE_NOR = 309,
    NOT = 310,
    DIVIDE = 311,
    MODULO = 312,
    LSHIFT = 313,
    RSHIFT = 314,
    LESS_THAN = 315,
    GREATER_THAN = 316,
    LESS_THAN_EQUAL = 317,
    GREATER_THAN_EQUAL = 318,
    EQUAL = 319,
    NOT_EQUAL = 320,
    BITWISE_XOR = 321,
    BITWISE_OR = 322,
    LOGICAL_AND = 323,
    LOGICAL_OR = 324,
    QUESTION_MARK = 325,
    COLON = 326,
    SEMICOLON = 327,
    ELLIPSIS = 328,
    ASSIGN = 329,
    MULTIPLY_ASSIGN = 330,
    DIVIDE_ASSIGN = 331,
    MODULO_ASSIGN = 332,
    ADD_ASSIGN = 333,
    SUBTRACT_ASSIGN = 334,
    LSHIFT_ASSIGN = 335,
    RSHIFT_ASSIGN = 336,
    AND_ASSIGN = 337,
    XOR_ASSIGN = 338,
    OR_ASSIGN = 339,
    COMMA = 340,
    HASH = 341,
    IDENTIFIER = 342,
    INTEGER_CONSTANT = 343,
    FLOATING_CONSTANT = 344,
    CHAR_CONSTANT = 345,
    STRING_LITERAL = 346,
    THEN = 347
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 17 "ass5_20CS30005_20CS30035.y" /* yacc.c:355  */

    int intval;             // For an integer value
    char* charval;          // For a char value
    int instr;              // A special type for instruction number, needed in backpatching
    char uOp;               // For unary operators
    int nParam;             // For number of parameters to a function
    expression* expr;       // For an expression
    statement* stmnt;       // For a statement
    symbol* symbl;          // For a symbol
    SymType* stype;      // For the type of a symbol
    Array* arr;             // For arrays

#line 228 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ASS5_20CS30005_20CS30035_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 245 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:358  */

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
#define YYFINAL  47
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1398

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  77
/* YYNRULES -- Number of rules.  */
#define YYNRULES  227
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  403

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   347

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
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   117,   117,   123,   128,   134,   141,   146,   151,   159,
     166,   185,   192,   194,   196,   203,   210,   212,   217,   221,
     228,   233,   241,   245,   250,   255,   288,   290,   295,   299,
     303,   307,   311,   315,   322,   326,   334,   348,   360,   372,
     387,   391,   403,   418,   422,   434,   449,   453,   467,   481,
     495,   512,   516,   532,   551,   555,   572,   576,   593,   597,
     614,   618,   634,   638,   651,   655,   678,   685,   695,   699,
     717,   719,   721,   723,   725,   727,   729,   731,   733,   735,
     737,   742,   746,   751,   756,   758,   763,   765,   767,   769,
     771,   773,   775,   777,   782,   784,   789,   793,   804,   806,
     808,   810,   815,   819,   823,   825,   829,   831,   835,   837,
     839,   841,   843,   845,   847,   852,   854,   859,   861,   866,
     868,   870,   875,   877,   882,   884,   889,   891,   896,   898,
     900,   905,   910,   920,   925,   930,   934,   936,   938,   958,
     976,   978,   980,   982,   984,   986,   998,  1000,  1015,  1017,
    1022,  1026,  1033,  1035,  1040,  1042,  1047,  1049,  1054,  1056,
    1061,  1063,  1068,  1073,  1077,  1079,  1084,  1086,  1091,  1093,
    1098,  1103,  1105,  1110,  1112,  1117,  1119,  1123,  1128,  1132,
    1136,  1144,  1146,  1151,  1155,  1159,  1166,  1168,  1170,  1175,
    1186,  1190,  1197,  1201,  1212,  1216,  1223,  1227,  1234,  1247,
    1261,  1266,  1281,  1296,  1308,  1320,  1336,  1352,  1368,  1386,
    1395,  1404,  1413,  1426,  1442,  1444,  1448,  1452,  1457,  1465,
    1467,  1472,  1474,  1479,  1488,  1490,  1495,  1497
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO", "BREAK", "CASE", "CHAR", "CONST",
  "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "ENUM", "EXTERN", "FLOAT",
  "FOR", "GOTO", "IF", "INLINE", "INT", "LONG", "REGISTER", "RESTRICT",
  "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC", "STRUCT", "SWITCH",
  "TYPEDEF", "UNION", "UNSIGNED", "VOID", "VOLATILE", "WHILE", "BOOL",
  "COMPLEX", "IMAGINARY", "SQUARE_BRACE_OPEN", "SQUARE_BRACE_CLOSE",
  "PARENTHESIS_OPEN", "PARENTHESIS_CLOSE", "CURLY_BRACE_OPEN",
  "CURLY_BRACE_CLOSE", "DOT", "ARROW", "INCREMENT", "DECREMENT",
  "BITWISE_AND", "MULTIPLY", "ADD", "SUBTRACT", "BITWISE_NOR", "NOT",
  "DIVIDE", "MODULO", "LSHIFT", "RSHIFT", "LESS_THAN", "GREATER_THAN",
  "LESS_THAN_EQUAL", "GREATER_THAN_EQUAL", "EQUAL", "NOT_EQUAL",
  "BITWISE_XOR", "BITWISE_OR", "LOGICAL_AND", "LOGICAL_OR",
  "QUESTION_MARK", "COLON", "SEMICOLON", "ELLIPSIS", "ASSIGN",
  "MULTIPLY_ASSIGN", "DIVIDE_ASSIGN", "MODULO_ASSIGN", "ADD_ASSIGN",
  "SUBTRACT_ASSIGN", "LSHIFT_ASSIGN", "RSHIFT_ASSIGN", "AND_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "COMMA", "HASH", "IDENTIFIER",
  "INTEGER_CONSTANT", "FLOATING_CONSTANT", "CHAR_CONSTANT",
  "STRING_LITERAL", "THEN", "$accept", "primary_expression", "constant",
  "postfix_expression", "argument_expression_list_opt",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "M", "N", "assignment_expression",
  "assignment_operator", "expression", "constant_expression",
  "declaration", "declaration_specifiers", "init_declarator_list",
  "init_declarator", "storage_class_specifier", "type_specifier",
  "specifier_qualifier_list", "specifier_qualifier_list_opt",
  "enum_specifier", "identifier_opt", "enumerator_list", "enumerator",
  "type_qualifier", "function_specifier", "declarator",
  "direct_declarator", "type_qualifier_list_opt", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name", "initializer",
  "initializer_list", "designation_opt", "designation", "designator_list",
  "designator", "statement", "loop_statement", "labeled_statement",
  "compound_statement", "block_item_list_opt", "block_item_list",
  "block_item", "expression_statement", "selection_statement",
  "iteration_statement", "F", "W", "D", "X", "change_table",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "declaration_list_opt", "declaration_list", YY_NULLPTR
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
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347
};
# endif

#define YYPACT_NINF -296

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-296)))

#define YYTABLE_NINF -226

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1325,  -296,  -296,  -296,  -296,   -73,  -296,  -296,  -296,  -296,
    -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,
    -296,  -296,  -296,    90,  1325,  1325,  -296,  1325,  1325,  1288,
    -296,  -296,   -27,    42,   -32,    18,  -296,  -296,   -33,  -296,
     968,   136,    -5,  -296,  -296,  -296,  -296,  -296,  -296,    56,
     112,  -296,    95,    18,  -296,   -32,  1012,  -296,    90,  -296,
    1325,   144,    83,   136,   108,    28,  -296,  -296,  -296,  -296,
    -296,   116,  1128,   778,    99,  1142,  1142,  -296,  -296,  -296,
    -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,
     217,   172,  1158,  -296,   150,   -10,   145,   233,   -15,   123,
     151,   135,   158,   160,  -296,  -296,  -296,   175,  -296,   879,
    -296,   197,   238,   829,  -296,   -28,  1247,  1158,  -296,   -12,
     778,  -296,  -296,    -9,  1359,  -296,  1359,   215,  1158,   187,
     102,  1012,  -296,    -2,  -296,   778,  -296,  -296,  1158,  1158,
     195,   196,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,
    -296,  -296,  -296,  -296,  -296,  1158,  -296,  -296,  1158,  1158,
    1158,  1158,  1158,  1158,  1158,  1158,  1158,  1158,  1158,  1158,
    1158,  1158,  1158,  1158,  -296,  -296,   216,   299,   244,   879,
    -296,  -296,  1158,  -296,   248,   249,  -296,   204,  -296,   -32,
     254,   214,  -296,  -296,  -296,  -296,  -296,   268,  -296,  1158,
    -296,  -296,  -296,  1026,   287,  -296,  -296,   222,  -296,  -296,
    -296,   288,   -17,   297,   245,  -296,  -296,  -296,  -296,  -296,
    -296,  -296,   150,   150,   -10,   -10,   145,   145,   145,   145,
     233,   233,   -15,   123,   151,  1158,  1158,  -296,   270,  1158,
     272,   275,  -296,  -296,   273,   317,  1070,   319,  -296,  -296,
    -296,   291,    72,  -296,  -296,  -296,  -296,   318,   320,  -296,
    -296,  -296,  -296,  -296,  -296,   323,   325,  -296,  -296,  -296,
    -296,  -296,  1010,   324,  -296,    99,  -296,  -296,  -296,  1012,
     324,  -296,  -296,  1158,   135,   158,  1158,  -296,   296,  -296,
     464,   326,   330,   301,  1158,  -296,    78,  1158,   332,  -296,
     464,  -296,  -296,   299,  -296,  -296,  -296,  -296,   104,  -296,
    -296,   290,   464,  -296,  -296,   692,  -296,  -296,   290,  -296,
      -8,  -296,   299,  -296,  -296,  -296,   231,   305,  -296,   299,
    -296,  -296,  -296,  -296,  -296,  -296,  -296,   334,   464,  -296,
     333,  -296,  -296,   335,   343,   388,  -296,  -296,  -296,  -296,
    1158,  -296,   339,  -296,  -296,   464,  1158,  -296,   346,  1158,
    1084,  1084,  -296,    21,   341,    68,  -296,  -296,   380,   349,
    1158,   340,  1158,  1158,  -296,  -296,   692,    69,  -296,   290,
     290,   464,   299,  -296,   347,   353,   354,  -296,   359,  -296,
    -296,  -296,  -296,   540,   616,   299,  -296,   299,  -296,   360,
     361,  -296,  -296
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   100,   103,   128,   108,   123,    98,   107,   131,   105,
     106,   101,   129,   104,   109,    99,   110,   102,   130,   111,
     112,   113,   222,     0,    87,    89,   114,    91,    93,     0,
     219,   221,   121,     0,     0,   149,    85,   134,     0,    94,
      96,   133,     0,    86,    88,    90,    92,     1,   220,     0,
       0,   152,   150,   148,    84,     0,     0,   226,     0,   213,
     224,     0,   213,   132,   126,     0,   124,   135,   151,   153,
      95,    96,     0,     0,   169,     0,     0,    28,    29,    30,
      31,    32,    33,     2,     6,     7,     8,     4,     9,     3,
      22,    34,     0,    36,    40,    43,    46,    51,    54,    56,
      58,    60,    62,    64,    68,   163,    97,     0,   227,     0,
     139,    29,     0,     0,   160,     0,     0,     0,   119,     0,
       0,    26,    81,     0,   118,   162,   118,     0,     0,     0,
       0,     0,   168,     0,   171,     0,    23,    24,     0,    19,
       0,     0,    14,    15,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,     0,    34,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    66,    66,     0,   191,     0,     0,
     144,   138,     0,   137,    29,     0,   146,     0,   147,   159,
       0,   154,   156,    83,   127,   120,   125,     0,     5,     0,
     117,   115,   116,     0,     0,   174,   164,   169,   166,   170,
     172,     0,     0,     0,    18,    20,    12,    13,    69,    37,
      38,    39,    41,    42,    44,    45,    47,    48,    49,    50,
      52,    53,    55,    57,    59,     0,     0,    66,     0,     0,
       0,     0,   211,   209,     0,     0,     0,     0,   210,   212,
     197,     2,     0,   194,   195,   175,   176,     0,    66,   192,
     177,   178,   179,   180,   141,     0,     0,   143,   136,   161,
     158,   145,     0,    27,    82,   169,    35,   173,   165,     0,
       0,    10,    11,     0,    61,    63,     0,   216,     0,   215,
       0,    66,     0,     0,     0,   218,     0,     0,     0,   213,
       0,   196,   223,     0,   140,   142,   155,   157,     0,   167,
      21,    67,     0,   188,    66,     0,   212,   214,    67,   217,
       0,   212,   191,   186,   193,    16,   169,     0,   187,   191,
      66,   181,   182,   183,   184,   185,   213,     0,     0,   213,
       0,    17,    66,     0,     0,     0,    66,   200,    66,   189,
       0,    66,     0,    66,    66,     0,     0,    65,     0,     0,
       0,     0,    67,     0,     0,     0,    66,    66,   198,    66,
       0,     0,     0,     0,    66,    66,     0,     0,   203,    67,
      67,     0,   191,   201,     0,     0,     0,   199,     0,   204,
      66,    66,   202,     0,     0,   191,   205,   191,   206,     0,
       0,   207,   208
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -296,  -296,  -296,  -296,  -296,  -296,   -70,  -296,   -80,    81,
     106,   190,   103,   227,   252,   247,   193,   198,  -296,  -110,
    -130,  -295,     9,  -296,   -72,  -115,     0,     3,  -296,   374,
    -296,    85,    89,   306,  -296,  -296,  -296,   312,     1,  -296,
     -14,   391,  -296,   383,   -40,  -296,  -296,   173,  -296,    -4,
    -123,   169,  -196,  -296,  -296,   313,  -229,  -166,  -289,  -296,
    -214,  -296,   146,    24,  -259,  -256,  -296,  -296,  -296,  -270,
     -58,  -234,  -296,   418,  -296,  -296,  -296
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    88,    89,    90,   213,   214,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     235,   176,   122,   155,   252,   194,   253,    58,    38,    39,
      24,    25,   125,   201,    26,    33,    65,    66,    27,    28,
      71,    41,    52,    42,    53,   190,   191,   192,   115,   127,
     106,   130,   131,   132,   133,   134,   254,   330,   255,   256,
     257,   258,   259,   260,   261,   262,   292,   298,   291,   299,
     107,   263,    29,    30,    31,    59,    60
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      22,   123,   121,    23,   116,   136,   137,   193,   208,    40,
      34,   279,   157,   204,    32,   186,   327,  -122,   193,    35,
      50,   113,   156,   337,   281,     3,   331,    43,    44,    22,
      45,    46,    23,   195,   198,   338,    51,    34,   128,    54,
      57,    12,   161,   162,   129,   236,   336,   156,   123,   169,
     170,   339,    55,    18,    69,    37,   333,   187,   156,   334,
     108,   313,    51,   123,   369,   105,   212,   368,   199,   179,
     112,   323,   209,   118,   126,    64,   199,   199,   219,   220,
     221,   335,    37,   328,   385,   386,    49,   331,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   331,   331,   199,   286,   340,   347,
      51,   371,   384,   119,    69,   343,   197,   333,   178,   189,
     334,   126,   185,   276,   288,   126,   362,   126,   303,   193,
     279,   211,    34,   156,   333,   333,   126,   334,   334,   128,
     105,    35,   335,    64,   301,   129,    35,   206,   215,   325,
     319,     3,   387,   199,   199,    67,   309,   199,   124,   335,
     335,   315,    36,   199,   218,   156,   156,    12,   388,   156,
     114,    72,   109,   171,   296,   270,    61,    37,    62,    18,
      69,   399,   117,   400,   329,   110,    73,   207,   265,   326,
      56,   266,    75,    76,    77,   111,    79,    80,    81,    82,
     344,   158,   173,   163,   164,   124,   159,   160,   274,   124,
     383,   124,   350,   200,   311,   200,   355,   172,   356,   177,
     124,   358,   318,   360,   361,   320,   174,   396,   398,   175,
     -67,    83,    84,    85,    86,    87,   372,   373,   180,   376,
     357,   322,   222,   223,   381,   382,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   138,   203,   139,
     393,   394,   128,   140,   141,   142,   143,   278,   129,   224,
     225,   128,   230,   231,   205,   189,   341,   129,   345,   181,
     156,   348,   216,   217,   363,   264,   237,   365,   105,   267,
     268,   269,   310,   165,   166,   167,   168,   271,   377,   272,
     379,   380,     1,   238,   239,     2,     3,   240,   241,   242,
       4,   273,     5,     6,     7,   243,   244,   245,     8,     9,
      10,    11,    12,   246,    13,    14,    72,    15,   277,   247,
     283,   280,    16,    17,    18,   248,    19,    20,    21,   332,
     282,    73,   287,   249,   289,   353,   290,    75,    76,    77,
      78,    79,    80,    81,    82,   226,   227,   228,   229,   294,
     293,   297,   300,   302,   304,  -190,   305,   312,   275,   354,
     314,   250,   316,   317,   321,   199,   342,   346,   349,   352,
     351,   359,   364,   370,   366,   367,   251,    84,    85,    86,
      87,     1,   374,   375,     2,     3,   390,   391,   232,     4,
     332,     5,     6,     7,   392,   401,   402,     8,     9,    10,
      11,    12,   378,    13,    14,    72,    15,   332,   332,   389,
     234,    16,    17,    18,   233,    19,    20,    21,   284,    70,
      73,   196,   202,    63,   285,    68,    75,    76,    77,    78,
      79,    80,    81,    82,   308,   307,   210,    48,     0,   324,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     250,     0,     0,     0,     0,     0,     0,     0,   238,   239,
       0,     0,   240,   241,   242,    83,    84,    85,    86,    87,
     243,   244,   245,     0,     0,     0,     0,     0,   246,     0,
       0,    72,     0,     0,   247,     0,     0,     0,     0,     0,
     248,     0,     0,     0,     0,     0,    73,     0,   249,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   250,     0,     0,     0,
       0,     0,     0,     0,   238,   239,     0,     0,   240,   241,
     242,   251,    84,    85,    86,    87,   243,   244,   245,     0,
       0,     0,     0,     0,   246,     0,     0,    72,     0,     0,
     247,     0,     0,     0,     0,     0,   248,     0,     0,     0,
       0,     0,    73,     0,   395,     0,     0,     0,    75,    76,
      77,    78,    79,    80,    81,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   250,     0,     0,     0,     0,     0,     0,     0,
     238,   239,     0,     0,   240,   241,   242,   251,    84,    85,
      86,    87,   243,   244,   245,     0,     0,     0,     0,     0,
     246,     0,     0,    72,     0,     0,   247,     0,     0,     0,
       0,     0,   248,     0,     0,     0,     0,     0,    73,     0,
     397,     0,     0,     0,    75,    76,    77,    78,    79,    80,
      81,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   250,     0,
       0,     0,     0,     0,     0,     0,   238,   239,     0,     0,
     240,   241,   242,   251,    84,    85,    86,    87,   243,   244,
     245,     0,     0,     0,     0,     0,   246,     0,     0,    72,
       0,     0,   247,     0,     0,     0,     0,     0,   248,     0,
       0,     0,     0,     0,    73,     0,     0,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    81,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   250,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   251,
      84,    85,    86,    87,     2,     3,     0,     0,     0,     4,
       0,     5,     0,     7,     0,     0,     0,     0,     9,    10,
       0,    12,     0,    13,    14,    72,     0,     0,     0,     0,
       0,    16,    17,    18,     0,    19,    20,    21,     0,     0,
      73,     0,     0,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    81,    82,     0,     0,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,     0,     0,     0,    72,   182,     0,     0,
       0,     0,     0,     0,    18,    83,    84,    85,    86,    87,
     183,    73,     0,     0,     0,     0,     0,    75,    76,    77,
     184,    79,    80,    81,    82,     0,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,     0,     0,     0,    72,     0,     0,     0,
       0,     0,     0,     0,    18,     0,    83,    84,    85,    86,
      87,    73,     0,     0,     0,     0,     0,    75,    76,    77,
      78,    79,    80,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    83,    84,    85,    86,
      87,     1,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     5,     6,     7,     0,     0,     0,     8,     9,    10,
      11,    12,     0,    13,    14,     0,    15,     0,     0,     0,
       0,    16,    17,    18,     0,    19,    20,    21,     0,     0,
       0,     0,  -225,     1,     0,     0,     2,     3,     0,     0,
       0,     4,     0,     5,     6,     7,     0,     0,     0,     8,
       9,    10,    11,    12,     0,    13,    14,     0,    15,    72,
       0,     0,    56,    16,    17,    18,     0,    19,    20,    21,
       0,     0,     0,    72,    73,     0,    74,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    81,    82,    73,     0,
     275,     0,     0,     0,    75,    76,    77,    78,    79,    80,
      81,    82,     0,   306,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    72,     0,    83,
      84,    85,    86,    87,     0,     0,     0,     0,     0,     0,
       0,    72,    73,    83,    84,    85,    86,    87,    75,    76,
      77,    78,    79,    80,    81,    82,    73,     0,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
       0,     0,   295,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,   250,    83,    84,    85,
      86,    87,     0,     0,     0,     0,     0,     0,     0,    72,
     120,    83,    84,    85,    86,    87,    75,    76,    77,    78,
      79,    80,    81,    82,   135,    72,     0,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    81,    82,     0,     0,
      73,     0,     0,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    81,    82,     0,    83,    84,    85,    86,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
      84,    85,    86,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,    84,    85,    86,    87,
       1,     0,     0,     2,     3,     0,     0,     0,     4,     0,
       5,     6,     7,     0,     0,     0,     8,     9,    10,    11,
      12,     0,    13,    14,     0,    15,     0,     0,     0,     0,
      16,    17,    18,     0,    19,    20,    21,     0,    47,     0,
     188,     1,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     5,     6,     7,     0,     0,     0,     8,     9,    10,
      11,    12,     0,    13,    14,     0,    15,     0,     0,     0,
       0,    16,    17,    18,     0,    19,    20,    21,     1,     0,
       0,     2,     3,     0,     0,     0,     4,     0,     5,     6,
       7,     0,     0,     0,     8,     9,    10,    11,    12,     0,
      13,    14,     0,    15,     0,     0,     0,     0,    16,    17,
      18,     0,    19,    20,    21,     2,     3,     0,     0,     0,
       4,     0,     5,     0,     7,     0,     0,     0,     0,     9,
      10,     0,    12,     0,    13,    14,     0,     0,     0,     0,
       0,     0,    16,    17,    18,     0,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    73,    72,     0,    62,    75,    76,   117,   131,    23,
      42,   207,    92,   128,    87,    43,   311,    44,   128,    51,
      34,    61,    92,   318,    41,     7,   315,    24,    25,    29,
      27,    28,    29,    45,    43,    43,    35,    42,    40,    72,
      40,    23,    52,    53,    46,   175,   316,   117,   120,    64,
      65,   321,    85,    35,    53,    87,   315,    85,   128,   315,
      60,   290,    61,   135,    43,    56,   138,   362,    85,   109,
      61,   300,    74,    45,    73,    87,    85,    85,   158,   159,
     160,   315,    87,   312,   379,   380,    44,   376,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   393,   394,    85,   237,   322,   338,
     109,    43,    43,    85,   113,   329,   120,   376,   109,   116,
     376,   120,   113,   203,   239,   124,   355,   126,   258,   239,
     326,   135,    42,   203,   393,   394,   135,   393,   394,    40,
     131,    51,   376,    87,    72,    46,    51,    45,   139,    45,
      72,     7,   381,    85,    85,    43,   279,    85,    73,   393,
     394,   291,    72,    85,   155,   235,   236,    23,   382,   239,
      87,    27,    28,    50,   246,   189,    40,    87,    42,    35,
     179,   395,    74,   397,   314,    41,    42,    85,   179,    85,
      74,   182,    48,    49,    50,    51,    52,    53,    54,    55,
     330,    51,    67,    58,    59,   120,    56,    57,   199,   124,
     376,   126,   342,   124,   286,   126,   346,    66,   348,    44,
     135,   351,   294,   353,   354,   297,    68,   393,   394,    69,
      70,    87,    88,    89,    90,    91,   366,   367,    41,   369,
     350,   299,   161,   162,   374,   375,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    40,    43,    42,
     390,   391,    40,    46,    47,    48,    49,    45,    46,   163,
     164,    40,   169,   170,    87,   272,    45,    46,   336,    41,
     350,   339,    87,    87,   356,    41,    70,   359,   279,    41,
      41,    87,   283,    60,    61,    62,    63,    43,   370,    85,
     372,   373,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    43,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    41,    30,
      85,    43,    33,    34,    35,    36,    37,    38,    39,   315,
      43,    42,    72,    44,    72,   345,    71,    48,    49,    50,
      51,    52,    53,    54,    55,   165,   166,   167,   168,    42,
      87,    42,    71,    45,    41,    45,    41,    71,    44,   345,
      44,    72,    42,    72,    42,    85,    71,    43,    45,    36,
      45,    42,    36,    42,   360,   361,    87,    88,    89,    90,
      91,     3,    12,    44,     6,     7,    43,    43,   171,    11,
     376,    13,    14,    15,    45,    45,    45,    19,    20,    21,
      22,    23,    72,    25,    26,    27,    28,   393,   394,    72,
     173,    33,    34,    35,   172,    37,    38,    39,   235,    55,
      42,   119,   126,    42,   236,    52,    48,    49,    50,    51,
      52,    53,    54,    55,   275,   272,   133,    29,    -1,   303,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,     5,
      -1,    -1,     8,     9,    10,    87,    88,    89,    90,    91,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    27,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    42,    -1,    44,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,     5,    -1,    -1,     8,     9,
      10,    87,    88,    89,    90,    91,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    -1,    27,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    44,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,     5,    -1,    -1,     8,     9,    10,    87,    88,    89,
      90,    91,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    27,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      44,    -1,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     4,     5,    -1,    -1,
       8,     9,    10,    87,    88,    89,    90,    91,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    27,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,    91,     6,     7,    -1,    -1,    -1,    11,
      -1,    13,    -1,    15,    -1,    -1,    -1,    -1,    20,    21,
      -1,    23,    -1,    25,    26,    27,    -1,    -1,    -1,    -1,
      -1,    33,    34,    35,    -1,    37,    38,    39,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    87,    88,    89,    90,    91,
      41,    42,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    87,    88,    89,    90,
      91,    42,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,
      91,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,
      -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    -1,    25,    26,    -1,    28,    -1,    -1,    -1,
      -1,    33,    34,    35,    -1,    37,    38,    39,    -1,    -1,
      -1,    -1,    44,     3,    -1,    -1,     6,     7,    -1,    -1,
      -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,
      20,    21,    22,    23,    -1,    25,    26,    -1,    28,    27,
      -1,    -1,    74,    33,    34,    35,    -1,    37,    38,    39,
      -1,    -1,    -1,    27,    42,    -1,    44,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    42,    -1,
      44,    -1,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    42,    87,    88,    89,    90,    91,    48,    49,
      50,    51,    52,    53,    54,    55,    42,    -1,    -1,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    72,    87,    88,    89,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      42,    87,    88,    89,    90,    91,    48,    49,    50,    51,
      52,    53,    54,    55,    42,    27,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,
       3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,
      13,    14,    15,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    -1,    25,    26,    -1,    28,    -1,    -1,    -1,    -1,
      33,    34,    35,    -1,    37,    38,    39,    -1,     0,    -1,
      43,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,
      -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    -1,    25,    26,    -1,    28,    -1,    -1,    -1,
      -1,    33,    34,    35,    -1,    37,    38,    39,     3,    -1,
      -1,     6,     7,    -1,    -1,    -1,    11,    -1,    13,    14,
      15,    -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,
      25,    26,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,
      35,    -1,    37,    38,    39,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    -1,    15,    -1,    -1,    -1,    -1,    20,
      21,    -1,    23,    -1,    25,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    -1,    37,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    13,    14,    15,    19,    20,
      21,    22,    23,    25,    26,    28,    33,    34,    35,    37,
      38,    39,   119,   120,   123,   124,   127,   131,   132,   165,
     166,   167,    87,   128,    42,    51,    72,    87,   121,   122,
     133,   134,   136,   120,   120,   120,   120,     0,   166,    44,
     133,   131,   135,   137,    72,    85,    74,   119,   120,   168,
     169,    40,    42,   134,    87,   129,   130,    43,   136,   131,
     122,   133,    27,    42,    44,    48,    49,    50,    51,    52,
      53,    54,    55,    87,    88,    89,    90,    91,    94,    95,
      96,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   115,   143,   163,   119,    28,
      41,    51,   115,   137,    87,   141,   163,    74,    45,    85,
      42,    99,   115,   117,   124,   125,   131,   142,    40,    46,
     144,   145,   146,   147,   148,    42,    99,    99,    40,    42,
      46,    47,    48,    49,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,   116,    99,   101,    51,    56,
      57,    52,    53,    58,    59,    60,    61,    62,    63,    64,
      65,    50,    66,    67,    68,    69,   114,    44,   115,   137,
      41,    41,    28,    41,    51,   115,    43,    85,    43,   120,
     138,   139,   140,   112,   118,    45,   130,   142,    43,    85,
     125,   126,   126,    43,   118,    87,    45,    85,   143,    74,
     148,   142,   117,    97,    98,   115,    87,    87,   115,   101,
     101,   101,   102,   102,   103,   103,   104,   104,   104,   104,
     105,   105,   106,   107,   108,   113,   113,    70,     4,     5,
       8,     9,    10,    16,    17,    18,    24,    30,    36,    44,
      72,    87,   117,   119,   149,   151,   152,   153,   154,   155,
     156,   157,   158,   164,    41,   115,   115,    41,    41,    87,
     133,    43,    85,    43,   115,    44,   101,    41,    45,   145,
      43,    41,    43,    85,   109,   110,   113,    72,   118,    72,
      71,   161,   159,    87,    42,    72,   117,    42,   160,   162,
      71,    72,    45,   113,    41,    41,    73,   140,   144,   143,
     115,   117,    71,   149,    44,   113,    42,    72,   117,    72,
     117,    42,   163,   149,   155,    45,    85,   114,   149,   113,
     150,   151,   156,   157,   158,   164,   162,   114,    43,   162,
     153,    45,    71,   153,   113,   163,    43,   149,   163,    45,
     113,    45,    36,   119,   156,   113,   113,   112,   113,    42,
     113,   113,   149,   117,    36,   117,   156,   156,   114,    43,
      42,    43,   113,   113,    12,    44,   113,   117,    72,   117,
     117,   113,   113,   150,    43,   114,   114,   149,   153,    72,
      43,    43,    45,   113,   113,    44,   150,    44,   150,   153,
     153,    45,    45
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    94,    94,    94,    95,    95,    95,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    97,    97,
      98,    98,    99,    99,    99,    99,    99,    99,   100,   100,
     100,   100,   100,   100,   101,   101,   102,   102,   102,   102,
     103,   103,   103,   104,   104,   104,   105,   105,   105,   105,
     105,   106,   106,   106,   107,   107,   108,   108,   109,   109,
     110,   110,   111,   111,   112,   112,   113,   114,   115,   115,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   117,   117,   118,   119,   119,   120,   120,   120,   120,
     120,   120,   120,   120,   121,   121,   122,   122,   123,   123,
     123,   123,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   125,   125,   126,   126,   127,
     127,   127,   128,   128,   129,   129,   130,   130,   131,   131,
     131,   132,   133,   133,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   135,   135,
     136,   136,   137,   137,   138,   138,   139,   139,   140,   140,
     141,   141,   142,   143,   143,   143,   144,   144,   145,   145,
     146,   147,   147,   148,   148,   149,   149,   149,   149,   149,
     149,   150,   150,   150,   150,   150,   151,   151,   151,   152,
     153,   153,   154,   154,   155,   155,   156,   156,   157,   157,
     157,   158,   158,   158,   158,   158,   158,   158,   158,   159,
     160,   161,   162,   163,   164,   164,   164,   164,   164,   165,
     165,   166,   166,   167,   168,   168,   169,   169
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       4,     4,     3,     3,     2,     2,     6,     7,     1,     0,
       1,     3,     1,     2,     2,     2,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     4,     1,     4,     1,     9,     0,     0,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     2,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     0,     5,
       6,     2,     1,     0,     1,     3,     1,     3,     1,     1,
       1,     1,     2,     1,     1,     3,     5,     4,     4,     3,
       6,     5,     6,     5,     4,     5,     4,     4,     1,     0,
       2,     3,     1,     2,     1,     3,     1,     3,     2,     1,
       1,     3,     1,     1,     3,     4,     2,     4,     1,     0,
       2,     1,     2,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     5,
       1,     0,     1,     3,     1,     1,     2,     1,     8,    11,
       5,    10,    12,    10,    12,    14,    14,    16,    16,     0,
       0,     0,     0,     0,     3,     2,     2,     3,     2,     1,
       2,     1,     1,     7,     1,     0,     1,     2
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
#line 118 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.expr) = new expression();  // Create new expression
            (yyval.expr)->loc = (yyvsp[0].symbl);           // Store pointer to entry in the symbol table
            (yyval.expr)->type = "non_bool";
        }
#line 1849 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 124 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.expr) = new expression();  // Create new expression
            (yyval.expr)->loc = (yyvsp[0].symbl);           // Store pointer to entry in the symbol table
        }
#line 1858 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 129 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.expr) = new expression();  // Create new expression
            (yyval.expr)->loc = SymTable::gentemp(new SymType("ptr"), (yyvsp[0].charval));  // Create a new temporary, and store the value in that temporary
            (yyval.expr)->loc->type->arrType = new SymType("char");
        }
#line 1868 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 135 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.expr) = (yyvsp[-1].expr);    // Simple assignment
        }
#line 1876 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 142 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.symbl) = SymTable::gentemp(new SymType("int"), convertIntToString((yyvsp[0].intval)));   // Create a new temporary, and store the value in that temporary
            emit("=", (yyval.symbl)->name, (yyvsp[0].intval));
        }
#line 1885 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 147 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.symbl) = SymTable::gentemp(new SymType("float"), string((yyvsp[0].charval)));     // Create a new temporary, and store the value in that temporary
            emit("=", (yyval.symbl)->name, string((yyvsp[0].charval)));
        }
#line 1894 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 152 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.symbl) = SymTable::gentemp(new SymType("float"), string((yyvsp[0].charval)));     // Create a new temporary, and store the value in that temporary
            emit("=", (yyval.symbl)->name, string((yyvsp[0].charval)));
        }
#line 1903 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 160 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.arr) = new Array();           // Create a new Array
            (yyval.arr)->Array = (yyvsp[0].expr)->loc;        // Store the location of the primary expression
            (yyval.arr)->type = (yyvsp[0].expr)->loc->type;   // Update the type
            (yyval.arr)->loc = (yyval.arr)->Array;
        }
#line 1914 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 167 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.arr) = new Array();               // Create a new Array
            (yyval.arr)->type = (yyvsp[-3].arr)->type->arrType;   // Set the type equal to the element type
            (yyval.arr)->Array = (yyvsp[-3].arr)->Array;          // Copy the base
            (yyval.arr)->loc = SymTable::gentemp(new SymType("int"));  // Store address of new temporary
            (yyval.arr)->atype = "arr";              // Set atype to "arr"

            if((yyvsp[-3].arr)->atype == "arr") {        // If we have an "arr" type then, multiply the size of the sub-type of Array with the expression value and add
                symbol* sym = SymTable::gentemp(new SymType("int"));
                int sz = sizeOfType((yyval.arr)->type);
                emit("*", sym->name, (yyvsp[-1].expr)->loc->name, convertIntToString(sz));
                emit("+", (yyval.arr)->loc->name, (yyvsp[-3].arr)->loc->name, sym->name);
            }
            else {                          // Compute the size
                int sz = sizeOfType((yyval.arr)->type);
                emit("*", (yyval.arr)->loc->name, (yyvsp[-1].expr)->loc->name, convertIntToString(sz));
            }
        }
#line 1937 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 186 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {   
            // Corresponds to calling a function with the function name and the appropriate number of parameters
            (yyval.arr) = new Array();
            (yyval.arr)->Array = SymTable::gentemp((yyvsp[-3].arr)->type);
            emit("call", (yyval.arr)->Array->name, (yyvsp[-3].arr)->Array->name, convertIntToString((yyvsp[-1].nParam)));
        }
#line 1948 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 193 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 1954 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 195 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 1960 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 197 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {   
            (yyval.arr) = new Array();
            (yyval.arr)->Array = SymTable::gentemp((yyvsp[-1].arr)->Array->type);      // Generate a new temporary
            emit("=", (yyval.arr)->Array->name, (yyvsp[-1].arr)->Array->name);            // First assign the old value
            emit("+", (yyvsp[-1].arr)->Array->name, (yyvsp[-1].arr)->Array->name, "1");       // Then add 1
        }
#line 1971 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 204 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.arr) = new Array();
            (yyval.arr)->Array = SymTable::gentemp((yyvsp[-1].arr)->Array->type);      // Generate a new temporary
            emit("=", (yyval.arr)->Array->name, (yyvsp[-1].arr)->Array->name);            // First assign the old value
            emit("-", (yyvsp[-1].arr)->Array->name, (yyvsp[-1].arr)->Array->name, "1");       // Then subtract 1
        }
#line 1982 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 211 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 1988 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 213 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 1994 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 218 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.nParam) = (yyvsp[0].nParam);    // Assign $1 to $$
        }
#line 2002 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 222 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.nParam) = 0;     // No arguments, just equate to zero
        }
#line 2010 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 229 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.nParam) = 1;                         // consider one argument
            emit("param", (yyvsp[0].expr)->loc->name);   // emit parameter
        }
#line 2019 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 234 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.nParam) = (yyvsp[-2].nParam) + 1;                    // consider one more argument, so add 1
            emit("param", (yyvsp[0].expr)->loc->name);   // emit parameter
        }
#line 2028 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 242 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.arr) = (yyvsp[0].arr);    // Assign $1 to $$
        }
#line 2036 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 246 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            emit("+", (yyvsp[0].arr)->Array->name, (yyvsp[0].arr)->Array->name, "1");   // Add 1
            (yyval.arr) = (yyvsp[0].arr);    // Assign
        }
#line 2045 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 251 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            emit("-", (yyvsp[0].arr)->Array->name, (yyvsp[0].arr)->Array->name, "1");   // Subtract 1
            (yyval.arr) = (yyvsp[0].arr);    // Assign
        }
#line 2054 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 256 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            // Case of unary operator
            (yyval.arr) = new Array();
            switch((yyvsp[-1].uOp)) {
                case '&':   // Address
                    (yyval.arr)->Array = SymTable::gentemp(new SymType("ptr"));    // Generate a pointer temporary
                    (yyval.arr)->Array->type->arrType = (yyvsp[0].arr)->Array->type;                 // Assign corresponding type
                    emit("= &", (yyval.arr)->Array->name, (yyvsp[0].arr)->Array->name);              // Emit the quad
                    break;
                case '*':   // De-referencing
                    (yyval.arr)->atype = "ptr";
                    (yyval.arr)->loc = SymTable::gentemp((yyvsp[0].arr)->Array->type->arrType);   // Generate a temporary of the appropriate type
                    (yyval.arr)->Array = (yyvsp[0].arr)->Array;                                      // Assign
                    emit("= *", (yyval.arr)->loc->name, (yyvsp[0].arr)->Array->name);                // Emit the quad
                    break;
                case '+':   // Unary plus
                    (yyval.arr) = (yyvsp[0].arr);    // Simple assignment
                    break;
                case '-':   // Unary minus
                    (yyval.arr)->Array = SymTable::gentemp(new SymType((yyvsp[0].arr)->Array->type->type));    // Generate temporary of the same base type
                    emit("= -", (yyval.arr)->Array->name, (yyvsp[0].arr)->Array->name);                              // Emit the quad
                    break;
                case '~':   // Bitwise not
                    (yyval.arr)->Array = SymTable::gentemp(new SymType((yyvsp[0].arr)->Array->type->type));    // Generate temporary of the same base type
                    emit("= ~", (yyval.arr)->Array->name, (yyvsp[0].arr)->Array->name);                              // Emit the quad
                    break;
                case '!':   // Logical not 
                    (yyval.arr)->Array = SymTable::gentemp(new SymType((yyvsp[0].arr)->Array->type->type));    // Generate temporary of the same base type
                    emit("= !", (yyval.arr)->Array->name, (yyvsp[0].arr)->Array->name);                              // Emit the quad
                    break;
            }
        }
#line 2091 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 289 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2097 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 291 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2103 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 296 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.uOp) = '&';
        }
#line 2111 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 300 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.uOp) = '*';
        }
#line 2119 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 304 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.uOp) = '+';
        }
#line 2127 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 308 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.uOp) = '-';
        }
#line 2135 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 312 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.uOp) = '~';
        }
#line 2143 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 316 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.uOp) = '!';
        }
#line 2151 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 323 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.arr) = (yyvsp[0].arr);    // Simple assignment
        }
#line 2159 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 327 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.arr) = new Array();
            (yyval.arr)->Array = convertType((yyvsp[0].arr)->Array, varType);    // Generate a new symbol of the appropriate type
        }
#line 2168 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 335 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.expr) = new expression();          // Generate new expression
            if((yyvsp[0].arr)->atype == "arr") {        // atype "arr"
                (yyval.expr)->loc = SymTable::gentemp((yyvsp[0].arr)->loc->type);  // Generate new temporary
                emit("=[]", (yyval.expr)->loc->name, (yyvsp[0].arr)->Array->name, (yyvsp[0].arr)->loc->name);     // Emit the quad
            }
            else if((yyvsp[0].arr)->atype == "ptr") {   // atype "ptr"
                (yyval.expr)->loc = (yyvsp[0].arr)->loc;          // Assign the symbol table entry
            }
            else {
                (yyval.expr)->loc = (yyvsp[0].arr)->Array;
            }
        }
#line 2186 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 349 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {   
            // Indicates multiplication
            if(typecheck((yyvsp[-2].expr)->loc, (yyvsp[0].arr)->Array)) {     // Check for type compatibility
                (yyval.expr) = new expression();                                                  // Generate new expression
                (yyval.expr)->loc = SymTable::gentemp(new SymType((yyvsp[-2].expr)->loc->type->type));    // Generate new temporary
                emit("*", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].arr)->Array->name);               // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2202 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 361 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            // Indicates division
            if(typecheck((yyvsp[-2].expr)->loc, (yyvsp[0].arr)->Array)) {     // Check for type compatibility
                (yyval.expr) = new expression();                                                  // Generate new expression
                (yyval.expr)->loc = SymTable::gentemp(new SymType((yyvsp[-2].expr)->loc->type->type));    // Generate new temporary
                emit("/", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].arr)->Array->name);               // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2218 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 373 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            // Indicates modulo
            if(typecheck((yyvsp[-2].expr)->loc, (yyvsp[0].arr)->Array)) {     // Check for type compatibility
                (yyval.expr) = new expression();                                                  // Generate new expression
                (yyval.expr)->loc = SymTable::gentemp(new SymType((yyvsp[-2].expr)->loc->type->type));    // Generate new temporary
                emit("%", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].arr)->Array->name);               // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2234 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 388 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 2242 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 392 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {   
            // Indicates addition
            if(typecheck((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {       // Check for type compatibility
                (yyval.expr) = new expression();                                                  // Generate new expression
                (yyval.expr)->loc = SymTable::gentemp(new SymType((yyvsp[-2].expr)->loc->type->type));    // Generate new temporary
                emit("+", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);                 // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2258 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 404 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            // Indicates subtraction
            if(typecheck((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {       // Check for type compatibility
                (yyval.expr) = new expression();                                                  // Generate new expression
                (yyval.expr)->loc = SymTable::gentemp(new SymType((yyvsp[-2].expr)->loc->type->type));    // Generate new temporary
                emit("-", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);                 // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2274 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 419 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 2282 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 423 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            // Indicates left shift
            if((yyvsp[0].expr)->loc->type->type == "int") {      // Check for type compatibility (int)
                (yyval.expr) = new expression();                                      // Generate new expression
                (yyval.expr)->loc = SymTable::gentemp(new SymType("int"));      // Generate new temporary
                emit("<<", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);    // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2298 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 435 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            // Indicates right shift
            if((yyvsp[0].expr)->loc->type->type == "int") {      // Check for type compatibility (int)
                (yyval.expr) = new expression();                                      // Generate new expression
                (yyval.expr)->loc = SymTable::gentemp(new SymType("int"));      // Generate new temporary
                emit(">>", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);    // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2314 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 450 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 2322 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 454 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            if(typecheck((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {                   // Check for type compatibility
                (yyval.expr) = new expression();                          // Generate new expression of type bool
                (yyval.expr)->type = "bool";
                (yyval.expr)->truelist = makelist(nextinstr());           // Create truelist for boolean expression
                (yyval.expr)->falselist = makelist(nextinstr() + 1);      // Create falselist for boolean expression
                emit("<", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);    // Emit "if x < y goto ..."
                emit("goto", "");                               // Emit "goto ..."
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2340 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 468 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            if(typecheck((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {                   // Check for type compatibility
                (yyval.expr) = new expression();                          // Generate new expression of type bool
                (yyval.expr)->type = "bool";
                (yyval.expr)->truelist = makelist(nextinstr());           // Create truelist for boolean expression
                (yyval.expr)->falselist = makelist(nextinstr() + 1);      // Create falselist for boolean expression
                emit(">", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);    // Emit "if x > y goto ..."
                emit("goto", "");                               // Emit "goto ..."
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2358 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 482 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            if(typecheck((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {                   // Check for type compatibility
                (yyval.expr) = new expression();                          // Generate new expression of type bool
                (yyval.expr)->type = "bool";
                (yyval.expr)->truelist = makelist(nextinstr());           // Create truelist for boolean expression
                (yyval.expr)->falselist = makelist(nextinstr() + 1);      // Create falselist for boolean expression
                emit("<=", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);   // Emit "if x <= y goto ..."
                emit("goto", "");                               // Emit "goto ..."
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2376 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 496 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            if(typecheck((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {                   // Check for type compatibility
                (yyval.expr) = new expression();                          // Generate new expression of type bool
                (yyval.expr)->type = "bool";
                (yyval.expr)->truelist = makelist(nextinstr());           // Create truelist for boolean expression
                (yyval.expr)->falselist = makelist(nextinstr() + 1);      // Create falselist for boolean expression
                emit(">=", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);   // Emit "if x >= y goto ..."
                emit("goto", "");                               // Emit "goto ..."
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2394 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 513 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 2402 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 517 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            if(typecheck((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {                   // Check for type compatibility
                convertBoolToInt((yyvsp[-2].expr));                           // Convert bool to int
                convertBoolToInt((yyvsp[0].expr));
                (yyval.expr) = new expression();                          // Generate new expression of type bool
                (yyval.expr)->type = "bool";
                (yyval.expr)->truelist = makelist(nextinstr());           // Create truelist for boolean expression
                (yyval.expr)->falselist = makelist(nextinstr() + 1);      // Create falselist for boolean expression
                emit("==", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);   // Emit "if x == y goto ..."
                emit("goto", "");                               // Emit "goto ..."
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2422 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 533 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            if(typecheck((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {                   // Check for type compatibility
                convertBoolToInt((yyvsp[-2].expr));                           // Convert bool to int
                convertBoolToInt((yyvsp[0].expr));
                (yyval.expr) = new expression();                          // Generate new expression of type bool
                (yyval.expr)->type = "bool";
                (yyval.expr)->truelist = makelist(nextinstr());           // Create truelist for boolean expression
                (yyval.expr)->falselist = makelist(nextinstr() + 1);      // Create falselist for boolean expression
                emit("!=", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);   // Emit "if x != y goto ..."
                emit("goto", "");                               // Emit "goto ..."
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2442 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 552 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 2450 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 556 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            if(typecheck((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {                               // Check for type compatibility
                convertBoolToInt((yyvsp[-2].expr));                                       // Convert bool to int
                convertBoolToInt((yyvsp[0].expr));
                (yyval.expr) = new expression();
                (yyval.expr)->type = "not_bool";                                      // The new result is not bool
                (yyval.expr)->loc = SymTable::gentemp(new SymType("int"));      // Create a new temporary
                emit("&", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);     // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2468 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 573 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 2476 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 577 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            if(typecheck((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {                               // Check for type compatibility
                convertBoolToInt((yyvsp[-2].expr));                                       // Convert bool to int
                convertBoolToInt((yyvsp[0].expr));
                (yyval.expr) = new expression();
                (yyval.expr)->type = "not_bool";                                      // The new result is not bool
                (yyval.expr)->loc = SymTable::gentemp(new SymType("int"));      // Create a new temporary
                emit("^", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);     // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2494 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 594 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 2502 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 598 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            if(typecheck((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {                               // Check for type compatibility
                convertBoolToInt((yyvsp[-2].expr));                                       // Convert bool to int
                convertBoolToInt((yyvsp[0].expr));
                (yyval.expr) = new expression();
                (yyval.expr)->type = "not_bool";                                      // The new result is not bool
                (yyval.expr)->loc = SymTable::gentemp(new SymType("int"));      // Create a new temporary
                emit("|", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);     // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2520 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 615 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 2528 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 619 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            /*
                Here, we have augmented the grammar with the non-terminal M to facilitate backpatching
            */
            convertIntToBool((yyvsp[-3].expr));                                   // Convert the expressions from int to bool
            convertIntToBool((yyvsp[0].expr));
            (yyval.expr) = new expression();                                  // Create a new bool expression for the result
            (yyval.expr)->type = "bool";
            backpatch((yyvsp[-3].expr)->truelist, (yyvsp[-1].instr));                            // Backpatching
            (yyval.expr)->truelist = (yyvsp[0].expr)->truelist;                            // Generate truelist from truelist of $4
            (yyval.expr)->falselist = merge((yyvsp[-3].expr)->falselist, (yyvsp[0].expr)->falselist);    // Generate falselist by merging the falselists of $1 and $4
        }
#line 2545 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 635 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 2553 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 639 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            convertIntToBool((yyvsp[-3].expr));                                   // Convert the expressions from int to bool
            convertIntToBool((yyvsp[0].expr));
            (yyval.expr) = new expression();                                  // Create a new bool expression for the result
            (yyval.expr)->type = "bool";
            backpatch((yyvsp[-3].expr)->falselist, (yyvsp[-1].instr));                           // Backpatching
            (yyval.expr)->falselist = (yyvsp[0].expr)->falselist;                          // Generate falselist from falselist of $4
            (yyval.expr)->truelist = merge((yyvsp[-3].expr)->truelist, (yyvsp[0].expr)->truelist);       // Generate truelist by merging the truelists of $1 and $4
        }
#line 2567 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 652 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 2575 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 656 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {   
            /*
                Note the augmented grammar with the non-terminals M and N
            */
            (yyval.expr)->loc = SymTable::gentemp((yyvsp[-4].expr)->loc->type);      // Generate temporary for the expression
            (yyval.expr)->loc->update((yyvsp[-4].expr)->loc->type);
            emit("=", (yyval.expr)->loc->name, (yyvsp[0].expr)->loc->name);            // Assign the conditional expression
            list<int> l1 = makelist(nextinstr());
            emit("goto", "");                                   // Prevent fall-through
            backpatch((yyvsp[-3].stmnt)->nextlist, nextinstr());               // Make list with next instruction
            emit("=", (yyval.expr)->loc->name, (yyvsp[-4].expr)->loc->name);
            list<int> l2 = makelist(nextinstr());               // Make list with next instruction
            l1 = merge(l1, l2);                                 // Merge the two lists
            emit("goto", "");                                   // Prevent fall-through
            backpatch((yyvsp[-7].stmnt)->nextlist, nextinstr());               // Backpatching
            convertIntToBool((yyvsp[-8].expr));                               // Convert expression to bool
            backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-5].instr));                        // When $1 is true, control goes to $4 (expression)
            backpatch((yyvsp[-8].expr)->falselist, (yyvsp[-1].instr));                       // When $1 is false, control goes to $8 (conditional_expression)
            backpatch(l1, nextinstr());
        }
#line 2600 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 679 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {   
            // Stores the next instruction value, and helps in backpatching
            (yyval.instr) = nextinstr();
        }
#line 2609 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 686 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            // Helps in control flow
            (yyval.stmnt) = new statement();
            (yyval.stmnt)->nextlist = makelist(nextinstr());
            emit("goto", "");
        }
#line 2620 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 696 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 2628 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 700 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            if((yyvsp[-2].arr)->atype == "arr") {        // If atype is "arr", convert and emit
                (yyvsp[0].expr)->loc = convertType((yyvsp[0].expr)->loc, (yyvsp[-2].arr)->type->type);
                emit("[]=", (yyvsp[-2].arr)->Array->name, (yyvsp[-2].arr)->loc->name, (yyvsp[0].expr)->loc->name);
            }
            else if((yyvsp[-2].arr)->atype == "ptr") {   // If atype is "ptr", emit 
                emit("*=", (yyvsp[-2].arr)->Array->name, (yyvsp[0].expr)->loc->name);
            }
            else {
                (yyvsp[0].expr)->loc = convertType((yyvsp[0].expr)->loc, (yyvsp[-2].arr)->Array->type->type);
                emit("=", (yyvsp[-2].arr)->Array->name, (yyvsp[0].expr)->loc->name);
            }
            (yyval.expr) = (yyvsp[0].expr);
        }
#line 2647 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 718 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2653 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 720 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2659 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 722 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2665 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 724 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2671 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 726 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2677 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 728 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2683 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 730 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2689 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 732 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2695 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 734 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2701 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 736 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2707 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 738 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2713 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 743 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.expr) = (yyvsp[0].expr);
        }
#line 2721 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 747 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2727 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 752 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2733 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 757 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2739 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 759 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2745 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 764 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2751 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 766 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2757 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 768 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2763 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 770 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2769 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 772 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2775 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 774 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2781 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 776 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2787 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 778 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2793 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 783 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2799 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 785 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2805 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 790 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.symbl) = (yyvsp[0].symbl);
        }
#line 2813 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 794 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {   
            // Find out the initial value and emit it
            if((yyvsp[0].symbl)->value != "") {
                (yyvsp[-2].symbl)->value = (yyvsp[0].symbl)->value;
            }
            emit("=", (yyvsp[-2].symbl)->name, (yyvsp[0].symbl)->name);
        }
#line 2825 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 805 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2831 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 807 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2837 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 809 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2843 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 811 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2849 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 816 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            varType = "void";   // Store the latest encountered type in varType
        }
#line 2857 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 820 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            varType = "char";   // Store the latest encountered type in varType
        }
#line 2865 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 824 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2871 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 826 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            varType = "int";    // Store the latest encountered type in varType
        }
#line 2879 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 830 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2885 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 832 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            varType = "float";  // Store the latest encountered type in varType
        }
#line 2893 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 836 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2899 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 838 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2905 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 840 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2911 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 842 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2917 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 844 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2923 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 846 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2929 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 848 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2935 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 853 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2941 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 855 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2947 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 860 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2953 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 862 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2959 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 867 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2965 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 869 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2971 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 871 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 2977 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 911 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            SymType* t = (yyvsp[-1].stype);
            // In case of multi-dimesnional arrays, keep on going down in a hierarchial fashion to get the base type
            while(t->arrType != NULL) {
                t = t->arrType;
            }
            t->arrType = (yyvsp[0].symbl)->type;  // Store the base type
            (yyval.symbl) = (yyvsp[0].symbl)->update((yyvsp[-1].stype));    // Update
        }
#line 2991 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 926 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.symbl) = (yyvsp[0].symbl)->update(new SymType(varType));   // For an identifier, update the type to varType
            currSymbol = (yyval.symbl);                         // Update pointer to current symbol
        }
#line 3000 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 931 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.symbl) = (yyvsp[-1].symbl);    // Simple assignment
        }
#line 3008 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 935 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3014 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 937 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3020 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 939 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            SymType* t = (yyvsp[-3].symbl)->type;
            SymType* prev = NULL;
            // Keep moving recursively to get the base type
            while(t->type == "arr") {
                prev = t;
                t = t->arrType;
            }
            if(prev == NULL) {
                int temp = atoi((yyvsp[-1].expr)->loc->value.c_str());                // Get initial value
                SymType* tp = new SymType("arr", (yyvsp[-3].symbl)->type, temp); // Create that type
                (yyval.symbl) = (yyvsp[-3].symbl)->update(tp);                                    // Update the symbol table for that symbol
            }
            else {
                int temp = atoi((yyvsp[-1].expr)->loc->value.c_str());                // Get initial value
                prev->arrType = new SymType("arr", t, temp);         // Create that type
                (yyval.symbl) = (yyvsp[-3].symbl)->update((yyvsp[-3].symbl)->type);                              // Update the symbol table for that symbol
            }
        }
#line 3044 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 959 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            SymType* t = (yyvsp[-2].symbl)->type;
            SymType* prev = NULL;
            // Keep moving recursively to get the base type
            while(t->type == "arr") {
                prev = t;
                t = t->arrType;
            }
            if(prev == NULL) {
                SymType* tp = new SymType("arr", (yyvsp[-2].symbl)->type, 0);
                (yyval.symbl) = (yyvsp[-2].symbl)->update(tp);
            }
            else {
                prev->arrType = new SymType("arr", t, 0);
                (yyval.symbl) = (yyvsp[-2].symbl)->update((yyvsp[-2].symbl)->type);
            }
        }
#line 3066 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 977 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3072 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 979 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3078 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 981 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3084 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 983 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3090 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 985 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3096 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 987 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            currSt->name = (yyvsp[-4].symbl)->name;
            if((yyvsp[-4].symbl)->type->type != "void") {
                symbol* s = currSt->lookup("return");    // Lookup for return value
                s->update((yyvsp[-4].symbl)->type);
            }
            (yyvsp[-4].symbl)->nestedTable = currSt;
            currSt->parent = globalST;   // Update parent symbol table
            switchTable(globalST);          // Switch current table to point to the global symbol table
            currSymbol = (yyval.symbl);             // Update current symbol
        }
#line 3112 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 999 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3118 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1001 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            currSt->name = (yyvsp[-3].symbl)->name;
            if((yyvsp[-3].symbl)->type->type != "void") {
                symbol* s = currSt->lookup("return");    // Lookup for return value
                s->update((yyvsp[-3].symbl)->type);
            }
            (yyvsp[-3].symbl)->nestedTable = currSt;
            currSt->parent = globalST;   // Update parent symbol table
            switchTable(globalST);          // Switch current table to point to the global symbol table
            currSymbol = (yyval.symbl);             // Update current symbol
        }
#line 3134 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1016 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3140 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1018 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3146 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1023 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.stype) = new SymType("ptr");     //  Create new type "ptr"
        }
#line 3154 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1027 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.stype) = new SymType("ptr", (yyvsp[0].stype)); //  Create new type "ptr"
        }
#line 3162 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1034 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3168 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1036 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3174 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1041 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3180 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1043 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3186 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1048 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3192 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1050 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3198 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1055 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3204 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1057 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3210 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1062 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3216 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1064 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3222 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1069 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3228 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1074 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.symbl) = (yyvsp[0].expr)->loc;   // Simple assignment
        }
#line 3236 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1078 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3242 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1080 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3248 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1085 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3254 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1087 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3260 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1092 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3266 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1094 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3272 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1099 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3278 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1104 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3284 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1106 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3290 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1111 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3296 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1113 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3302 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1118 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3308 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1120 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.stmnt) = (yyvsp[0].stmnt);    // Simple assignment
        }
#line 3316 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1124 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.stmnt) = new statement();           // Create new statement
            (yyval.stmnt)->nextlist = (yyvsp[0].expr)->nextlist;    // Assign same nextlist
        }
#line 3325 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1129 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.stmnt) = (yyvsp[0].stmnt);    // Simple assignment
        }
#line 3333 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1133 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.stmnt) = (yyvsp[0].stmnt);    // Simple assignment
        }
#line 3341 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1137 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.stmnt) = (yyvsp[0].stmnt);    // Simple assignment
        }
#line 3349 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1145 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3355 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1147 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.stmnt) = new statement();           // Create new statement
            (yyval.stmnt)->nextlist = (yyvsp[0].expr)->nextlist;    // Assign same nextlist
        }
#line 3364 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1152 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.stmnt) = (yyvsp[0].stmnt);    // Simple assignment
        }
#line 3372 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1156 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.stmnt) = (yyvsp[0].stmnt);    // Simple assignment
        }
#line 3380 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1160 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.stmnt) = (yyvsp[0].stmnt);    // Simple assignment
        }
#line 3388 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1167 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3394 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1169 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3400 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1171 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3406 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1176 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            /*
                Here, the grammar has been augmented with non-terminals like X and change_table to allow creation of nested symbol tables
            */
            (yyval.stmnt) = (yyvsp[-1].stmnt);
            switchTable(currSt->parent);     // Update current symbol table
        }
#line 3418 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1187 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.stmnt) = (yyvsp[0].stmnt);    // Simple assignment
        }
#line 3426 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1191 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.stmnt) = new statement();   // Create new statement
        }
#line 3434 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1198 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.stmnt) = (yyvsp[0].stmnt);    // Simple assignment
        }
#line 3442 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1202 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {   
            /*
                This production rule has been augmented with the non-terminal M
            */
            (yyval.stmnt) = (yyvsp[0].stmnt);
            backpatch((yyvsp[-2].stmnt)->nextlist, (yyvsp[-1].instr));    // After $1, move to block_item via $2
        }
#line 3454 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1213 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.stmnt) = new statement();   // Create new statement
        }
#line 3462 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1217 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.stmnt) = (yyvsp[0].stmnt);    // Simple assignment
        }
#line 3470 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1224 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.expr) = (yyvsp[-1].expr);    // Simple assignment
        }
#line 3478 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1228 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.expr) = new expression();  // Create new expression
        }
#line 3486 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1235 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            /*
                This production rule has been augmented for control flow
            */
            backpatch((yyvsp[-4].stmnt)->nextlist, nextinstr());                   // nextlist of N now has nextinstr
            convertIntToBool((yyvsp[-5].expr));                                   // Convert expression to bool
            (yyval.stmnt) = new statement();                                   // Create new statement
            backpatch((yyvsp[-5].expr)->truelist, (yyvsp[-2].instr));                            // Backpatching - if expression is true, go to M
            // Merge falselist of expression, nextlist of statement and nextlist of the last N
            list<int> temp = merge((yyvsp[-5].expr)->falselist, (yyvsp[-1].stmnt)->nextlist);
            (yyval.stmnt)->nextlist = merge((yyvsp[0].stmnt)->nextlist, temp);
        }
#line 3503 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1248 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            /*
                This production rule has been augmented for control flow
            */
            backpatch((yyvsp[-7].stmnt)->nextlist, nextinstr());                   // nextlist of N now has nextinstr
            convertIntToBool((yyvsp[-8].expr));                                   // Convert expression to bool
            (yyval.stmnt) = new statement();                                   // Create new statement
            backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-5].instr));                            // Backpatching - if expression is true, go to first M, else go to second M
            backpatch((yyvsp[-8].expr)->falselist, (yyvsp[-1].instr));
            // Merge nextlist of statement, nextlist of N and nextlist of the last statement
            list<int> temp = merge((yyvsp[-4].stmnt)->nextlist, (yyvsp[-3].stmnt)->nextlist);
            (yyval.stmnt)->nextlist = merge((yyvsp[0].stmnt)->nextlist, temp);
        }
#line 3521 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1262 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3527 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1267 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {   
            /*
                This production rule has been augmented with non-terminals like W, X, change_table and M to handle the control flow, 
                backpatching, detect the kind of loop, create a separate symbol table for the loop block and give it an appropriate name
            */
            (yyval.stmnt) = new statement();                   // Create a new statement
            convertIntToBool((yyvsp[-3].expr));                   // Convert expression to bool
            backpatch((yyvsp[0].stmnt)->nextlist, (yyvsp[-4].instr));           // Go back to M1 and expression after one iteration of loop_statement
            backpatch((yyvsp[-3].expr)->truelist, (yyvsp[-1].instr));            // Go to M2 and loop_statement if expression is true
            (yyval.stmnt)->nextlist = (yyvsp[-3].expr)->falselist;           // Exit loop if expression is false
            emit("goto", convertIntToString((yyvsp[-4].instr)));   // Emit to prevent fall-through
            blockName = "";
            switchTable(currSt->parent);
        }
#line 3546 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1282 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            /*
                This production rule has been augmented with non-terminals like W, X, change_table and M to handle the control flow, 
                backpatching, detect the kind of loop, create a separate symbol table for the loop block and give it an appropriate name
            */
            (yyval.stmnt) = new statement();                   // Create a new statement
            convertIntToBool((yyvsp[-5].expr));                   // Convert expression to bool
            backpatch((yyvsp[-1].stmnt)->nextlist, (yyvsp[-6].instr));           // Go back to M1 and expression after one iteration
            backpatch((yyvsp[-5].expr)->truelist, (yyvsp[-2].instr));           // Go to M2 and block_item_list_opt if expression is true
            (yyval.stmnt)->nextlist = (yyvsp[-5].expr)->falselist;           // Exit loop if expression is false
            emit("goto", convertIntToString((yyvsp[-6].instr)));   // Emit to prevent fall-through
            blockName = "";
            switchTable(currSt->parent);
        }
#line 3565 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1297 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            /*
                This production rule has been augmented with non-terminals like D and M to handle the control flow, backpatching and detect the kind of loop
            */
            (yyval.stmnt) = new statement();                   // Create a new statement     
            convertIntToBool((yyvsp[-2].expr));                   // Convert expression to bool
            backpatch((yyvsp[-2].expr)->truelist, (yyvsp[-7].instr));            // Go back to M1 and loop_statement if expression is true
            backpatch((yyvsp[-6].stmnt)->nextlist, (yyvsp[-5].instr));            // Go to M2 to check expression after statement is complete
            (yyval.stmnt)->nextlist = (yyvsp[-2].expr)->falselist;           // Exit loop if expression is false  
            blockName = "";
        }
#line 3581 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1309 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            /*
                This production rule has been augmented with non-terminals like D and M to handle the control flow, backpatching and detect the kind of loop
            */
            (yyval.stmnt) = new statement();                   // Create a new statement  
            convertIntToBool((yyvsp[-2].expr));                  // Convert expression to bool
            backpatch((yyvsp[-2].expr)->truelist, (yyvsp[-8].instr));           // Go back to M1 and block_item_list_opt if expression is true
            backpatch((yyvsp[-7].stmnt)->nextlist, (yyvsp[-5].instr));            // Go to M2 to check expression after block_item_list_opt is complete
            (yyval.stmnt)->nextlist = (yyvsp[-2].expr)->falselist;          // Exit loop if expression is false  
            blockName = "";
        }
#line 3597 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1321 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            /*
                This production rule has been augmented with non-terminals like F, X, change_table and M to handle the control flow, 
                backpatching, detect the kind of loop, create a separate symbol table for the loop block and give it an appropriate name
            */
            (yyval.stmnt) = new statement();                   // Create a new statement
            convertIntToBool((yyvsp[-6].expr));                   // Convert expression to bool
            backpatch((yyvsp[-6].expr)->truelist, (yyvsp[-1].instr));           // Go to M3 if expression is true
            backpatch((yyvsp[-3].stmnt)->nextlist, (yyvsp[-7].instr));           // Go back to M1 after N
            backpatch((yyvsp[0].stmnt)->nextlist, (yyvsp[-5].instr));           // Go back to expression after loop_statement
            emit("goto", convertIntToString((yyvsp[-5].instr)));   // Emit to prevent fall-through
            (yyval.stmnt)->nextlist = (yyvsp[-6].expr)->falselist;           // Exit loop if expression_statement is false
            blockName = "";
            switchTable(currSt->parent);
        }
#line 3617 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1337 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            /*
                This production rule has been augmented with non-terminals like F, X, change_table and M to handle the control flow, 
                backpatching, detect the kind of loop, create a separate symbol table for the loop block and give it an appropriate name
            */
            (yyval.stmnt) = new statement();                   // Create a new statement
            convertIntToBool((yyvsp[-6].expr));                   // Convert expression to bool
            backpatch((yyvsp[-6].expr)->truelist, (yyvsp[-1].instr));           // Go to M3 if expression is true
            backpatch((yyvsp[-3].stmnt)->nextlist, (yyvsp[-7].instr));           // Go back to M1 after N
            backpatch((yyvsp[0].stmnt)->nextlist, (yyvsp[-5].instr));           // Go back to expression after loop_statement
            emit("goto", convertIntToString((yyvsp[-5].instr)));   // Emit to prevent fall-through
            (yyval.stmnt)->nextlist = (yyvsp[-6].expr)->falselist;           // Exit loop if expression_statement is false
            blockName = "";
            switchTable(currSt->parent);
        }
#line 3637 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1353 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            /*
                This production rule has been augmented with non-terminals like F, X, change_table and M to handle the control flow, 
                backpatching, detect the kind of loop, create a separate symbol table for the loop block and give it an appropriate name
            */
            (yyval.stmnt) = new statement();                   // Create a new statement
            convertIntToBool((yyvsp[-8].expr));                   // Convert expression to bool
            backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-3].instr));           // Go to M3 if expression is true
            backpatch((yyvsp[-5].stmnt)->nextlist, (yyvsp[-9].instr));           // Go back to M1 after N
            backpatch((yyvsp[-1].stmnt)->nextlist, (yyvsp[-7].instr));           // Go back to expression after loop_statement
            emit("goto", convertIntToString((yyvsp[-7].instr)));   // Emit to prevent fall-through
            (yyval.stmnt)->nextlist = (yyvsp[-8].expr)->falselist;           // Exit loop if expression_statement is false
            blockName = "";
            switchTable(currSt->parent);
        }
#line 3657 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1369 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            /*
                This production rule has been augmented with non-terminals like F, X, change_table and M to handle the control flow, 
                backpatching, detect the kind of loop, create a separate symbol table for the loop block and give it an appropriate name
            */
            (yyval.stmnt) = new statement();                   // Create a new statement
            convertIntToBool((yyvsp[-8].expr));                   // Convert expression to bool
            backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-3].instr));           // Go to M3 if expression is true
            backpatch((yyvsp[-5].stmnt)->nextlist, (yyvsp[-9].instr));           // Go back to M1 after N
            backpatch((yyvsp[-1].stmnt)->nextlist, (yyvsp[-7].instr));           // Go back to expression after loop_statement
            emit("goto", convertIntToString((yyvsp[-7].instr)));   // Emit to prevent fall-through
            (yyval.stmnt)->nextlist = (yyvsp[-8].expr)->falselist;           // Exit loop if expression_statement is false
            blockName = "";
            switchTable(currSt->parent);
        }
#line 3677 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1387 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {   
            /*
            This non-terminal indicates the start of a for loop
            */
            blockName = "FOR";
        }
#line 3688 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1396 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            /*
            This non-terminal indicates the start of a while loop
            */
            blockName = "WHILE";
        }
#line 3699 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1405 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            /*
            This non-terminal indicates the start of a do-while loop
            */
            blockName = "DO_WHILE";
        }
#line 3710 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1414 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {   
            // Used for creating new nested symbol tables for nested blocks
            string newST = currSt->name + "." + blockName + "$" + to_string(STCount++);  // Generate name for new symbol table
            symbol* sym = currSt->lookup(newST);
            sym->nestedTable = new SymTable(newST);  // Create new symbol table
            sym->name = newST;
            sym->nestedTable->parent = currSt;
            sym->type = new SymType("block");    // The type will be "block"
            currSymbol = sym;    // Change the current symbol pointer
        }
#line 3725 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1427 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {   
            // Used for changing the symbol table on encountering functions
            if(currSymbol->nestedTable != NULL) {
                // If the symbol table already exists, switch to that table
                switchTable(currSymbol->nestedTable);
                emit("label", currSt->name);
            }
            else {
                // If the symbol table does not exist already, create it and switch to it
                switchTable(new SymTable(""));
            }
        }
#line 3742 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1443 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3748 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1445 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.stmnt) = new statement();
        }
#line 3756 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1449 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.stmnt) = new statement();
        }
#line 3764 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1453 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.stmnt) = new statement();
            emit("return", (yyvsp[-1].expr)->loc->name);  // Emit return alongwith return value
        }
#line 3773 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1458 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {
            (yyval.stmnt) = new statement();
            emit("return", "");             // Emit return without any return value
        }
#line 3782 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1466 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3788 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1468 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3794 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1473 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3800 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1475 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3806 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1480 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    {   
            currSt->parent = globalST;
            STCount = 0;
            switchTable(globalST);          // After reaching end of a function, change cureent symbol table to the global symbol table
        }
#line 3816 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1489 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3822 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1491 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3828 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1496 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3834 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1498 "ass5_20CS30005_20CS30035.y" /* yacc.c:1646  */
    { }
#line 3840 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
    break;


#line 3844 "ass5_20CS30005_20CS30035.tab.c" /* yacc.c:1646  */
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
#line 1501 "ass5_20CS30005_20CS30035.y" /* yacc.c:1906  */


void yyerror(string s) {
    /*
        This function prints any error encountered while parsing
    */
    cout << "Error occurred: " << s << endl;
    cout << "Line no.: " << yylineno << endl;
    cout << "Unable to parse: " << yytext << endl; 
}
