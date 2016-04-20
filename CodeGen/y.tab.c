#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140101

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "parser.y"
#include <stdio.h>
#include <string.h>
#include "codegen.h"

unsigned short parameter_count;
extern int yylineno;
extern char *yytext;
char quadBuffer[50];
int funcLineNumber = 0;

#line 30 "parser.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union
{
    char         	*str;
    int           	integer;
    float         	real;
    int           	type;
	struct
	{
	    char                 	*value;
	    int   			type;
	    int				cType;
	    struct BackpatchList* 	trueList;
	    struct BackpatchList* 	falseList;
	} expr;
	struct
	{
	  struct BackpatchList* 	nextList;
	} stmt;
	struct
	{
	  int				quad;
	  struct BackpatchList* 	nextList;
	} mark;
	struct
	{
	    int				count;
	    struct SymbolTableEntry* 	queue;
	} exp_list;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 67 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define VOID 257
#define INT 258
#define FLOAT 259
#define CONSTANT 260
#define IDENTIFIER 261
#define IF 262
#define ELSE 263
#define RETURN 264
#define DO 265
#define WHILE 266
#define FOR 267
#define INC_OP 268
#define DEC_OP 269
#define U_PLUS 270
#define U_MINUS 271
#define EQUAL 272
#define NOT_EQUAL 273
#define GREATER_OR_EQUAL 274
#define LESS_OR_EQUAL 275
#define SHIFTLEFT 276
#define LOG_AND 277
#define LOG_OR 278
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,   10,   10,   12,   12,   11,   11,   17,   17,    2,
    2,    2,   16,   16,   16,   16,   16,   16,    3,    3,
    3,    7,    7,    6,    6,    8,    8,    8,    8,    8,
    8,    8,    8,    8,    9,    9,    9,    9,    5,    5,
    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,
    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,
    4,    4,    4,    4,   13,   13,    1,   14,   15,
};
static const short yylen[] = {                            2,
    1,    2,    2,    6,    6,    3,    4,    2,    3,    2,
    2,    3,    2,    2,    4,    4,    1,    0,    1,    1,
    1,    1,    3,    1,    1,   10,    2,    2,    3,    8,
    9,   14,    3,    2,    6,    8,   14,   10,    1,    3,
    2,    2,    4,    4,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    2,    2,    2,    1,
    3,    4,    3,    1,    1,    3,    1,    0,    0,
};
static const short yydefred[] = {                        69,
    0,    0,    0,   20,   19,   21,    0,    3,    2,   67,
    0,    0,   17,    0,    0,    0,   13,   14,    0,    0,
    4,    0,    5,    0,    0,    0,    0,   60,    0,    0,
   68,   68,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   22,    0,   24,   25,    0,   15,
   16,   10,   11,    0,   28,    0,    0,    0,    0,    0,
   41,   42,   58,   59,   57,    0,   34,    0,    0,    0,
    8,    0,    0,    0,    0,    0,    0,   68,   68,    0,
    0,    0,    0,    0,    0,    0,   27,    6,    0,    0,
    0,    0,   29,    0,    0,    0,   61,   33,    0,   63,
    0,    0,   12,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   54,   55,   56,   23,    9,    7,
   68,    0,    0,   68,   62,    0,    0,    0,    0,   68,
   68,    0,    0,   35,    0,    0,    0,    0,    0,    0,
   69,   69,   68,   68,    0,   30,   36,    0,    0,   31,
   69,   26,   38,    0,   68,    0,   69,   69,   32,   37,
};
static const short yydgoto[] = {                          1,
   60,   42,    7,   43,   44,   45,   46,   47,   48,    2,
   23,    8,  102,   89,    3,   16,   49,
};
static const short yysindex[] = {                         0,
    0, -127, -127,    0,    0,    0, -146,    0,    0,    0,
   80,  -89,    0, -146, -146,  -17,    0,    0,  -48, -256,
    0,   -5,    0, -146, -146, -146, -146,    0,   81,   96,
    0,    0,   85,  112,  112,  112,  112,  112,  112,   60,
  -19,  -43,    3,   68,    0,    9,    0,    0,   -5,    0,
    0,    0,    0,  112,    0,   69,   72,   95,  112,   97,
    0,    0,    0,    0,    0,   -4,    0,   19,  112,  100,
    0, -146,  112,  112,  112,  112,  112,    0,    0,  112,
  112,  112,  112,  112,  112,  112,    0,    0,   72,   51,
   21,  109,    0, -119,  112,  102,    0,    0,    3,    0,
    3,  -15,    0,   31,   31,   24,   24,  106,  112,  112,
   24,   24,   59,   59,    0,    0,    0,    0,    0,    0,
    0,  114,  121,    0,    0,  112,   17,   10,   72,    0,
    0,  112,    3,    0,    0,  112,   72,  105,  -91,  135,
    0,    0,    0,    0,  119,    0,    0,  112,   72,    0,
    0,    0,    0,  138,    0,   72,    0,    0,    0,    0,
};
static const short yyrindex[] = {                         0,
    0,  180,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   43,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -28,    0,  -29,    0,    0,   84,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -37,
    0,    0,    0,    0,    0,    0,    0,   84,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   84,    0,    0,    0,    0,    0,    0,    0,  -23,    0,
   67,    0,    0,  153,  160,  170,  395,  146,    0,    0,
  402,  408,  115,  122,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   98,   45,    0,    0,
    0,    0,   75,    0,   48,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
  451,  137,    0,  483,  -10,   -6,   54,  -47,  -57,    0,
    0,  185,    0,  372,  -44,    0,    0,
};
#define YYTABLESIZE 686
static const short yytable[] = {                         64,
   72,   24,   25,   64,   64,   64,   64,   64,   64,   64,
   21,   39,   64,   64,   64,   71,   64,   40,   64,   56,
   70,   64,   64,   19,   64,  125,   20,   38,  126,   39,
   64,   64,   86,   64,   39,   40,   97,   84,   82,   86,
   83,   69,   85,   92,   84,   82,   86,   83,   96,   85,
   94,   84,   82,   86,   83,   80,   85,   81,   84,   82,
   86,   83,   80,   85,   81,   84,   82,   86,   83,   80,
   85,   81,   84,   82,   22,   83,   80,   85,   81,  142,
   24,  135,  118,   18,  123,   43,   18,   24,   43,  141,
  139,  153,   38,   68,   72,   86,  146,  147,  158,   39,
   84,  152,   91,   43,   38,   85,  154,   65,  157,  119,
   65,   39,  159,  160,   10,   66,   68,   40,   66,   12,
   54,  138,  134,   68,   59,  140,   87,   93,   38,    4,
    5,    6,   38,   88,   95,   39,   70,  151,   44,   39,
  100,   44,   86,   98,   38,  120,  122,   84,   82,  121,
   83,   39,   85,  130,   55,   52,   44,   52,   52,   52,
  124,  131,   53,  143,   53,   53,   53,   13,   14,   15,
   24,  144,   24,   52,   52,  145,   52,  150,  155,    1,
   53,   53,   40,   53,   67,   90,   51,    9,    0,   51,
    0,    0,    0,   46,   40,    0,   46,    0,    0,    0,
   45,    0,    0,   45,   51,   51,   68,   51,    0,    0,
   47,   46,   46,   47,   46,    0,    0,    0,   45,   45,
    0,   45,    0,    0,    0,    0,    0,    0,   47,   47,
    0,   47,    0,    0,   64,   64,   64,   64,   64,   64,
   64,    0,    0,   64,   64,   64,   64,   64,   64,   64,
    0,    0,   26,   27,   28,   10,   29,    0,   30,   31,
   32,   33,   34,   35,   36,   37,    0,   73,   74,   75,
   76,   77,   78,   79,   73,   74,   75,   76,   77,   78,
   79,   73,   74,   75,   76,   77,   78,    0,   73,   74,
   75,   76,   77,    0,    0,   73,   74,    0,    0,   77,
    0,    0,    0,    0,    0,    0,   77,   24,   24,   24,
   69,   24,   24,   24,   24,   24,   24,   24,   24,   28,
   10,   29,   43,   30,   31,   32,   33,   34,   35,   36,
   37,   28,   10,   29,    0,   30,   31,   32,   33,   34,
   35,   36,   37,   68,   68,   68,    0,   68,   68,   68,
   68,   68,   68,   68,   68,   28,   10,    0,    0,   28,
   10,    0,    0,   34,   35,   36,   37,   34,   35,   36,
   37,   28,   10,    0,   44,   44,    0,    0,    0,   34,
   35,   36,   37,    0,    0,    0,   52,   52,   52,   52,
   52,   52,   52,   53,   53,   53,   53,   53,   53,   53,
    0,    0,   57,   58,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   51,   51,   51,
   51,   51,   51,   51,   46,   46,   46,   46,    0,   46,
   46,   45,   45,   45,   45,   48,   45,   45,   48,    0,
    0,    0,   50,   47,   47,   50,   47,   47,   49,  109,
  110,   49,    0,   48,   48,    0,   48,   11,    0,    0,
   50,   50,    0,   50,   17,   18,   49,   49,    0,   49,
    0,    0,   41,    0,   50,   51,   52,   53,    0,    0,
   41,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   41,    0,  129,    0,    0,  132,    0,    0,    0,   41,
    0,  136,  137,    0,   41,    0,    0,   41,    0,   41,
    0,    0,    0,    0,  148,  149,   61,   62,   63,   64,
   65,   66,  103,    0,    0,    0,  156,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   41,
    0,    0,    0,    0,    0,   41,    0,    0,    0,    0,
    0,   99,  101,    0,    0,  104,  105,  106,  107,  108,
    0,    0,  111,  112,  113,  114,  115,  116,  117,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   41,
    0,    0,   41,    0,    0,    0,   41,   41,    0,    0,
    0,  127,  128,    0,    0,    0,    0,    0,   41,   41,
    0,    0,    0,    0,    0,    0,   41,    0,  133,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   48,   48,
    0,   48,   48,    0,    0,   50,   50,    0,   50,   50,
    0,   49,   49,    0,   49,   49,
};
static const short yycheck[] = {                         37,
   44,  258,  259,   41,   42,   43,   44,   45,   37,   47,
   59,   41,   41,   42,   43,   59,   45,   41,   47,   30,
   40,   59,   60,   41,   62,   41,   44,   33,   44,   59,
   59,   60,   37,   62,   40,   59,   41,   42,   43,   37,
   45,   61,   47,   54,   42,   43,   37,   45,   59,   47,
   57,   42,   43,   37,   45,   60,   47,   62,   42,   43,
   37,   45,   60,   47,   62,   42,   43,   37,   45,   60,
   47,   62,   42,   43,  123,   45,   60,   47,   62,  137,
   33,  129,   89,   41,   95,   41,   44,   40,   44,  137,
  135,  149,   33,   40,   44,   37,  141,  142,  156,   40,
   42,  149,   49,   59,   33,   47,  151,   41,  156,   59,
   44,   40,  157,  158,  261,   41,   33,  123,   44,   40,
   40,  132,  129,   40,   40,  136,   59,   59,   33,  257,
  258,  259,   33,  125,   40,   40,   40,  148,   41,   40,
   41,   44,   37,  125,   33,  125,  266,   42,   43,   41,
   45,   40,   47,   40,   59,   41,   59,   43,   44,   45,
   59,   41,   41,   59,   43,   44,   45,  257,  258,  259,
  123,  263,  125,   59,   60,   41,   62,   59,   41,    0,
   59,   60,  123,   62,  125,   49,   41,    3,   -1,   44,
   -1,   -1,   -1,   41,  123,   -1,   44,   -1,   -1,   -1,
   41,   -1,   -1,   44,   59,   60,  123,   62,   -1,   -1,
   41,   59,   60,   44,   62,   -1,   -1,   -1,   59,   60,
   -1,   62,   -1,   -1,   -1,   -1,   -1,   -1,   59,   60,
   -1,   62,   -1,   -1,  272,  273,  274,  275,  276,  277,
  278,   -1,   -1,  272,  273,  274,  275,  276,  277,  278,
   -1,   -1,  258,  259,  260,  261,  262,   -1,  264,  265,
  266,  267,  268,  269,  270,  271,   -1,  272,  273,  274,
  275,  276,  277,  278,  272,  273,  274,  275,  276,  277,
  278,  272,  273,  274,  275,  276,  277,   -1,  272,  273,
  274,  275,  276,   -1,   -1,  272,  273,   -1,   -1,  276,
   -1,   -1,   -1,   -1,   -1,   -1,  276,  260,  261,  262,
  263,  264,  265,  266,  267,  268,  269,  270,  271,  260,
  261,  262,  278,  264,  265,  266,  267,  268,  269,  270,
  271,  260,  261,  262,   -1,  264,  265,  266,  267,  268,
  269,  270,  271,  260,  261,  262,   -1,  264,  265,  266,
  267,  268,  269,  270,  271,  260,  261,   -1,   -1,  260,
  261,   -1,   -1,  268,  269,  270,  271,  268,  269,  270,
  271,  260,  261,   -1,  277,  278,   -1,   -1,   -1,  268,
  269,  270,  271,   -1,   -1,   -1,  272,  273,  274,  275,
  276,  277,  278,  272,  273,  274,  275,  276,  277,  278,
   -1,   -1,   31,   32,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  272,  273,  274,
  275,  276,  277,  278,  272,  273,  274,  275,   -1,  277,
  278,  272,  273,  274,  275,   41,  277,  278,   44,   -1,
   -1,   -1,   41,  274,  275,   44,  277,  278,   41,   78,
   79,   44,   -1,   59,   60,   -1,   62,    7,   -1,   -1,
   59,   60,   -1,   62,   14,   15,   59,   60,   -1,   62,
   -1,   -1,   22,   -1,   24,   25,   26,   27,   -1,   -1,
   30,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   40,   -1,  121,   -1,   -1,  124,   -1,   -1,   -1,   49,
   -1,  130,  131,   -1,   54,   -1,   -1,   57,   -1,   59,
   -1,   -1,   -1,   -1,  143,  144,   34,   35,   36,   37,
   38,   39,   72,   -1,   -1,   -1,  155,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   89,
   -1,   -1,   -1,   -1,   -1,   95,   -1,   -1,   -1,   -1,
   -1,   69,   70,   -1,   -1,   73,   74,   75,   76,   77,
   -1,   -1,   80,   81,   82,   83,   84,   85,   86,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  129,
   -1,   -1,  132,   -1,   -1,   -1,  136,  137,   -1,   -1,
   -1,  109,  110,   -1,   -1,   -1,   -1,   -1,  148,  149,
   -1,   -1,   -1,   -1,   -1,   -1,  156,   -1,  126,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  274,  275,
   -1,  277,  278,   -1,   -1,  274,  275,   -1,  277,  278,
   -1,  274,  275,   -1,  277,  278,
};
#define YYFINAL 1
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 278
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? (YYMAXTOKEN + 1) : (a))
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'!'",0,0,0,"'%'",0,0,"'('","')'","'*'","'+'","','","'-'",0,"'/'",0,0,0,0,0,0,0,
0,0,0,0,"';'","'<'","'='","'>'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,
"'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,"VOID","INT","FLOAT","CONSTANT","IDENTIFIER","IF",
"ELSE","RETURN","DO","WHILE","FOR","INC_OP","DEC_OP","U_PLUS","U_MINUS","EQUAL",
"NOT_EQUAL","GREATER_OR_EQUAL","LESS_OR_EQUAL","SHIFTLEFT","LOG_AND","LOG_OR",
"illegal-symbol",
};
static const char *yyrule[] = {
"$accept : program_head",
"program_head : program",
"program : jump_marker function",
"program : program function",
"function : var_type id '(' parameter_list ')' ';'",
"function : var_type id '(' parameter_list ')' function_body",
"function_body : '{' statement_list '}'",
"function_body : '{' declaration_list statement_list '}'",
"declaration_list : declaration ';'",
"declaration_list : declaration_list declaration ';'",
"declaration : INT id",
"declaration : FLOAT id",
"declaration : declaration ',' id",
"parameter_list : INT id",
"parameter_list : FLOAT id",
"parameter_list : parameter_list ',' INT id",
"parameter_list : parameter_list ',' FLOAT id",
"parameter_list : VOID",
"parameter_list :",
"var_type : INT",
"var_type : VOID",
"var_type : FLOAT",
"statement_list : statement",
"statement_list : statement_list marker statement",
"statement : matched_statement",
"statement : unmatched_statement",
"matched_statement : IF '(' assignment ')' marker matched_statement jump_marker ELSE marker matched_statement",
"matched_statement : assignment ';'",
"matched_statement : RETURN ';'",
"matched_statement : RETURN assignment ';'",
"matched_statement : WHILE marker '(' assignment ')' marker matched_statement jump_marker",
"matched_statement : DO marker statement WHILE '(' marker assignment ')' ';'",
"matched_statement : FOR '(' assignment ';' marker assignment ';' marker assignment jump_marker ')' marker matched_statement jump_marker",
"matched_statement : '{' statement_list '}'",
"matched_statement : '{' '}'",
"unmatched_statement : IF '(' assignment ')' marker statement",
"unmatched_statement : WHILE marker '(' assignment ')' marker unmatched_statement jump_marker",
"unmatched_statement : FOR '(' assignment ';' marker assignment ';' marker assignment jump_marker ')' marker unmatched_statement jump_marker",
"unmatched_statement : IF '(' assignment ')' marker matched_statement jump_marker ELSE marker unmatched_statement",
"assignment : expression",
"assignment : id '=' expression",
"expression : INC_OP expression",
"expression : DEC_OP expression",
"expression : expression LOG_OR marker expression",
"expression : expression LOG_AND marker expression",
"expression : expression NOT_EQUAL expression",
"expression : expression EQUAL expression",
"expression : expression GREATER_OR_EQUAL expression",
"expression : expression LESS_OR_EQUAL expression",
"expression : expression '>' expression",
"expression : expression '<' expression",
"expression : expression SHIFTLEFT expression",
"expression : expression '+' expression",
"expression : expression '-' expression",
"expression : expression '*' expression",
"expression : expression '/' expression",
"expression : expression '%' expression",
"expression : '!' expression",
"expression : U_PLUS expression",
"expression : U_MINUS expression",
"expression : CONSTANT",
"expression : '(' expression ')'",
"expression : id '(' exp_list ')'",
"expression : id '(' ')'",
"expression : id",
"exp_list : expression",
"exp_list : exp_list ',' expression",
"id : IDENTIFIER",
"marker :",
"jump_marker :",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 72 "parser.y"
	{
	    SymbolTableEntry* mainFunc = lookup("main");
	    if(mainFunc == NULL){
		printf("ERROR: Main function not found!\n");
		yyerror();
	    }
	    backpatch(yystack.l_mark[0].stmt.nextList,mainFunc->line+1);
	}
break;
case 2:
#line 84 "parser.y"
	{
            printf("PARSER: Processing single function.\n");
	    yyval.stmt.nextList = yystack.l_mark[-1].mark.nextList;
            backpatch(yystack.l_mark[0].stmt.nextList, nextquad());
            printf("PARSER: Done processing single function.\n");
        }
break;
case 3:
#line 91 "parser.y"
	{
            printf("PARSER: Processing function in function list.\n");
	    yyval.stmt.nextList = yystack.l_mark[-1].stmt.nextList;
            backpatch(yystack.l_mark[0].stmt.nextList, nextquad());
            printf("PARSER: Done processing function in function list.\n");
        }
break;
case 4:
#line 103 "parser.y"
	{
            printf("PARSER: found function prototype for %s having %d parameters\n",yystack.l_mark[-4].str,parameter_count);
            addFunctionPrototype(yystack.l_mark[-4].str, parameter_count, yystack.l_mark[-5].type);
            parameter_count = 0;
            yyval.stmt.nextList = NULL;
        }
break;
case 5:
#line 110 "parser.y"
	{
            printf("PARSER: found function definition for %s having %d parameters starting at line %d\n", yystack.l_mark[-4].str,parameter_count,funcLineNumber);
            addFunction(yystack.l_mark[-4].str, parameter_count, yystack.l_mark[-5].type, funcLineNumber);
            parameter_count = 0;
	    funcLineNumber = nextquad();
            yyval.stmt.nextList = yystack.l_mark[0].stmt.nextList;
        }
break;
case 6:
#line 121 "parser.y"
	{
            printf("PARSER: found function body without declarations\n");
            yyval.stmt.nextList = yystack.l_mark[-1].stmt.nextList;
        }
break;
case 7:
#line 126 "parser.y"
	{
            printf("PARSER: found function body with declarations\n");
            yyval.stmt.nextList = yystack.l_mark[-1].stmt.nextList;
        }
break;
case 8:
#line 134 "parser.y"
	{
            printf("PARSER: found declaration\n");
        }
break;
case 9:
#line 138 "parser.y"
	{
            printf("PARSER: found declaration list\n");
        }
break;
case 10:
#line 145 "parser.y"
	{
            yyval.type = ST_INT;
            addSymbolToQueue(yystack.l_mark[0].str, ST_INT, 0);
            printf("PARSER: found integer declaration\n");
        }
break;
case 11:
#line 151 "parser.y"
	{
            yyval.type = ST_REAL;
            addSymbolToQueue(yystack.l_mark[0].str, ST_REAL, 0);
            printf("PARSER: found float declaration\n");
        }
break;
case 12:
#line 157 "parser.y"
	{
            if(ST_INT == yystack.l_mark[-2].type) {
                addSymbolToQueue(yystack.l_mark[0].str, ST_INT, 0);
            } else if(ST_REAL == yystack.l_mark[-2].type) {
                addSymbolToQueue(yystack.l_mark[0].str, ST_REAL, 0);
            }
            printf("PARSER: found mutliple declarations\n");
        }
break;
case 13:
#line 169 "parser.y"
	{
            parameter_count++;
            addSymbolToQueue(yystack.l_mark[0].str, ST_INT, parameter_count);
            printf("PARSER: found integer parameter\n");
        }
break;
case 14:
#line 175 "parser.y"
	{
            parameter_count++;
            addSymbolToQueue(yystack.l_mark[0].str, ST_REAL, parameter_count);
            printf("PARSER: found float parameter\n");
        }
break;
case 15:
#line 181 "parser.y"
	{
            parameter_count++;
            addSymbolToQueue(yystack.l_mark[0].str, ST_INT, parameter_count);
            printf("PARSER: found parameter list with integer at end\n");
        }
break;
case 16:
#line 187 "parser.y"
	{
            parameter_count++;
            addSymbolToQueue(yystack.l_mark[0].str, ST_REAL, parameter_count);
            printf("PARSER: found parameter list with float at end\n");
        }
break;
case 17:
#line 193 "parser.y"
	{
            printf("PARSER: found void parameter\n");
        }
break;
case 18:
#line 197 "parser.y"
	{
            printf("PARSER: found EPSILON parameter\n");
        }
break;
case 19:
#line 204 "parser.y"
	{
            yyval.type = SIT_INT;
            printf("PARSER: found integer variable type\n");
        }
break;
case 20:
#line 209 "parser.y"
	{
            yyval.type = SIT_NONE;
            printf("PARSER: found void return type\n");
        }
break;
case 21:
#line 214 "parser.y"
	{
            yyval.type = SIT_REAL;
            printf("PARSER: found float variable type\n");
        }
break;
case 22:
#line 224 "parser.y"
	{
	    printf("PARSER: Processing single statement in list statement list.\n");
            yyval.stmt.nextList = yystack.l_mark[0].stmt.nextList;
	    printf("PARSER: Done processing single statement in list statement list.\n");
        }
break;
case 23:
#line 230 "parser.y"
	{
	    printf("PARSER: Processing statement list.\n");
	    backpatch(yystack.l_mark[-2].stmt.nextList,yystack.l_mark[-1].mark.quad);
	    yyval.stmt.nextList = yystack.l_mark[0].stmt.nextList;
	    printf("PARSER: Done processing statement list.\n");
        }
break;
case 24:
#line 240 "parser.y"
	{
	    printf("PARSER: Processing matched statement.\n");
	    yyval.stmt.nextList = yystack.l_mark[0].stmt.nextList;
	    printf("PARSER: Done processing matched statement.\n");
        }
break;
case 25:
#line 246 "parser.y"
	{
	    printf("PARSER: Processing unmatched statement.\n");
	    yyval.stmt.nextList = yystack.l_mark[0].stmt.nextList;
	    printf("PARSER: Done processing unmatched statement.\n");
        }
break;
case 26:
#line 255 "parser.y"
	{
	    printf("PARSER: Processing matched if then else.\n");
	    backpatch(yystack.l_mark[-7].expr.trueList,yystack.l_mark[-5].mark.quad);
	    backpatch(yystack.l_mark[-7].expr.falseList,yystack.l_mark[-1].mark.quad);
	    yyval.stmt.nextList = mergelists(yystack.l_mark[-3].mark.nextList,yystack.l_mark[0].stmt.nextList);
	    yyval.stmt.nextList = mergelists(yyval.stmt.nextList,yystack.l_mark[-4].stmt.nextList);
	    printf("PARSER: Done processing matched if then else.\n");
        }
break;
case 27:
#line 264 "parser.y"
	{
	    printf("PARSER: Processing matched assignment.\n");
        /*backpatch($1.trueList, 1);*/
        /*backpatch($1.falseList, 0);*/
	    yyval.stmt.nextList = NULL;
	    printf("PARSER: Done processing matched assignment.\n");
	}
break;
case 28:
#line 272 "parser.y"
	{
	    /*TODO: Check type, maybe true/falselists*/
	    printf("PARSER: Processing void return.\n");
	    yyval.stmt.nextList = NULL;
	    sprintf(quadBuffer,"RETURN");
	    genquad(quadBuffer);
	    printf("PARSER: Done processing void return.\n");
        }
break;
case 29:
#line 281 "parser.y"
	{
	    /*TODO: Check type, maybe true/falselists*/
	    printf("PARSER: Processing return.\n");
	    yyval.stmt.nextList = NULL;
            sprintf(quadBuffer,"RETURN %s",yystack.l_mark[-1].expr.value);
	    genquad(quadBuffer);
	    printf("PARSER: Done processing return.\n");
        }
break;
case 30:
#line 290 "parser.y"
	{
	    printf("PARSER: Processing matched while.\n");
	    backpatch(yystack.l_mark[-4].expr.trueList,yystack.l_mark[-2].mark.quad);
	    yyval.stmt.nextList = yystack.l_mark[-4].expr.falseList;
	    backpatch(yystack.l_mark[-1].stmt.nextList,yystack.l_mark[-6].mark.quad);
	    backpatch(yystack.l_mark[0].mark.nextList,yystack.l_mark[-6].mark.quad);
	    printf("PARSER: Done processing matched while.\n");
        }
break;
case 31:
#line 299 "parser.y"
	{
	    backpatch(yystack.l_mark[-6].stmt.nextList,yystack.l_mark[-3].mark.quad);
	    backpatch(yystack.l_mark[-2].expr.trueList,yystack.l_mark[-7].mark.quad);
	    yyval.stmt.nextList = yystack.l_mark[-2].expr.falseList;
        }
break;
case 32:
#line 305 "parser.y"
	{
            printf("PARSER: Processing matched for\n");
            if(ST_BOOL == yystack.l_mark[-11].expr.type || ST_BOOL == yystack.l_mark[-5].expr.type) {
                printf("error, no boolean statements allowed as 1st or 3rd assignment in for loop\n");
                yyerror();
            }
            if(ST_BOOL != yystack.l_mark[-8].expr.type) {
                printf("error, 2nd argument of for loop must be boolean\n");
                yyerror();
            }
            backpatch(yystack.l_mark[-11].expr.trueList, yystack.l_mark[-9].mark.quad);
            backpatch(yystack.l_mark[-1].stmt.nextList, yystack.l_mark[-6].mark.quad);
            backpatch(yystack.l_mark[0].mark.nextList, yystack.l_mark[-6].mark.quad);
            yyval.stmt.nextList = yystack.l_mark[-8].expr.falseList;
            backpatch(yystack.l_mark[-8].expr.trueList, yystack.l_mark[-2].mark.quad);
            backpatch(yystack.l_mark[-5].expr.trueList, yystack.l_mark[-9].mark.quad);
            backpatch(yystack.l_mark[-4].mark.nextList, yystack.l_mark[-9].mark.quad);
            printf("PARSER: Done processing for\n");
        }
break;
case 33:
#line 325 "parser.y"
	{
	    printf("PARSER: Processing statement block.\n");
	    yyval.stmt.nextList = yystack.l_mark[-1].stmt.nextList;
	    printf("PARSER: Done processing statement block.\n");
        }
break;
case 34:
#line 331 "parser.y"
	{	    
	    printf("PARSER: Processing empty block.\n");
	    yyval.stmt.nextList = NULL;
	    printf("PARSER: Done processing empty block.\n");
        }
break;
case 35:
#line 340 "parser.y"
	{
	    printf("PARSER: Processing unmatched if then.\n");
	    backpatch(yystack.l_mark[-3].expr.trueList,yystack.l_mark[-1].mark.quad);
	    yyval.stmt.nextList = mergelists(yystack.l_mark[-3].expr.falseList,yystack.l_mark[0].stmt.nextList);
	    printf("PARSER: Done processing unmatched if then.\n");
        }
break;
case 36:
#line 347 "parser.y"
	{
	    printf("PARSER: Processing unmatched while.\n");
	    backpatch(yystack.l_mark[-4].expr.trueList,yystack.l_mark[-2].mark.quad);
	    yyval.stmt.nextList = yystack.l_mark[-4].expr.falseList;
	    backpatch(yystack.l_mark[-1].stmt.nextList,yystack.l_mark[-6].mark.quad);
	    backpatch(yystack.l_mark[0].mark.nextList,yystack.l_mark[-6].mark.quad);
	    printf("PARSER: Done processing unmatched while.\n");
        }
break;
case 37:
#line 356 "parser.y"
	{
            printf("PARSER: Processing unmatched for\n");
            if(ST_BOOL == yystack.l_mark[-11].expr.type || ST_BOOL == yystack.l_mark[-5].expr.type) {
                printf("error, no boolean statements allowed as 1st or 3rd assignment in for loop\n");
                yyerror();
            }
            if(ST_BOOL != yystack.l_mark[-8].expr.type) {
                printf("error, 2nd argument of for loop must be boolean\n");
                yyerror();
            }
            backpatch(yystack.l_mark[-11].expr.trueList, yystack.l_mark[-9].mark.quad);
            backpatch(yystack.l_mark[-1].stmt.nextList, yystack.l_mark[-6].mark.quad);
            backpatch(yystack.l_mark[0].mark.nextList, yystack.l_mark[-6].mark.quad);
            yyval.stmt.nextList = yystack.l_mark[-8].expr.falseList;
            backpatch(yystack.l_mark[-8].expr.trueList, yystack.l_mark[-2].mark.quad);
            backpatch(yystack.l_mark[-5].expr.trueList, yystack.l_mark[-9].mark.quad);
            backpatch(yystack.l_mark[-4].mark.nextList, yystack.l_mark[-9].mark.quad);
            printf("PARSER: Done processing for\n");
        }
break;
case 38:
#line 377 "parser.y"
	{
	    printf("PARSER: Processing unmatched if then else.\n");
	    backpatch(yystack.l_mark[-7].expr.trueList,yystack.l_mark[-5].mark.quad);
	    backpatch(yystack.l_mark[-7].expr.falseList,yystack.l_mark[-1].mark.quad);
	    yyval.stmt.nextList = mergelists(yystack.l_mark[-3].mark.nextList,yystack.l_mark[0].stmt.nextList);
	    yyval.stmt.nextList = mergelists(yyval.stmt.nextList,yystack.l_mark[-4].stmt.nextList);
	    printf("PARSER: Done processing unmatched if then else.\n");
        }
break;
case 39:
#line 389 "parser.y"
	{
            printf("PARSER: found expression as assignment %s\n", yystack.l_mark[0].expr.value);
            yyval.expr=yystack.l_mark[0].expr;
        }
break;
case 40:
#line 394 "parser.y"
	{
            int destType = getSymbolType(yystack.l_mark[-2].str);
        	if(destType == 0){
        		printf("ERROR: Not in scope");
        	}
            if(destType != yystack.l_mark[0].expr.type) {
                printf("Type error on line: %d\n", yylineno);
                yyerror();
            }
            printf("PARSER: found real assignment\n");
            sprintf(quadBuffer,"%s := %s",yystack.l_mark[-2].str,yystack.l_mark[0].expr.value);
            genquad(quadBuffer);
            yyval.expr.type = destType;
            yyval.expr.trueList = yystack.l_mark[0].expr.trueList;
            yyval.expr.cType = C_VARIABLE;
            yyval.expr.value = yystack.l_mark[-2].str;
        }
break;
case 41:
#line 415 "parser.y"
	{
	    printf("PARSER: Processing increment.");
	    if(yystack.l_mark[0].expr.type != ST_INT){
		    printf("ERROR: Increment not allowed for types different than Integer.\n");
		    yyerror();
	    }
	    /*Create a variable if needed*/
	    if(yystack.l_mark[0].expr.cType != C_VARIABLE){
		    char *var = nextIntVar();
		    sprintf(quadBuffer,"%s := %s",var,yystack.l_mark[0].expr.value);
		    genquad(quadBuffer);
		    free(yystack.l_mark[0].expr.value);
		    yystack.l_mark[0].expr.value = var;
		    yystack.l_mark[0].expr.type = ST_INT;
		    yystack.l_mark[0].expr.cType = C_VARIABLE;
	    }
            sprintf(quadBuffer,"%s := %s + 1",yystack.l_mark[0].expr.value,yystack.l_mark[0].expr.value);
            genquad(quadBuffer);
            /*Set the attributes*/
            yyval.expr = yystack.l_mark[0].expr;
            yyval.expr.trueList = NULL;
            yyval.expr.falseList = NULL;
	    printf("PARSER: Done processing increment.");
        }
break;
case 42:
#line 440 "parser.y"
	{
	    printf("PARSER: Processing decrement.");
	    if(yystack.l_mark[0].expr.type != ST_INT){
		    printf("ERROR: Decrement not allowed for types different than Integer.\n");
		    yyerror();
	    }
	    /*Create a variable if needed*/
	    if(yystack.l_mark[0].expr.cType != C_VARIABLE){
		    char *var = nextIntVar();
		    sprintf(quadBuffer,"%s := %s",var,yystack.l_mark[0].expr.value);
		genquad(quadBuffer);
		    free(yystack.l_mark[0].expr.value);
		    yystack.l_mark[0].expr.value = var;
		    yystack.l_mark[0].expr.type = ST_INT;
		    yystack.l_mark[0].expr.cType = C_VARIABLE;
	    }
            sprintf(quadBuffer,"%s := %s - 1",yystack.l_mark[0].expr.value,yystack.l_mark[0].expr.value);
            genquad(quadBuffer);
            /*Set the attributes*/
            yyval.expr = yystack.l_mark[0].expr;
            yyval.expr.trueList = NULL;
            yyval.expr.falseList = NULL;
	    printf("PARSER: Done processing decrement.");
        }
break;
case 43:
#line 465 "parser.y"
	{
            if(ST_BOOL != yystack.l_mark[-3].expr.type) {
                sprintf(quadBuffer, "IF (%s <> 0) GOTO", yystack.l_mark[-3].expr.value);
                yystack.l_mark[-3].expr.trueList = addToList(NULL, genquad(quadBuffer));
                sprintf(quadBuffer, "GOTO");
                yystack.l_mark[-3].expr.falseList = addToList(NULL, genquad(quadBuffer));
            }
            if(ST_BOOL != yystack.l_mark[0].expr.type) {
                sprintf(quadBuffer, "IF (%s <> 0) GOTO", yystack.l_mark[0].expr.value);
                yystack.l_mark[0].expr.trueList = addToList(NULL, genquad(quadBuffer));
                sprintf(quadBuffer, "GOTO");
                yystack.l_mark[0].expr.falseList = addToList(NULL, genquad(quadBuffer));
            }
            yyval.expr.trueList = mergelists(yystack.l_mark[-3].expr.trueList, yystack.l_mark[0].expr.trueList);
            backpatch(yystack.l_mark[-3].expr.falseList, yystack.l_mark[-1].mark.quad);
            yyval.expr.falseList = yystack.l_mark[0].expr.falseList;
            yyval.expr.type = ST_BOOL;
	    /*printf("PARSER: Processing logical or.\n");
	    if($1.type != ST_BOOL){
		if($1.type != ST_INT && $1.type != ST_REAL){
		    printf("ERROR: Only Bool, Int and Float allowed in logical expressions!\n");
		    yyerror();
		}
		char* var = nextBoolVar();
		//sprintf(quadBuffer,"%s = FALSE",var);
		//genquad(quadBuffer);
		sprintf(quadBuffer,"IF (%s = 0) GOTO",$1.value);
		$1.falseList = addToList(NULL,genquad(quadBuffer));
		//sprintf(quadBuffer,"%s = TRUE",var);
		//genquad(quadBuffer);
		sprintf(quadBuffer,"GOTO",$1.value);
		$1.trueList = addToList(NULL,genquad(quadBuffer));
		free($1.value);
		$1.value = var;
		$1.type = ST_BOOL;
		$1.cType = C_VARIABLE;
		$3.quad = nextquad();
	    }
	    if($4.type != ST_BOOL){
		if($4.type != ST_INT && $4.type != ST_REAL){
		    printf("ERROR: Only Bool, Int and Float allowed in logical expressions!\n");
		    yyerror();
		}
		$3.quad = nextquad();
		char* var = nextBoolVar();
		//sprintf(quadBuffer,"%s = FALSE",var);
		//genquad(quadBuffer);
		sprintf(quadBuffer,"IF (%s = 0) GOTO",$4.value);
		$4.falseList = addToList(NULL,genquad(quadBuffer));
		//sprintf(quadBuffer,"%s = TRUE",var);
		//genquad(quadBuffer);
		sprintf(quadBuffer,"GOTO",$4.value);
		$4.trueList = addToList(NULL,genquad(quadBuffer));
		free($4.value);
		$4.value = var;
		$4.type = ST_BOOL;
		$4.cType = C_VARIABLE;
	    }
	    backpatch($1.falseList,$3.quad);
        //$$.type = ST_BOOL;
	    $$.trueList = mergelists($1.trueList,$4.trueList);
	    $$.falseList = $4.falseList;
	    printf("PARSER: Done processing logical or.\n");
        */
	    }
break;
case 44:
#line 531 "parser.y"
	{
            if(ST_BOOL != yystack.l_mark[-3].expr.type) {
                sprintf(quadBuffer, "IF (%s <> 0) GOTO", yystack.l_mark[-3].expr.value);
                yystack.l_mark[-3].expr.trueList = addToList(NULL, genquad(quadBuffer));
                sprintf(quadBuffer, "GOTO");
                yystack.l_mark[-3].expr.falseList = addToList(NULL, genquad(quadBuffer));
            }
            if(ST_BOOL != yystack.l_mark[0].expr.type) {
                sprintf(quadBuffer, "IF (%s <> 0) GOTO", yystack.l_mark[0].expr.value);
                yystack.l_mark[0].expr.trueList = addToList(NULL, genquad(quadBuffer));
                sprintf(quadBuffer, "GOTO");
                yystack.l_mark[0].expr.falseList = addToList(NULL, genquad(quadBuffer));
            }
            yyval.expr.falseList = mergelists(yystack.l_mark[-3].expr.falseList, yystack.l_mark[0].expr.falseList);
            backpatch(yystack.l_mark[-3].expr.trueList, yystack.l_mark[-1].mark.quad);
            yyval.expr.trueList = yystack.l_mark[0].expr.trueList;
            yyval.expr.type = ST_BOOL;
        /*
	    printf("PARSER: Processing logical and.\n");
	    if($1.type != ST_BOOL){
		if($1.type != ST_INT && $1.type != ST_REAL){
		    printf("ERROR: Only Bool, Int and Float allowed in logical expressions!\n");
		    yyerror();
		}
		char* var = nextBoolVar();
		//sprintf(quadBuffer,"%s = FALSE",var);
		//genquad(quadBuffer);
		sprintf(quadBuffer,"IF (%s = 0) GOTO",$1.value);
		$1.falseList = addToList(NULL,genquad(quadBuffer));
		//sprintf(quadBuffer,"%s = TRUE",var);
		//genquad(quadBuffer);
		sprintf(quadBuffer,"GOTO",$1.value);
		$1.trueList = addToList(NULL,genquad(quadBuffer));
		free($1.value);
		$1.value = var;
		$1.type = ST_BOOL;
		$1.cType = C_VARIABLE;
		$3.quad = nextquad();
	    }
	    if($4.type != ST_BOOL){
		if($4.type != ST_INT && $4.type != ST_REAL){
		    printf("ERROR: Only Bool, Int and Float allowed in logical expressions!\n");
		    yyerror();
		}
		$3.quad = nextquad();
		char* var = nextBoolVar();
		//sprintf(quadBuffer,"%s = FALSE",var);
		//genquad(quadBuffer);
		sprintf(quadBuffer,"IF (%s = 0) GOTO",$4.value);
		$4.falseList = addToList(NULL,genquad(quadBuffer));
		//sprintf(quadBuffer,"%s = TRUE",var);
		//genquad(quadBuffer);
		sprintf(quadBuffer,"GOTO",$4.value);
		$4.trueList = addToList(NULL,genquad(quadBuffer));
		free($4.value);
		$4.value = var;
		$4.type = ST_BOOL;
		$4.cType = C_VARIABLE;
	    }
	    backpatch($1.trueList,$3.quad);
        //$$.type = ST_BOOL;
	    $$.falseList = mergelists($1.falseList,$4.falseList);
	    $$.trueList = $4.trueList;
	    printf("PARSER: Done processing logical and.\n");
        */
	  }
break;
case 45:
#line 598 "parser.y"
	{
	    printf("PARSER: Processing logical not equal.\n");
	    if(yystack.l_mark[-2].expr.type != ST_INT && yystack.l_mark[-2].expr.type != ST_REAL){
		printf("ERROR: Only Integer, Float and Bool values allowed in comparsions.\n");
		yyerror();
	    }
            sprintf(quadBuffer,"IF (%s <> %s) GOTO",yystack.l_mark[-2].expr.value,yystack.l_mark[0].expr.value);
	    yyval.expr.trueList = addToList(NULL, genquad(quadBuffer));
            sprintf(quadBuffer,"GOTO");
	    yyval.expr.falseList = addToList(NULL, genquad(quadBuffer));
	    yyval.expr.value = "TrueFalse Only!";
	    yyval.expr.type = ST_BOOL;
	    yyval.expr.cType = C_NONE;
	    printf("PARSER: Done processing logical not equal.\n");
        }
break;
case 46:
#line 614 "parser.y"
	{
	    printf("PARSER: Processing logical equal.\n");
	    if(yystack.l_mark[-2].expr.type != ST_INT && yystack.l_mark[-2].expr.type != ST_REAL){
		printf("ERROR: Only Integer, Float and Bool values allowed in comparsions.\n");
		yyerror();
	    }
            sprintf(quadBuffer,"IF (%s = %s) GOTO",yystack.l_mark[-2].expr.value,yystack.l_mark[0].expr.value);
	    yyval.expr.trueList = addToList(NULL, genquad(quadBuffer));
            sprintf(quadBuffer,"GOTO");
	    yyval.expr.falseList = addToList(NULL, genquad(quadBuffer));
        /* jefftest*/
        if(ST_BOOL == yystack.l_mark[-2].expr.type) {
            yyval.expr.trueList = mergelists(yyval.expr.trueList, yystack.l_mark[-2].expr.trueList);
            yyval.expr.falseList = mergelists(yyval.expr.falseList, yystack.l_mark[-2].expr.falseList);
        }
        if(ST_BOOL == yystack.l_mark[0].expr.type) {
            yyval.expr.trueList = mergelists(yyval.expr.trueList, yystack.l_mark[0].expr.trueList);
            yyval.expr.falseList = mergelists(yyval.expr.falseList, yystack.l_mark[0].expr.falseList);
        }
	    yyval.expr.value = "TrueFalse Only!";
	    yyval.expr.type = ST_BOOL;
	    yyval.expr.cType = C_NONE;
	    printf("PARSER: Done processing logical equal.\n");
        }
break;
case 47:
#line 639 "parser.y"
	{
	    printf("PARSER: Processing logical greater or equal.\n");
	    if(yystack.l_mark[-2].expr.type != ST_INT && yystack.l_mark[-2].expr.type != ST_REAL){
		printf("ERROR: Only Integer, Float and Bool values allowed in comparsions.\n");
		yyerror();
	    }
            sprintf(quadBuffer,"IF (%s >= %s) GOTO",yystack.l_mark[-2].expr.value,yystack.l_mark[0].expr.value);
	    yyval.expr.trueList = addToList(NULL, genquad(quadBuffer));
            sprintf(quadBuffer,"GOTO");
	    yyval.expr.falseList = addToList(NULL, genquad(quadBuffer));
	    yyval.expr.value = "TrueFalse Only!";
	    yyval.expr.type = ST_BOOL;
	    yyval.expr.cType = C_NONE;
	    printf("PARSER: Done processing logical greater or equal.\n");
        }
break;
case 48:
#line 655 "parser.y"
	{
	    printf("PARSER: Processing logical smaller or equal.\n");
	    if(yystack.l_mark[-2].expr.type != ST_INT && yystack.l_mark[-2].expr.type != ST_REAL){
		printf("ERROR: Only Integer, Float and Bool values allowed in comparsions.\n");
		yyerror();
	    }
	    sprintf(quadBuffer,"IF (%s <= %s) GOTO",yystack.l_mark[-2].expr.value,yystack.l_mark[0].expr.value);
	    yyval.expr.trueList = addToList(NULL, genquad(quadBuffer));
	    sprintf(quadBuffer,"GOTO");
	    yyval.expr.falseList = addToList(NULL, genquad(quadBuffer));
	    yyval.expr.value = "TrueFalse Only!";
	    yyval.expr.type = ST_BOOL;
	    yyval.expr.cType = C_NONE;
	    printf("PARSER: Done processing logical smaller or equal.\n");
        }
break;
case 49:
#line 671 "parser.y"
	{
	    printf("PARSER: Processing logical bigger.\n");
	    if(yystack.l_mark[-2].expr.type != ST_INT && yystack.l_mark[-2].expr.type != ST_REAL){
		printf("ERROR: Only Integer, Float and Bool values allowed in comparsions.\n");
		yyerror();
	    }
	    sprintf(quadBuffer,"IF (%s > %s) GOTO",yystack.l_mark[-2].expr.value,yystack.l_mark[0].expr.value);
	    yyval.expr.trueList = addToList(NULL, genquad(quadBuffer));
	    sprintf(quadBuffer,"GOTO");
	    yyval.expr.falseList = addToList(NULL, genquad(quadBuffer));
	    yyval.expr.value = "TrueFalse Only!";
	    yyval.expr.type = ST_BOOL;
	    yyval.expr.cType = C_NONE;
	    printf("PARSER: Done processing logical bigger.\n");
        }
break;
case 50:
#line 687 "parser.y"
	{
	    printf("PARSER: Processing logical smaller.\n");
	    if(yystack.l_mark[-2].expr.type != ST_INT && yystack.l_mark[-2].expr.type != ST_REAL){
		printf("ERROR: Only Integer, Float and Bool values allowed in comparsions.\n");
		yyerror();
	    }
	    sprintf(quadBuffer,"IF (%s < %s) GOTO",yystack.l_mark[-2].expr.value,yystack.l_mark[0].expr.value);
	    yyval.expr.trueList = addToList(NULL, genquad(quadBuffer));
	    sprintf(quadBuffer,"GOTO");
	    yyval.expr.falseList = addToList(NULL, genquad(quadBuffer));
	    yyval.expr.value = "TrueFalse Only!";
	    yyval.expr.type = ST_BOOL;
	    yyval.expr.cType = C_NONE;
	    printf("PARSER: Done processing logical smaller.\n");
        }
break;
case 51:
#line 703 "parser.y"
	{
	    printf("PARSER: Processing left shift.\n");
	    if(yystack.l_mark[-2].expr.type != ST_INT && yystack.l_mark[-2].expr.type!= ST_REAL &&  yystack.l_mark[0].expr.type != ST_INT){
		printf("ERROR: Only integer and float values allowed when shifting.\n");
		yyerror();
	    }
	    
            char* var = NULL;
            char* shiftVar = nextIntVar();
            switch(yystack.l_mark[-2].expr.type){
            	case ST_INT: var = nextIntVar();break;
            	case ST_REAL:var = nextFloatVar();break;
            }
            char buffer[50];
            sprintf(quadBuffer, "%s := %s", shiftVar, yystack.l_mark[0].expr.value);
            genquad(quadBuffer);
            sprintf(quadBuffer, "%s := %s", var, yystack.l_mark[-2].expr.value);
            genquad(quadBuffer);
            sprintf(quadBuffer, "IF (%s <= 0) GOTO %d", shiftVar, nextquad()+4);
            genquad(quadBuffer);
            sprintf(quadBuffer, "%s := %s * 2", var, var);
            genquad(quadBuffer);
            sprintf(quadBuffer, "%s := %s - 1", shiftVar, shiftVar);
            genquad(quadBuffer);
            sprintf(quadBuffer, "GOTO %d", nextquad()-3);
            genquad(quadBuffer);


            yyval.expr.value = var;
            yyval.expr.type = yystack.l_mark[-2].expr.type;
            yyval.expr.cType = C_VARIABLE;
	    yyval.expr.trueList = NULL;
	    yyval.expr.falseList = NULL;
	    printf("PARSER: Done processing left shift.\n");
        }
break;
case 52:
#line 739 "parser.y"
	{
	    printf("PARSER: Processing addition.\n");
	    if(yystack.l_mark[-2].expr.type != ST_INT && yystack.l_mark[-2].expr.type!= ST_REAL &&  yystack.l_mark[0].expr.type != ST_INT && yystack.l_mark[0].expr.type != ST_REAL){
		printf("ERROR: Only integer and float values allowed when adding numbers.\n");
		yyerror();
	    }
	    int type = 0;
	    if(yystack.l_mark[-2].expr.type == yystack.l_mark[0].expr.type){
		type = yystack.l_mark[-2].expr.type;
	    }
	    else{
		type = ST_REAL;
	    }
	    
	    char* var = NULL;
            switch(type){
            	case ST_INT: var = nextIntVar();break;
            	case ST_REAL:var = nextFloatVar();break;
            }
            char buffer[50];
            sprintf(quadBuffer,"%s := %s + %s",var,yystack.l_mark[-2].expr.value,yystack.l_mark[0].expr.value);
            genquad(quadBuffer);
            yyval.expr.value = var;
            yyval.expr.type = type;
            yyval.expr.cType = C_VARIABLE;
	    yyval.expr.trueList = NULL;
	    yyval.expr.falseList = NULL;
	    printf("PARSER: Done processing addition.\n");
        }
break;
case 53:
#line 769 "parser.y"
	{
	    printf("PARSER: Processing substraction.\n");
	    if(yystack.l_mark[-2].expr.type != ST_INT && yystack.l_mark[-2].expr.type!= ST_REAL &&  yystack.l_mark[0].expr.type != ST_INT && yystack.l_mark[0].expr.type != ST_REAL){
		printf("ERROR: Only integer and float values allowed when substracting numbers.\n");
		yyerror();
	    }
	    int type = 0;
	    if(yystack.l_mark[-2].expr.type == yystack.l_mark[0].expr.type){
		type = yystack.l_mark[-2].expr.type;
	    }
	    else{
		type = ST_REAL;
	    }
	    
	    char* var = NULL;
            switch(type){
            	case ST_INT: var = nextIntVar();break;
            	case ST_REAL:var = nextFloatVar();break;
            }
            char buffer[50];
            sprintf(quadBuffer,"%s := %s - %s",var,yystack.l_mark[-2].expr.value,yystack.l_mark[0].expr.value);
            genquad(quadBuffer);
            yyval.expr.value = var;
            yyval.expr.type = type;
            yyval.expr.cType = C_VARIABLE;
	    yyval.expr.trueList = NULL;
	    yyval.expr.falseList = NULL;
	    printf("PARSER: Done processing substraction.\n");
        }
break;
case 54:
#line 799 "parser.y"
	{
	    printf("PARSER: Processing multiplication.\n");
	    if(yystack.l_mark[-2].expr.type != ST_INT && yystack.l_mark[-2].expr.type!= ST_REAL &&  yystack.l_mark[0].expr.type != ST_INT && yystack.l_mark[0].expr.type != ST_REAL){
		printf("ERROR: Only integer and float values allowed when multiplicating numbers.\n");
		yyerror();
	    }
	    int type = 0;
	    if(yystack.l_mark[-2].expr.type == yystack.l_mark[0].expr.type){
		type = yystack.l_mark[-2].expr.type;
	    }
	    else{
		type = ST_REAL;
	    }
	    
	    char* var = NULL;
            switch(type){
            	case ST_INT: var = nextIntVar();break;
            	case ST_REAL:var = nextFloatVar();break;
            }
            char buffer[50];
            sprintf(quadBuffer,"%s := %s * %s",var,yystack.l_mark[-2].expr.value,yystack.l_mark[0].expr.value);
            genquad(quadBuffer);
            yyval.expr.value = var;
            yyval.expr.type = type;
            yyval.expr.cType = C_VARIABLE;
	    yyval.expr.trueList = NULL;
	    yyval.expr.falseList = NULL;
	    printf("PARSER: Done processing multiplication.\n");
        }
break;
case 55:
#line 829 "parser.y"
	{
	    printf("PARSER: Processing division.\n");
	    if(yystack.l_mark[-2].expr.type != ST_INT && yystack.l_mark[-2].expr.type!= ST_REAL &&  yystack.l_mark[0].expr.type != ST_INT && yystack.l_mark[0].expr.type != ST_REAL){
		printf("ERROR: Only integer and float values allowed when dividing numbers.\n");
		yyerror();
	    }
	    int type = 0;
	    if(yystack.l_mark[-2].expr.type == yystack.l_mark[0].expr.type){
		type = yystack.l_mark[-2].expr.type;
	    }
	    else{
		type = ST_REAL;
	    }
	    
	    char* var = NULL;
            switch(type){
            	case ST_INT: var = nextIntVar();break;
            	case ST_REAL:var = nextFloatVar();break;
            }
            char buffer[50];
            sprintf(quadBuffer,"%s := %s / %s",var,yystack.l_mark[-2].expr.value,yystack.l_mark[0].expr.value);
            genquad(quadBuffer);
            yyval.expr.value = var;
            yyval.expr.type = type;
            yyval.expr.cType = C_VARIABLE;
	    yyval.expr.trueList = NULL;
	    yyval.expr.falseList = NULL;
	    printf("PARSER: Done processing division.\n");
        }
break;
case 56:
#line 859 "parser.y"
	{
	    printf("PARSER: Processing modulo.\n");
	    if(yystack.l_mark[-2].expr.type != ST_INT && yystack.l_mark[-2].expr.type!= ST_REAL &&  yystack.l_mark[0].expr.type != ST_INT && yystack.l_mark[0].expr.type != ST_REAL){
		printf("ERROR: Only integer and float values allowed when caluclating mod.\n");
		yyerror();
	    }
	    int type = 0;
	    if(yystack.l_mark[-2].expr.type == yystack.l_mark[0].expr.type){
		type = yystack.l_mark[-2].expr.type;
	    }
	    else{
		type = ST_REAL;
	    }
	    
	    char* var = NULL;
            switch(type){
            	case ST_INT: var = nextIntVar();break;
            	case ST_REAL:var = nextFloatVar();break;
            }
            char buffer[50];
            sprintf(quadBuffer,"%s := %s \% %s",var,yystack.l_mark[-2].expr.value,yystack.l_mark[0].expr.value);
            genquad(quadBuffer);
            yyval.expr.value = var;
            yyval.expr.type = type;
            yyval.expr.cType = C_VARIABLE;
	    yyval.expr.trueList = NULL;
	    yyval.expr.falseList = NULL;
	    printf("PARSER: Done processing modulo.\n");
        }
break;
case 57:
#line 889 "parser.y"
	{
	    printf("PARSER: Processing logical not.\n");
	    if(yystack.l_mark[0].expr.type != ST_BOOL){
		if(yystack.l_mark[0].expr.type != ST_INT && yystack.l_mark[0].expr.type != ST_REAL){
		    printf("ERROR: Only Bool, Int and Float allowed in logical expressions!\n");
		    yyerror();
		}
		/*char* var = nextBoolVar();*/
		/*sprintf(quadBuffer,"%s = FALSE",var);*/
		/*genquad(quadBuffer);*/
		sprintf(quadBuffer,"IF (%s <> 0) GOTO",yystack.l_mark[0].expr.value);
		yyval.expr.falseList = addToList(NULL,genquad(quadBuffer));
		/*sprintf(quadBuffer,"%s = TRUE",var);*/
		/*genquad(quadBuffer);*/
		sprintf(quadBuffer,"GOTO",yystack.l_mark[0].expr.value);
		yyval.expr.trueList = addToList(NULL,genquad(quadBuffer));
	    }
	    else{
	      yyval.expr = yystack.l_mark[0].expr;
	      yyval.expr.trueList = yystack.l_mark[0].expr.falseList;
	      yyval.expr.falseList = yystack.l_mark[0].expr.trueList;
	    }
	    printf("PARSER: Done processing logical not.\n");
	}
break;
case 58:
#line 914 "parser.y"
	{
            if(ST_INT != yystack.l_mark[0].expr.type && ST_REAL != yystack.l_mark[0].expr.type) {
                yyerror();
            }
            yyval.expr = yystack.l_mark[0].expr;
        }
break;
case 59:
#line 921 "parser.y"
	{
            yyval.expr = yystack.l_mark[0].expr;
            if(ST_INT == yystack.l_mark[0].expr.type) {
                yyval.expr.value = nextIntVar();
            } else if (ST_REAL == yystack.l_mark[0].expr.type) {
                yyval.expr.value = nextFloatVar();
            } else {
                yyerror();
            }
            sprintf(quadBuffer, "%s := -%s", yyval.expr.value, yystack.l_mark[0].expr.value);
            genquad(quadBuffer);
       }
break;
case 60:
#line 934 "parser.y"
	{
	    printf("PARSER: Processing constant.\n");
            yyval.expr.value = strdup(yytext);
            yyval.expr.trueList = NULL;
	    yyval.expr.falseList = NULL;
	    printf("PARSER: Done processing constant.\n");
            
        }
break;
case 61:
#line 943 "parser.y"
	{
            printf("PARSER: Processing expression in parentheses.\n");
	    yyval.expr = yystack.l_mark[-1].expr;
	    printf("PARSER: Done processing expression in parentheses.\n");
        }
break;
case 62:
#line 949 "parser.y"
	{
	    printf("PARSER: Processing function call with parameters.\n");
            int varType = getFunctionType(yystack.l_mark[-3].str);
            if(varType == 0){
            	printf("ERROR: Function %s not defined!\n",yystack.l_mark[-3].str);
		yyerror();
            }
            char* var = NULL;
            switch(varType){
            case SIT_BOOL:
                var = nextBoolVar();
                yyval.expr.type = ST_BOOL;
                break;
            case SIT_REAL:
                var = nextFloatVar();
                yyval.expr.type = ST_REAL;
                break;
            case SIT_INT:
                var = nextIntVar();
                yyval.expr.type = ST_INT;
                break;
            case SIT_NONE:
                yyval.expr.type = ST_NONE;
                break;
            }
	    yyval.expr.value = var;
	    yyval.expr.cType = C_VARIABLE;
	    checkAndGenerateParams(yystack.l_mark[-1].exp_list.queue,yystack.l_mark[-3].str,yystack.l_mark[-1].exp_list.count);
            sprintf(quadBuffer,"%s := CALL %s, %d",var,yystack.l_mark[-3].str,yystack.l_mark[-1].exp_list.count);
            genquad(quadBuffer);
	    printf("PARSER: Done processing function call with parameters.\n");
        }
break;
case 63:
#line 982 "parser.y"
	{
	    printf("PARSER: Processing function call.\n");
            int varType = getFunctionType(yystack.l_mark[-2].str);
            if(varType == 0){
            	printf("ERROR: Function %s not defined!\n",yystack.l_mark[-2].str);
		yyerror();
            }
            char* var = NULL;
            switch(varType){
            case SIT_BOOL:
                var = nextBoolVar;
                yyval.expr.type = ST_BOOL;
                break;
            case SIT_REAL:
                var = nextFloatVar;
                yyval.expr.type = ST_REAL;
                break;
            case SIT_INT:
                var = nextIntVar;
                yyval.expr.type = ST_INT;
                break;
            case SIT_NONE:
                yyval.expr.type = ST_NONE;
                break;
            }
	    yyval.expr.value = var;
	    yyval.expr.cType = C_VARIABLE;
	    checkAndGenerateParams(NULL,yystack.l_mark[-2].str,0);
            sprintf(quadBuffer,"%s := CALL %s, %d",var,yystack.l_mark[-2].str,0);
            genquad(quadBuffer);
	    printf("PARSER: Done processing function call.\n");
        }
break;
case 64:
#line 1015 "parser.y"
	{
	    printf("PARSER: Processing identifier.\n");
	    int varType = getSymbolType(yystack.l_mark[0].str);
            if(varType == 0){
            	printf("ERROR: Variable %s not in scope!\n",yystack.l_mark[0].str);
		yyerror();
            }
	    yyval.expr.value = yystack.l_mark[0].str;
	    yyval.expr.type = varType;
	    yyval.expr.cType = C_VARIABLE;
	    printf("PARSER: Done processing identifier.\n");
        }
break;
case 65:
#line 1031 "parser.y"
	{
	    printf("PARSER: Processing expression list.\n");
	    if(yystack.l_mark[0].expr.type != ST_INT && yystack.l_mark[0].expr.type != ST_REAL){
		printf("ERROR: Only Integer and Float are allowed as parameter types.\n");
		yyerror();
	    }
	    yyval.exp_list.queue = addSymbolToParameterQueue(NULL,yystack.l_mark[0].expr.value,yystack.l_mark[0].expr.type);
	    yyval.exp_list.count = 1;
	    printf("PARSER: Done processing expression list.\n");
        }
break;
case 66:
#line 1042 "parser.y"
	{
	    printf("PARSER: Processing expression list.\n");
	      if(yystack.l_mark[0].expr.type != ST_INT && yystack.l_mark[0].expr.type != ST_REAL){
		  printf("ERROR: Only Integer and Float are allowed as parameter types.\n");
		  yyerror();
	      }
	      yyval.exp_list.queue = addSymbolToParameterQueue(yystack.l_mark[-2].exp_list.queue,yystack.l_mark[0].expr.value,yystack.l_mark[0].expr.type);
	      yyval.exp_list.count = yystack.l_mark[-2].exp_list.count + 1;
	    printf("PARSER: Done processing expression list.\n");
        }
break;
case 67:
#line 1056 "parser.y"
	{
            printf("PARSER: found identifier %s\n", yystack.l_mark[0].str);
            yyval.str = strdup(yytext);
        }
break;
case 68:
#line 1062 "parser.y"
	{	
	      printf("PARSER: Generating marker.\n");
	      yyval.mark.quad = nextquad();
	      printf("PARSER: Done with the marker.\n");
	}
break;
case 69:
#line 1068 "parser.y"
	{
	      printf("PARSER: Generating jump marker.\n");
	      yyval.mark.quad = nextquad();
	      sprintf(quadBuffer,"GOTO");
	      yyval.mark.nextList = addToList(NULL, genquad(quadBuffer));
	      printf("PARSER: Done with the jump marker.\n");
   }
break;
#line 1766 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
