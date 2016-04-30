%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "symbol.h"
#include "y.tab.h"
int errorFlag=0;
extern FILE *yyin;
extern FILE *yyout;
extern int line,cnt;
extern symrec *sym_table;
extern symrec *const_table;
extern char *tempid;
%}
%token IDENTIFIER CONSTANT STRING_LITERAL SIZEOF
%token PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN TYPE_NAME



%token TYPEDEF EXTERN STATIC AUTO REGISTER
%token CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token STRUCT UNION ENUM ELLIPSIS

%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE

%start translation_unit
%%

primary_expression
	: IDENTIFIER  { putsym(tempid, 'v', line); }
	| CONSTANT    { putsym(tempid, 'c', line);}
	| STRING_LITERAL  { putsym(tempid, 's', line);}
	| '(' expression ')' { putsym("(", 'p', line); putsym(")", 'p', line); }
	;

postfix_expression
	: primary_expression
	| postfix_expression '[' expression ']' { putsym("[", 'p', line); putsym("]", 'p', line); }
	| postfix_expression '(' ')' { putsym("(", 'p', line); putsym(")", 'p', line); }
	| postfix_expression '(' argument_expression_list ')' { putsym("(", 'p', line); putsym(")", 'p', line); }
	| postfix_expression '.' IDENTIFIER { putsym(tempid, 'v', line);}
	| postfix_expression PTR_OP IDENTIFIER { putsym(tempid, 'v', line);}
	| postfix_expression INC_OP  { putsym(tempid, 'o', line);}
	| postfix_expression DEC_OP  { putsym(tempid, 'o', line);}
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' assignment_expression { putsym(",",'p', line); }
	;

unary_expression
	: postfix_expression
	| INC_OP unary_expression { putsym("++",'o', line); }
	| DEC_OP unary_expression { putsym("--",'o', line); }
	| unary_operator cast_expression
	| SIZEOF unary_expression { putsym("sizeof",'o', line); }
	| SIZEOF '(' type_name ')' { putsym("sizeof",'o', line); } { putsym("(", 'p', line); putsym(")", 'p', line); }
	;

unary_operator
	: '&' { putsym("&",'o', line); }
	| '*' { putsym("*",'o', line); }
	| '+' { putsym("+",'o', line); }
	| '-' { putsym("-",'o', line); }
	| '~' { putsym("~",'o', line); }
	| '!' { putsym("!",'o', line); }
	;

cast_expression
	: unary_expression
	| '(' type_name ')' cast_expression { putsym("(", 'p', line); putsym(")", 'p', line); }
	;

multiplicative_expression
	: cast_expression
	| multiplicative_expression '*' cast_expression { putsym("*",'o', line); }
	| multiplicative_expression '/' cast_expression { putsym("/",'o', line); }
	| multiplicative_expression '%' cast_expression { putsym("%",'o', line); }
	;

additive_expression
	: multiplicative_expression
	| additive_expression '+' multiplicative_expression { putsym("+",'o', line); }
	| additive_expression '-' multiplicative_expression { putsym("-",'o', line); }
	;

shift_expression
	: additive_expression
	| shift_expression LEFT_OP additive_expression { putsym("<<",'o', line); }
	| shift_expression RIGHT_OP additive_expression { putsym(">>",'o', line); }
	;

relational_expression
	: shift_expression
	| relational_expression '<' shift_expression
	| relational_expression '>' shift_expression
	| relational_expression LE_OP shift_expression { putsym("<=",'o', line); }
	| relational_expression GE_OP shift_expression { putsym(">=",'o', line); }
	;

equality_expression
	: relational_expression
	| equality_expression EQ_OP relational_expression { putsym("==",'o', line); }
	| equality_expression NE_OP relational_expression { putsym("!=",'o', line); }
	;

and_expression
	: equality_expression
	| and_expression '&' equality_expression { putsym("&", 'o', line);}
	;

exclusive_or_expression
	: and_expression
	| exclusive_or_expression '^' and_expression { putsym("^", 'o', line); }
	;

inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression '|' exclusive_or_expression { putsym("|", 'o', line); }
	;

logical_and_expression
	: inclusive_or_expression
	| logical_and_expression AND_OP inclusive_or_expression { putsym("&&", 'o', line); }
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression OR_OP logical_and_expression { putsym("||", 'o', line); }
	;

conditional_expression
	: logical_or_expression
	| logical_or_expression '?' expression ':' conditional_expression { putsym("?:",'o', line); }
	;

assignment_expression
	: conditional_expression
	| unary_expression assignment_operator assignment_expression
	;

assignment_operator
	: '=' { putsym("=",'o', line); }
	| MUL_ASSIGN { putsym("*=",'o', line); }
	| DIV_ASSIGN { putsym("/=",'o', line); }
	| MOD_ASSIGN { putsym("%=",'o', line); }
	| ADD_ASSIGN { putsym("+=",'o', line); }
	| SUB_ASSIGN { putsym("-=",'o', line); }
	| LEFT_ASSIGN { putsym("<<=",'o', line); }
	| RIGHT_ASSIGN { putsym(">==",'o', line); }
	| AND_ASSIGN { putsym("&=",'o', line); }
	| XOR_ASSIGN { putsym("^=",'o', line); }
	| OR_ASSIGN { putsym("|=",'o', line); }
	;

expression
	: assignment_expression
	| expression ',' assignment_expression { putsym(",", 'p', line); }
	;

constant_expression
	: conditional_expression
	;

declaration
	: declaration_specifiers ';' { putsym(";", 'p', line); }
	| declaration_specifiers init_declarator_list ';' { putsym(";", 'p', line); }
	;

declaration_specifiers
	: storage_class_specifier
	| storage_class_specifier declaration_specifiers
	| type_specifier
	| type_specifier declaration_specifiers
	| type_qualifier
	| type_qualifier declaration_specifiers
	;

init_declarator_list
	: init_declarator
	| init_declarator_list ',' init_declarator { putsym(",", 'p', line); }
	;

init_declarator
	: declarator
	| declarator '=' initializer { putsym("=", 'o', line); }
	;

storage_class_specifier
	: TYPEDEF { putsym("typedef", 'k', line);}
	| EXTERN { putsym("extern", 'k', line);}
	| STATIC { putsym("static", 'k', line);}
	| AUTO { putsym("auto", 'k', line);}
	| REGISTER { putsym("register", 'k', line);}
	;

type_specifier
	: VOID { putsym("void", 'k', line);}
	| CHAR { putsym("char", 'k', line);}
	| SHORT { putsym("short", 'k', line);}
	| INT { putsym("int", 'k', line);}
	| LONG { putsym("long", 'k', line);}
	| FLOAT { putsym("float", 'k', line);}
	| DOUBLE { putsym("double", 'k', line);}
	| SIGNED { putsym("signed", 'k', line);}
	| UNSIGNED { putsym("unsigned", 'k', line);}
	| struct_or_union_specifier
	| enum_specifier
	| TYPE_NAME
	;

struct_or_union_specifier
	: struct_or_union IDENTIFIER '{' struct_declaration_list '}'
	| struct_or_union '{' struct_declaration_list '}'
	| struct_or_union IDENTIFIER
	;

struct_or_union
	: STRUCT { putsym("struct", 'k', line);}
	| UNION { putsym("union", 'k', line);}
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list ';' { putsym(";", 'p', line); }
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	| type_qualifier specifier_qualifier_list
	| type_qualifier
	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list ',' struct_declarator { putsym(",", 'p', line); }
	;

struct_declarator
	: declarator
	| ':' constant_expression { putsym(":", 'p', line); }
	| declarator ':' constant_expression { putsym(":", 'p', line); }
	;

enum_specifier
	: ENUM '{' enumerator_list '}' { putsym("enum", 'k', line);}
	| ENUM IDENTIFIER '{' enumerator_list '}' { putsym("enum", 'k', line); putsym(tempid, 'v', line); }
	| ENUM IDENTIFIER { putsym("enum", 'k', line); putsym(tempid, 'v', line); }
	;

enumerator_list
	: enumerator
	| enumerator_list ',' enumerator { putsym(",", 'p', line); }
	;

enumerator
	: IDENTIFIER { putsym(tempid, 'v', line); }
	| IDENTIFIER '=' constant_expression { putsym("=", 'o', line); putsym("tempid", 'v', line); }
	;

type_qualifier
	: CONST { putsym("const", 'k', line); }
	| VOLATILE { putsym("volatile", 'k', line); }
	;

declarator
	: pointer direct_declarator
	| direct_declarator
	;

direct_declarator
	: IDENTIFIER { putsym(tempid, 'v', line); }
	| '(' declarator ')' { putsym("(", 'p', line); putsym(")", 'p', line); }
	| direct_declarator '[' constant_expression ']' { putsym("[", 'p', line); putsym("]", 'p', line); }
	| direct_declarator '[' ']' { putsym("[", 'p', line); putsym("]", 'p', line); }
	| direct_declarator '(' parameter_type_list ')' { putsym("(", 'p', line); putsym(")", 'p', line); }
	| direct_declarator '(' identifier_list ')' { putsym("(", 'p', line); putsym(")", 'p', line); }
	| direct_declarator '(' ')' { putsym("(", 'p', line); putsym(")", 'p', line); }
	;

pointer
	: '*' { putsym("*", 'o', line); }
	| '*' type_qualifier_list { putsym("*", 'o', line); }
	| '*' pointer { putsym("*", 'o', line); }
	| '*' type_qualifier_list pointer { putsym("*", 'o', line); }
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;


parameter_type_list
	: parameter_list
	| parameter_list ',' ELLIPSIS { putsym(",", 'p', line); putsym("::", 'o', line); }
	;

parameter_list
	: parameter_declaration
	| parameter_list ',' parameter_declaration { putsym(",", 'p', line); }
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers abstract_declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER {putsym(tempid, 'v', line);}
	| identifier_list ',' IDENTIFIER { putsym(tempid, 'v', line); putsym(",", 'p', line); }
	;

type_name
	: specifier_qualifier_list
	| specifier_qualifier_list abstract_declarator
	;

abstract_declarator
	: pointer
	| direct_abstract_declarator
	| pointer direct_abstract_declarator
	;

direct_abstract_declarator
	: '(' abstract_declarator ')' { putsym("(", 'p', line); putsym(")", 'p', line); }
	| '[' ']' { putsym("[", 'p', line); putsym("]", 'p', line); }
	| '[' constant_expression ']' { putsym("[", 'p', line); putsym("]", 'p', line); }
	| direct_abstract_declarator '[' ']' { putsym("[", 'p', line); putsym("]", 'p', line); }
	| direct_abstract_declarator '[' constant_expression ']' { putsym("[", 'p', line); putsym("]", 'p', line); }
	| '(' ')' { putsym("(", 'p', line); putsym(")", 'p', line); }
	| '(' parameter_type_list ')' { putsym("(", 'p', line); putsym(")", 'p', line); }
	| direct_abstract_declarator '(' ')' { putsym("(", 'p', line); putsym(")", 'p', line); }
	| direct_abstract_declarator '(' parameter_type_list ')' { putsym("(", 'p', line); putsym(")", 'p', line); }
	;

initializer
	: assignment_expression
	| '{' initializer_list '}'
	| '{' initializer_list ',' '}'
	;

initializer_list
	: initializer
	| initializer_list ',' initializer { putsym(",", 'p', line); }
	;

statement
	: labeled_statement
	| compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	;

labeled_statement
	: IDENTIFIER ':' statement  { putsym(tempid, 'v', line);  }
	| CASE constant_expression ':'  statement { putsym(":", 'p', line); putsym("case", 'k', line);}
	| DEFAULT ':' statement { putsym(":", 'p', line); putsym("default", 'k', line); }
	;

compound_statement
	: '{' '}'
	| '{' statement_list '}'
	| '{' declaration_list '}'
	| '{' declaration_list statement_list '}'
	;

declaration_list
	: declaration
	| declaration_list declaration
	;

statement_list
	: statement
	| statement_list statement
	;

expression_statement
	: ';' { putsym(";", 'p', line); }
	| expression ';' { putsym(";", 'p', line); }
	;

selection_statement
	: IF '(' expression ')' statement    %prec LOWER_THAN_ELSE { putsym("if", 'k', line); putsym("(", 'p', line); putsym(")", 'p', line);}
  | IF '(' expression ')' statement ELSE statement { putsym("if", 'k', line);  putsym("else", 'k', line); putsym("(", 'p', line); putsym(")", 'p', line); }
	| SWITCH '(' expression ')' statement { putsym("switch", 'k', line); putsym("(", 'p', line); putsym(")", 'p', line); }
	;

iteration_statement
	: WHILE '(' expression ')' statement  { putsym("while", 'k', line); putsym("(", 'p', line); putsym(")", 'p', line); }
	| DO statement WHILE '(' expression ')' ';' { putsym("do", 'k', line); putsym("while", 'k', line); putsym("(", 'p', line); putsym(")", 'p', line); putsym(";", 'p', line); }
	| FOR '(' expression_statement expression_statement ')' statement  { putsym("for", 'k', line); putsym("(", 'p', line); putsym(")", 'p', line); }
	| FOR '(' expression_statement expression_statement expression ')' statement { putsym("for", 'k', line); putsym("(", 'p', line); putsym(")", 'p', line); }
	;

jump_statement
	: GOTO IDENTIFIER ';' { putsym("goto", 'k', line); putsym(";", 'p', line); putsym(tempid, 'v', line);}
	| CONTINUE ';' { putsym("continue", 'k', line); putsym(";", 'p', line); }
	| BREAK ';'  { putsym("break", 'k', line); putsym(";", 'p', line);}
	| RETURN ';'  { putsym("return", 'k', line); putsym(";", 'p', line);}
	| RETURN expression ';'{ putsym("return", 'k', line); putsym(";", 'p', line);}
	;

translation_unit
	: external_declaration
	| translation_unit external_declaration
	;

external_declaration
	: function_definition
	| declaration
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement
	| declaration_specifiers declarator compound_statement
	| declarator declaration_list compound_statement
	| declarator compound_statement
	;

%%
#include <stdio.h>
extern char yytext[];
extern int column;
yyerror(s)
char *s;
{
	errorFlag=1;
	fflush(stdout);
	printf("\nSyntax error at line: %d and pos: %d\n", line,cnt);
}
main(argc,argv)
char **argv;
int argc;
{
	if(argc<=1)
	{
		printf("Arguments missing ! correct format : ./a.out filename \n");
		return 0;
	}
	yyin=fopen(argv[1],"r");
	yyout=fopen("out.c","w");
	yyparse();

	if(!errorFlag)
  {
		printf("Compilation Successful!\n");
  	FILE *sym_tab=fopen("symbol_table.txt","w");
    fprintf(sym_tab,"\n    Symbol Table \n=================== \n \t\t\t\t\t\t\t\tName\t\t\t\t\t\t\t\tToken Class\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tLine Number\n");
  	symrec *ptr;
  	for(ptr=sym_table;ptr!=(symrec *)0;ptr=(symrec *)ptr->next)
		{
  		fprintf(sym_tab,"\n%20s%30.30s%60s",ptr->name,ptr->type,ptr->line);
			printf("\n%20s%30.30s%60s",ptr->name,ptr->type,ptr->line);
		}
    fprintf(sym_tab,"\n\n\n\n    Constant Table \n=================== \n \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tValue\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tLine Number\n");
    for(ptr=const_table;ptr!=(symrec *)0;ptr=(symrec *)ptr->next)
  		fprintf(sym_tab,"\n%50s%60s",ptr->name,ptr->line);
  	fclose(sym_tab);
	}
}
