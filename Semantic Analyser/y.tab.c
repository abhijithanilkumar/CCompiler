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
#line 1 "parse.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>
#include "symbol_table.h"
extern FILE *yyin;
extern FILE *yyout;
extern int column;
extern int line;
extern int cnt;
extern char *yytext,tempid[100];
int temp,err,err1=0;

install()
{ 
	symrec *s;
	s = getsym (tempid);
	if (s == 0)
	s = putsym (tempid,temp);
	else 
	{
//		printf(" VOID=1 ");
//	 printf(" CHAR=2 ");
//	 printf(" INT=3 ");
//	 printf(" FLOAT=4 ");
//	 printf(" DOUBLE=4 ");
		printf( "\nERROR: Semantic error at Pos : %d : %d : %s is already defined as %s\n",line,cnt,s->name,s->type );
//		exit(0);	
	}
	err1=1;
}
int context_check()
{ 
	symrec *s;
	s = getsym(tempid);	
	if (s == 0 )

	{

	printf( "\nERROR: Semantic error at Pos : %d : %d : %s is an undeclared identifier\n",line,cnt,tempid);//exit(0);


	return 0;}
	else
	{
        if(strcmp(s->type,"void")==0)
            return(1);
        if(strcmp(s->type,"int")==0)
            return(3);
        if(strcmp(s->type,"float")==0)
            return(4);
        if(strcmp(s->type,"char")==0)
	        return(2);
	}
	err1=1;
	
}
type_err(int t1,int t2)
{
	if(t1&&t2)
	{
//	 printf(" VOID=1 ");
//	 printf(" CHAR=2 ");
//	 printf(" INT=3 ");
//	 printf(" FLOAT=4 ");
//	 printf(" DOUBLE=4 ");	

	printf( "\nERROR: Semantic error at Pos : %d : %d : Type mismatch for %s between %d and %d \n\n",line,cnt,tempid,t1,t2);

	err1=1;
//	exit(0);	
	}	
}


#line 141 "y.tab.c" /* yacc.c:339  */

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
# define YYDEBUG 0
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
    SIZEOF = 261,
    PTR_OP = 262,
    INC_OP = 263,
    DEC_OP = 264,
    LEFT_OP = 265,
    RIGHT_OP = 266,
    LE_OP = 267,
    GE_OP = 268,
    EQ_OP = 269,
    NE_OP = 270,
    AND_OP = 271,
    OR_OP = 272,
    MUL_ASSIGN = 273,
    DIV_ASSIGN = 274,
    MOD_ASSIGN = 275,
    ADD_ASSIGN = 276,
    SUB_ASSIGN = 277,
    LEFT_ASSIGN = 278,
    RIGHT_ASSIGN = 279,
    AND_ASSIGN = 280,
    XOR_ASSIGN = 281,
    OR_ASSIGN = 282,
    TYPE_NAME = 283,
    SINGLE = 284,
    PRINTF = 285,
    SCANF = 286,
    TYPEDEF = 287,
    EXTERN = 288,
    STATIC = 289,
    AUTO = 290,
    REGISTER = 291,
    CHAR = 292,
    SHORT = 293,
    INT = 294,
    LONG = 295,
    SIGNED = 296,
    UNSIGNED = 297,
    FLOAT = 298,
    DOUBLE = 299,
    CONST = 300,
    VOLATILE = 301,
    VOID = 302,
    STRUCT = 303,
    UNION = 304,
    ENUM = 305,
    ELLIPSIS = 306,
    CASE = 307,
    DEFAULT = 308,
    IF = 309,
    ELSE = 310,
    SWITCH = 311,
    WHILE = 312,
    DO = 313,
    FOR = 314,
    GOTO = 315,
    CONTINUE = 316,
    BREAK = 317,
    RETURN = 318,
    LOWER_THAN_ELSE = 319
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define CONSTANT 259
#define STRING_LITERAL 260
#define SIZEOF 261
#define PTR_OP 262
#define INC_OP 263
#define DEC_OP 264
#define LEFT_OP 265
#define RIGHT_OP 266
#define LE_OP 267
#define GE_OP 268
#define EQ_OP 269
#define NE_OP 270
#define AND_OP 271
#define OR_OP 272
#define MUL_ASSIGN 273
#define DIV_ASSIGN 274
#define MOD_ASSIGN 275
#define ADD_ASSIGN 276
#define SUB_ASSIGN 277
#define LEFT_ASSIGN 278
#define RIGHT_ASSIGN 279
#define AND_ASSIGN 280
#define XOR_ASSIGN 281
#define OR_ASSIGN 282
#define TYPE_NAME 283
#define SINGLE 284
#define PRINTF 285
#define SCANF 286
#define TYPEDEF 287
#define EXTERN 288
#define STATIC 289
#define AUTO 290
#define REGISTER 291
#define CHAR 292
#define SHORT 293
#define INT 294
#define LONG 295
#define SIGNED 296
#define UNSIGNED 297
#define FLOAT 298
#define DOUBLE 299
#define CONST 300
#define VOLATILE 301
#define VOID 302
#define STRUCT 303
#define UNION 304
#define ENUM 305
#define ELLIPSIS 306
#define CASE 307
#define DEFAULT 308
#define IF 309
#define ELSE 310
#define SWITCH 311
#define WHILE 312
#define DO 313
#define FOR 314
#define GOTO 315
#define CONTINUE 316
#define BREAK 317
#define RETURN 318
#define LOWER_THAN_ELSE 319

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 320 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  63
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1258

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  213
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  352

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   319

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    76,     2,     2,     2,    78,    71,     2,
      65,    66,    72,    73,    70,    74,    69,    77,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    84,    86,
      79,    85,    80,    83,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    67,     2,    68,    81,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    87,    82,    88,    75,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    96,    96,    97,    98,    99,   103,   104,   105,   106,
     107,   108,   109,   110,   114,   115,   119,   120,   121,   122,
     123,   124,   128,   129,   130,   131,   132,   133,   137,   138,
     142,   143,   144,   145,   149,   150,   151,   155,   156,   157,
     161,   162,   163,   164,   165,   169,   170,   171,   175,   176,
     180,   181,   185,   186,   190,   191,   195,   196,   200,   201,
     205,   206,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   224,   225,   229,   233,   234,   238,   239,
     240,   241,   242,   243,   247,   248,   252,   253,   257,   258,
     259,   260,   261,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   280,   281,   282,   286,   287,
     291,   292,   296,   300,   301,   302,   303,   307,   308,   312,
     313,   314,   318,   319,   320,   324,   325,   329,   330,   334,
     335,   339,   340,   344,   345,   346,   347,   348,   349,   350,
     354,   355,   356,   357,   361,   362,   367,   368,   372,   373,
     377,   378,   379,   383,   384,   388,   389,   393,   394,   395,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   411,
     412,   413,   417,   418,   422,   423,   424,   425,   426,   427,
     431,   432,   433,   437,   438,   439,   440,   444,   445,   449,
     450,   454,   455,   459,   461,   462,   466,   467,   468,   469,
     473,   474,   475,   476,   477,   481,   482,   486,   487,   491,
     492,   493,   494,   497
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP",
  "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "TYPE_NAME", "SINGLE", "PRINTF", "SCANF", "TYPEDEF", "EXTERN", "STATIC",
  "AUTO", "REGISTER", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED",
  "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID", "STRUCT", "UNION",
  "ENUM", "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE",
  "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "LOWER_THAN_ELSE",
  "'('", "')'", "'['", "']'", "'.'", "','", "'&'", "'*'", "'+'", "'-'",
  "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'",
  "'='", "';'", "'{'", "'}'", "$accept", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", YY_NULLPTR
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
     315,   316,   317,   318,   319,    40,    41,    91,    93,    46,
      44,    38,    42,    43,    45,   126,    33,    47,    37,    60,
      62,    94,   124,    63,    58,    61,    59,   123,   125
};
# endif

#define YYPACT_NINF -219

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-219)))

#define YYTABLE_NINF -87

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     967,   -61,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,
    -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,
    -219,  -219,     3,    51,   135,  -219,     8,  1208,  1208,  -219,
      23,  -219,  1208,   469,    -1,    13,   917,  -219,  -219,  -219,
     -57,    55,    82,  -219,  -219,   135,  -219,   -52,  -219,   413,
    -219,  -219,   -18,   894,  -219,   274,  -219,     8,  -219,   469,
     534,   693,    -1,  -219,  -219,    55,    -6,   -26,  -219,  -219,
    -219,  -219,    51,  -219,   292,  -219,   469,   894,   894,  1051,
    -219,    48,   894,    30,  -219,  -219,   830,   854,   854,   904,
     104,    24,   126,   131,   582,   146,   216,   139,   151,   619,
     706,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,
     134,   267,   904,  -219,   155,    19,   252,    74,   258,   195,
     159,   174,   254,     5,  -219,  -219,    21,  -219,  -219,  -219,
     350,   471,  -219,  -219,  -219,  -219,   183,  -219,  -219,  -219,
    -219,    52,   215,   214,  -219,    63,  -219,  -219,  -219,  -219,
     231,   -17,   904,    55,  -219,  -219,   292,  -219,  -219,  -219,
    1074,  -219,  -219,  -219,   904,   114,  -219,   241,  -219,   582,
     706,  -219,   904,  -219,  -219,   245,   582,   904,   904,   904,
     281,   656,   287,  -219,  -219,  -219,   123,    89,   130,   308,
     337,  -219,  -219,   732,   904,   372,  -219,  -219,  -219,  -219,
    -219,  -219,  -219,  -219,  -219,  -219,  -219,   904,  -219,   904,
     904,   904,   904,   904,   904,   904,   904,   904,   904,   904,
     904,   904,   904,   904,   904,   904,   904,   904,   904,  -219,
    -219,   545,  -219,  -219,  1015,   780,  -219,    69,  -219,    44,
    -219,  1184,  -219,   373,  -219,  -219,  -219,  -219,  -219,   -11,
    -219,  -219,    48,  -219,   904,  -219,   311,   582,  -219,   124,
     156,   169,   315,   656,  -219,  -219,  -219,  1108,   194,  -219,
     904,  -219,  -219,   179,  -219,   185,  -219,  -219,  -219,  -219,
    -219,   155,   155,    19,    19,   252,   252,   252,   252,    74,
      74,   258,   195,   159,   174,   254,    67,  -219,  -219,  -219,
     335,   339,  -219,   313,    44,  1149,   806,  -219,  -219,  -219,
     141,  -219,  -219,  -219,  -219,  -219,   582,   582,   582,   904,
     818,  -219,  -219,   904,  -219,   904,  -219,  -219,  -219,  -219,
     351,  -219,   348,  -219,  -219,   363,  -219,  -219,   182,   582,
     188,  -219,  -219,  -219,  -219,   582,   333,  -219,   582,  -219,
    -219,  -219
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,   133,   104,    88,    89,    90,    91,    92,    94,
      95,    96,    97,   100,   101,    98,    99,   129,   130,    93,
     108,   109,     0,     0,   140,   208,     0,    78,    80,   102,
       0,   103,    82,     0,   132,     0,     0,   205,   207,   213,
     124,     0,     0,   144,   142,   141,    76,     0,    84,     0,
      79,    81,   107,     0,    83,     0,   187,     0,   212,     0,
       0,     0,   131,     1,   206,     0,   127,     0,   125,   134,
     145,   143,     0,    77,     0,   210,     0,     0,   114,     0,
     110,     0,   116,     2,     3,     4,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    22,    23,    24,    25,    26,    27,   191,   183,     6,
      16,    28,     0,    30,    34,    37,    40,    45,    48,    50,
      52,    54,    56,    58,    60,    73,     0,   189,   174,   175,
       0,     0,   176,   177,   178,   179,    86,   188,   211,   153,
     139,   152,     0,   146,   148,     0,     2,   136,    28,    75,
       0,     0,     0,     0,   122,    85,     0,   169,    87,   209,
       0,   113,   106,   111,     0,     0,   117,   119,   115,     0,
       0,    20,     0,    17,    18,     0,     0,     0,     0,     0,
       0,     0,     0,   201,   202,   203,     0,     0,   155,     0,
       0,    12,    13,     0,     0,     0,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    62,     0,    19,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   192,
     185,     0,   184,   190,     0,     0,   150,   157,   151,   158,
     137,     0,   138,     0,   135,   123,   128,   126,   172,     0,
     105,   120,     0,   112,     0,   180,     0,     0,   182,     0,
       0,     0,     0,     0,   200,   204,     5,     0,   157,   156,
       0,    11,     8,     0,    14,     0,    10,    61,    31,    32,
      33,    35,    36,    38,    39,    43,    44,    41,    42,    46,
      47,    49,    51,    53,    55,    57,     0,    74,   186,   165,
       0,     0,   161,     0,   159,     0,     0,   147,   149,   154,
       0,   170,   118,   121,    21,   181,     0,     0,     0,     0,
       0,    29,     9,     0,     7,     0,   166,   160,   162,   167,
       0,   163,     0,   171,   173,   193,   195,   196,     0,     0,
       0,    15,    59,   168,   164,     0,     0,   198,     0,   194,
     197,   199
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -219,  -219,  -219,  -219,   -49,  -219,   -83,    91,   157,   125,
     149,   198,   204,   205,   203,   206,  -219,   -56,   -72,  -219,
     -96,   -46,     9,     0,  -219,   358,  -219,   -30,  -219,  -219,
     354,   -48,   -65,  -219,   181,  -219,   369,   282,    22,   -16,
     -27,    -3,  -219,   -59,  -219,   199,  -219,   269,  -127,  -218,
    -132,  -219,   -74,  -219,   171,   103,   312,  -166,  -219,  -219,
    -219,  -219,   407,  -219
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   109,   110,   273,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   207,
     126,   150,    56,    57,    47,    48,    27,    28,    29,    30,
      79,    80,    81,   165,   166,    31,    67,    68,    32,    33,
      34,    35,    45,   300,   143,   144,   145,   189,   301,   239,
     158,   249,   127,   128,   129,    59,   131,   132,   133,   134,
     135,    36,    37,    38
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      26,   142,   157,   186,   187,   149,    40,    42,    62,    25,
      49,     2,   148,   161,   238,   263,     2,   168,    72,   304,
     180,    44,   226,    78,   248,    39,    52,    50,    51,   208,
      65,   163,    54,   149,    73,   188,    26,   171,   173,   174,
     148,   136,    71,   175,   153,    25,    43,    78,    78,    78,
     304,     2,    78,   153,     2,     2,   136,   233,    66,   310,
     141,   269,   154,   148,    60,   167,    61,    70,   137,    77,
      78,   245,     2,    23,   187,    82,   187,   311,    23,   152,
      24,   259,   260,   261,   157,   137,   216,   217,   227,   177,
      41,   228,   212,   213,    46,   255,   149,   320,   275,    82,
      82,    82,   258,   148,    82,   188,   246,   229,   149,   305,
      53,   306,   163,    23,   169,   148,    23,   234,   251,   235,
      24,   274,    82,    24,    24,   236,   278,   279,   280,   242,
      78,   296,   164,   243,   234,   277,   235,   228,   237,   137,
      78,   190,   191,   192,   146,    84,    85,    86,    69,    87,
      88,   325,    76,   218,   219,   266,   297,   233,   130,   228,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   334,   149,
      17,    18,    82,   315,   252,   268,   148,   321,   176,   303,
     316,   178,    82,   228,   228,   267,   179,   235,   149,   193,
     253,   194,    24,   195,    58,   148,   100,    24,   313,   265,
      62,   181,   101,   102,   103,   104,   105,   106,    42,   182,
      75,   148,   317,   338,   340,   183,   228,   209,   156,   333,
     138,   237,   210,   211,   141,   318,   167,   184,   157,   228,
     223,   141,   335,   336,   337,   322,   330,   159,   346,   323,
     149,   341,   228,   324,   348,   228,   224,   148,   228,   267,
     332,   235,   214,   215,   268,   347,   222,   141,    74,   342,
     225,   349,   220,   221,   351,     1,   148,    83,    84,    85,
      86,   240,    87,    88,   241,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   146,    84,    85,    86,   244,
      87,    88,     3,   281,   282,   141,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,   254,    89,    90,    91,   257,
      92,    93,    94,    95,    96,    97,    98,    99,   262,   100,
     271,   285,   286,   287,   288,   101,   102,   103,   104,   105,
     106,     1,   206,    83,    84,    85,    86,   100,    87,    88,
     107,    55,   108,   101,   102,   103,   104,   105,   106,   289,
     290,   283,   284,   264,   270,   276,   309,   314,     3,   156,
     319,   328,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,   326,    89,    90,    91,   327,    92,    93,    94,    95,
      96,    97,    98,    99,     1,   100,   344,   343,   345,   350,
     291,   101,   102,   103,   104,   105,   106,   292,   294,   293,
     155,   160,   295,   312,   151,   247,   107,    55,   230,   256,
     308,     3,   231,    64,     0,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,    83,    84,    85,    86,     0,    87,
      88,     0,     0,   -86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     3,    74,   -86,
      55,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
       0,     0,     0,    89,    90,    91,     0,    92,    93,    94,
      95,    96,    97,    98,    99,     0,   100,   139,     0,     0,
       0,     0,   101,   102,   103,   104,   105,   106,    83,    84,
      85,    86,     0,    87,    88,     0,    55,   107,    55,   232,
       0,     0,     3,     0,     0,     0,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    83,    84,    85,    86,     0,
      87,    88,     0,     0,     0,     0,     0,    89,    90,    91,
     140,    92,    93,    94,    95,    96,    97,    98,    99,     0,
     100,     0,     0,     0,     0,     0,   101,   102,   103,   104,
     105,   106,   146,    84,    85,    86,     0,    87,    88,     0,
       0,   107,    55,   298,    89,    90,    91,     0,    92,    93,
      94,    95,    96,    97,    98,    99,     0,   100,     0,     0,
       0,     0,     0,   101,   102,   103,   104,   105,   106,   146,
      84,    85,    86,     0,    87,    88,     0,     0,   107,    55,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
     101,   102,   103,   104,   105,   106,   146,    84,    85,    86,
       0,    87,    88,     0,     0,   185,     0,     0,     0,   146,
      84,    85,    86,     0,    87,    88,     0,     0,     0,     0,
       0,   100,     0,     0,     0,     0,     0,   101,   102,   103,
     104,   105,   106,     0,     3,   146,    84,    85,    86,     0,
      87,    88,   107,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,     0,   100,     0,
       0,   147,     0,     0,   101,   102,   103,   104,   105,   106,
       0,   100,     0,     0,     0,     0,     0,   101,   102,   103,
     104,   105,   106,   146,    84,    85,    86,     0,    87,    88,
       0,     0,     0,     0,     0,     0,     0,   100,   272,     0,
       0,     0,     0,   101,   102,   103,   104,   105,   106,   146,
      84,    85,    86,     0,    87,    88,     0,     0,     0,     0,
       0,   146,    84,    85,    86,     0,    87,    88,     0,     0,
       0,     0,     0,   146,    84,    85,    86,     0,    87,    88,
       0,     0,     0,     0,     0,   100,     0,     0,   302,     0,
       0,   101,   102,   103,   104,   105,   106,   146,    84,    85,
      86,     0,    87,    88,     0,     0,     0,     0,     0,     0,
       0,   100,     0,     0,   331,     0,     0,   101,   102,   103,
     104,   105,   106,   100,   339,     0,     0,     0,     0,   101,
     102,   103,   104,   105,   106,   170,     0,     0,     0,     0,
       0,   101,   102,   103,   104,   105,   106,   146,    84,    85,
      86,     0,    87,    88,     0,     0,     0,    63,     1,   172,
       2,     0,     3,     0,     0,   101,   102,   103,   104,   105,
     106,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,     3,     0,     0,     0,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,     1,   100,
       2,     0,     0,     0,     0,   101,   102,   103,   104,   105,
     106,     0,    23,     0,     0,     0,     0,     0,     0,    24,
       0,     0,     0,     0,     0,     3,     0,     0,     0,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,     2,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    23,     0,     0,     0,     0,     0,     0,    24,
       0,     0,     0,     3,     0,     0,     0,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
     234,   299,   235,     0,     0,     0,     0,    24,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,     3,     0,     0,     0,     0,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     3,     0,     0,   162,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,     0,
       0,     0,   250,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   267,   299,   235,     0,     3,     0,     0,
      24,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,     0,     0,   329,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,   307,     3,     0,     0,     0,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22
};

static const yytype_int16 yycheck[] =
{
       0,    60,    74,    99,   100,    61,     3,    23,    35,     0,
      26,     3,    61,    78,   141,   181,     3,    82,    70,   237,
      94,    24,    17,    53,   156,    86,     3,    27,    28,   112,
      87,    79,    32,    89,    86,   100,    36,    86,    87,    88,
      89,    57,    45,    89,    70,    36,    24,    77,    78,    79,
     268,     3,    82,    70,     3,     3,    72,   131,     3,    70,
      60,   188,    88,   112,    65,    81,    67,    45,    59,    87,
     100,    88,     3,    65,   170,    53,   172,    88,    65,    85,
      72,   177,   178,   179,   156,    76,    12,    13,    83,    65,
      87,    70,    73,    74,    86,   169,   152,   263,   194,    77,
      78,    79,   176,   152,    82,   170,   152,    86,   164,    65,
      87,    67,   160,    65,    84,   164,    65,    65,   164,    67,
      72,   193,   100,    72,    72,   141,   209,   210,   211,    66,
     160,   227,    84,    70,    65,   207,    67,    70,   141,   130,
     170,     7,     8,     9,     3,     4,     5,     6,    66,     8,
       9,    84,    49,    79,    80,    66,   228,   231,    55,    70,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   310,   235,
      45,    46,   160,   257,    70,   188,   235,   270,    84,   235,
      66,    65,   170,    70,    70,    65,    65,    67,   254,    65,
      86,    67,    72,    69,    33,   254,    65,    72,   254,    86,
     237,    65,    71,    72,    73,    74,    75,    76,   234,     3,
      49,   270,    66,   319,   320,    86,    70,    72,    87,    88,
      59,   234,    77,    78,   234,    66,   252,    86,   310,    70,
      81,   241,   316,   317,   318,    66,   305,    76,    66,    70,
     306,   323,    70,    68,    66,    70,    82,   306,    70,    65,
     306,    67,    10,    11,   267,   339,    71,   267,    85,   325,
      16,   345,    14,    15,   348,     1,   325,     3,     4,     5,
       6,    66,     8,     9,    70,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     3,     4,     5,     6,    68,
       8,     9,    28,   212,   213,   305,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    84,    52,    53,    54,    84,
      56,    57,    58,    59,    60,    61,    62,    63,    57,    65,
       3,   216,   217,   218,   219,    71,    72,    73,    74,    75,
      76,     1,    85,     3,     4,     5,     6,    65,     8,     9,
      86,    87,    88,    71,    72,    73,    74,    75,    76,   220,
     221,   214,   215,    86,    66,     3,     3,    66,    28,    87,
      65,    68,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    66,    52,    53,    54,    66,    56,    57,    58,    59,
      60,    61,    62,    63,     1,    65,    68,    66,    55,    86,
     222,    71,    72,    73,    74,    75,    76,   223,   225,   224,
      72,    77,   226,   252,    65,   153,    86,    87,    88,   170,
     241,    28,   130,    36,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    85,    86,
      87,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    -1,    52,    53,    54,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    65,     3,    -1,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    76,     3,     4,
       5,     6,    -1,     8,     9,    -1,    87,    86,    87,    88,
      -1,    -1,    28,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,
      66,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,    74,
      75,    76,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    86,    87,    88,    52,    53,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    76,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    86,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      71,    72,    73,    74,    75,    76,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    86,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    65,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    76,    -1,    28,     3,     4,     5,     6,    -1,
       8,     9,    86,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    65,    -1,
      -1,    68,    -1,    -1,    71,    72,    73,    74,    75,    76,
      -1,    65,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    76,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,    -1,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    76,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    68,    -1,
      -1,    71,    72,    73,    74,    75,    76,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    -1,    -1,    68,    -1,    -1,    71,    72,    73,
      74,    75,    76,    65,    66,    -1,    -1,    -1,    -1,    71,
      72,    73,    74,    75,    76,    65,    -1,    -1,    -1,    -1,
      -1,    71,    72,    73,    74,    75,    76,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,     0,     1,    65,
       3,    -1,    28,    -1,    -1,    71,    72,    73,    74,    75,
      76,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    28,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,     1,    65,
       3,    -1,    -1,    -1,    -1,    71,    72,    73,    74,    75,
      76,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      65,    66,    67,    -1,    -1,    -1,    -1,    72,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    88,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    66,    67,    -1,    28,    -1,    -1,
      72,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    66,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    28,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    28,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    65,    72,   111,   112,   115,   116,   117,
     118,   124,   127,   128,   129,   130,   150,   151,   152,    86,
       3,    87,   128,   127,   130,   131,    86,   113,   114,   128,
     112,   112,     3,    87,   112,    87,   111,   112,   143,   144,
      65,    67,   129,     0,   151,    87,     3,   125,   126,    66,
     127,   130,    70,    86,    85,   143,   144,    87,   116,   119,
     120,   121,   127,     3,     4,     5,     6,     8,     9,    52,
      53,    54,    56,    57,    58,    59,    60,    61,    62,    63,
      65,    71,    72,    73,    74,    75,    76,    86,    88,    90,
      91,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   109,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   128,   111,   143,     3,
      66,   112,   132,   133,   134,   135,     3,    68,    93,   106,
     110,   125,    85,    70,    88,   114,    87,   107,   139,   143,
     119,   121,    88,   120,    84,   122,   123,   128,   121,    84,
      65,    93,    65,    93,    93,   110,    84,    65,    65,    65,
     141,    65,     3,    86,    86,    86,   109,   109,   121,   136,
       7,     8,     9,    65,    67,    69,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    85,   108,    95,    72,
      77,    78,    73,    74,    10,    11,    12,    13,    79,    80,
      14,    15,    71,    81,    82,    16,    17,    83,    70,    86,
      88,   145,    88,   141,    65,    67,   128,   130,   137,   138,
      66,    70,    66,    70,    68,    88,   110,   126,   139,   140,
      88,   110,    70,    86,    84,   141,   136,    84,   141,   109,
     109,   109,    57,   146,    86,    86,    66,    65,   130,   137,
      66,     3,    66,    92,   107,   109,     3,   107,    95,    95,
      95,    96,    96,    97,    97,    98,    98,    98,    98,    99,
      99,   100,   101,   102,   103,   104,   109,   107,    88,    66,
     132,   137,    68,   110,   138,    65,    67,    51,   134,     3,
      70,    88,   123,   110,    66,   141,    66,    66,    66,    65,
     146,    95,    66,    70,    68,    84,    66,    66,    68,    66,
     132,    68,   110,    88,   139,   141,   141,   141,   109,    66,
     109,   107,   106,    66,    68,    55,    66,   141,    66,   141,
      86,   141
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    89,    90,    90,    90,    90,    91,    91,    91,    91,
      91,    91,    91,    91,    92,    92,    93,    93,    93,    93,
      93,    93,    94,    94,    94,    94,    94,    94,    95,    95,
      96,    96,    96,    96,    97,    97,    97,    98,    98,    98,
      99,    99,    99,    99,    99,   100,   100,   100,   101,   101,
     102,   102,   103,   103,   104,   104,   105,   105,   106,   106,
     107,   107,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   109,   109,   110,   111,   111,   112,   112,
     112,   112,   112,   112,   113,   113,   114,   114,   115,   115,
     115,   115,   115,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   117,   117,   117,   118,   118,
     119,   119,   120,   121,   121,   121,   121,   122,   122,   123,
     123,   123,   124,   124,   124,   125,   125,   126,   126,   127,
     127,   128,   128,   129,   129,   129,   129,   129,   129,   129,
     130,   130,   130,   130,   131,   131,   132,   132,   133,   133,
     134,   134,   134,   135,   135,   136,   136,   137,   137,   137,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   139,
     139,   139,   140,   140,   141,   141,   141,   141,   141,   141,
     142,   142,   142,   143,   143,   143,   143,   144,   144,   145,
     145,   146,   146,   147,   147,   147,   148,   148,   148,   148,
     149,   149,   149,   149,   149,   150,   150,   151,   151,   152,
     152,   152,   152,   111
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     3,     2,     2,     1,     3,     1,     2,     2,     2,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     2,     3,     1,     2,
       1,     2,     1,     2,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     4,     2,     1,     1,
       1,     2,     3,     2,     1,     2,     1,     1,     3,     1,
       2,     3,     4,     5,     2,     1,     3,     1,     3,     1,
       1,     2,     1,     1,     3,     4,     3,     4,     4,     3,
       1,     2,     2,     3,     1,     2,     1,     3,     1,     3,
       2,     2,     1,     1,     3,     1,     2,     1,     1,     2,
       3,     2,     3,     3,     4,     2,     3,     3,     4,     1,
       3,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     2,     3,     3,     4,     1,     2,     1,
       2,     1,     2,     5,     7,     5,     5,     7,     6,     7,
       3,     2,     2,     2,     3,     1,     2,     1,     1,     4,
       3,     3,     2,     2
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
#line 96 "parse.y" /* yacc.c:1646  */
    {(yyval)=context_check();}
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 99 "parse.y" /* yacc.c:1646  */
    {(yyval)= (yyvsp[-1]);}
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 103 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 119 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 137 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 142 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 149 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 155 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 161 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 169 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 175 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 180 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 185 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 190 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 195 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 200 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 205 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 206 "parse.y" /* yacc.c:1646  */
    {if((yyvsp[-2])!=(yyvsp[0])){type_err((yyvsp[-2]),(yyvsp[0]));}}
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 224 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 265 "parse.y" /* yacc.c:1646  */
    {temp=1;}
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 266 "parse.y" /* yacc.c:1646  */
    {temp=2;}
#line 1982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 267 "parse.y" /* yacc.c:1646  */
    {temp=3;}
#line 1988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 268 "parse.y" /* yacc.c:1646  */
    {temp=3;}
#line 1994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 269 "parse.y" /* yacc.c:1646  */
    {temp=3;}
#line 2000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 270 "parse.y" /* yacc.c:1646  */
    {temp=4;}
#line 2006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 271 "parse.y" /* yacc.c:1646  */
    {temp=4;}
#line 2012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 280 "parse.y" /* yacc.c:1646  */
    {install();}
#line 2018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 282 "parse.y" /* yacc.c:1646  */
    {install();}
#line 2024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 329 "parse.y" /* yacc.c:1646  */
    {context_check();}
#line 2030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 344 "parse.y" /* yacc.c:1646  */
    {install();}
#line 2036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 383 "parse.y" /* yacc.c:1646  */
    {install();}
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 384 "parse.y" /* yacc.c:1646  */
    {install();}
#line 2048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 411 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2054 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2058 "y.tab.c" /* yacc.c:1646  */
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
#line 498 "parse.y" /* yacc.c:1906  */


yyerror(s)
char *s;
{
	fflush(stdout);err=1;
	printf("Syntax error at Pos : %d : %d\n",line,cnt);
	exit(0);
	//printf("\n%*s\n%*s\n", column, "^", column, s);
}
main(argc,argv)
int argc;
char **argv;
{

	char *fname;	
	++argv,--argc;/*skip program name*/
	if(argc>0)
	{
		yyin=fopen(argv[0],"r");
		fname=argv[0];
		strcat(fname,"_program");
		yyout=fopen(fname,"w");
	}
	else
	{
		printf("Please give the c filename as an argument.\n");
	}
	yyparse();
	if(err==0)
	printf("No Syntax errors found!\n");
	fname=argv[0];strcat(fname,"_table");
	FILE *sym_tab=fopen(fname,"w");
	fprintf(sym_tab,"Type\tSymbol\n");
	symrec *ptr;	
	for(ptr=sym_table;ptr!=(symrec *)0;ptr=(symrec *)ptr->next)
	{
		fprintf(sym_tab,"%s\t%s\n",ptr->type,ptr->name);
	}
	fclose(sym_tab);	
	
}	

