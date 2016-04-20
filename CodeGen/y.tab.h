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
extern YYSTYPE yylval;
