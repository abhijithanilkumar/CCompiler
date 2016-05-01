D			[0-9]
L			[a-zA-Z_]
H			[a-fA-F0-9]
E			[Ee][+-]?{D}+
FS			(f|F|l|L)
IS			(u|U|l|L)*

%{
#include <stdio.h>
#include "y.tab.h"
int cnt=1;
int line=1;
char tempid[100];
%}

%%
"/*"			{comment();}
"printf"		{ cnt+=yyleng;ECHO; return(PRINTF); }
"scanf"			{ cnt+=yyleng;ECHO; return(SCANF); }
"auto"			{ cnt+=yyleng;ECHO; return(AUTO); }
"break"			{ cnt+=yyleng;ECHO; return(BREAK); }
"case"			{ cnt+=yyleng;ECHO; return(CASE); }
"char"			{ cnt+=yyleng;ECHO; return(CHAR); }
"const"			{ cnt+=yyleng;ECHO; return(CONST); }
"continue"		{ cnt+=yyleng;ECHO; return(CONTINUE); }
"default"		{ cnt+=yyleng;ECHO; return(DEFAULT); }
"do"			{ cnt+=yyleng;ECHO; return(DO); }
"double"		{ cnt+=yyleng;ECHO; return(DOUBLE); }
"else"			{ cnt+=yyleng;ECHO; return(ELSE); }
"enum"			{ cnt+=yyleng;ECHO; return(ENUM); }
"extern"		{ cnt+=yyleng;ECHO; return(EXTERN); }
"float"			{ cnt+=yyleng;ECHO; return(FLOAT); }
"for"			{ cnt+=yyleng;ECHO; return(FOR); }
"goto"			{ cnt+=yyleng;ECHO; return(GOTO); }
"if"			{ cnt+=yyleng;ECHO; return(IF); }
"int"			{ cnt+=yyleng;ECHO; return(INT); }
"long"			{ cnt+=yyleng;ECHO; return(LONG); }
"register"		{ cnt+=yyleng;ECHO; return(REGISTER); }
"return"		{ cnt+=yyleng;ECHO; return(RETURN); }
"short"			{ cnt+=yyleng;ECHO; return(SHORT); }
"signed"		{ cnt+=yyleng;ECHO; return(SIGNED); }
"sizeof"		{ cnt+=yyleng;ECHO; return(SIZEOF); }
"static"		{ cnt+=yyleng;ECHO; return(STATIC); }
"struct"		{ cnt+=yyleng;ECHO; return(STRUCT); }
"switch"		{ cnt+=yyleng;ECHO; return(SWITCH); }
"typedef"		{ cnt+=yyleng;ECHO; return(TYPEDEF); }
"union"			{ cnt+=yyleng;ECHO; return(UNION); }
"unsigned"		{ cnt+=yyleng;ECHO; return(UNSIGNED); }
"void"			{ cnt+=yyleng;ECHO; return(VOID); }
"volatile"		{ cnt+=yyleng;ECHO; return(VOLATILE); }
"while"			{ cnt+=yyleng;ECHO; return(WHILE); }
(['])+({L}|{D})+(['])			{ cnt+=yyleng;ECHO; return(SINGLE); }
{L}({L}|{D})*		{ cnt+=yyleng;ECHO; strcpy(tempid,yytext);return(IDENTIFIER); }

0[xX]{H}+{IS}?		{ cnt+=yyleng;ECHO; return(CONSTANT); }
0{D}+{IS}?		{ cnt+=yyleng;ECHO; return(CONSTANT); }
{D}+{IS}?		{ cnt+=yyleng;ECHO; return(CONSTANT); }
L?'(\\.|[^\\'])+'	{ cnt+=yyleng;ECHO; return(CONSTANT); }

{D}+{E}{FS}?		{ cnt+=yyleng;ECHO; return(CONSTANT); }
{D}*"."{D}+({E})?{FS}?	{ cnt+=yyleng;ECHO; return(CONSTANT); }
{D}+"."{D}*({E})?{FS}?	{ cnt+=yyleng;ECHO; return(CONSTANT); }

L?\"(\\.|[^\\"])*\"	{ cnt+=yyleng;ECHO; return(STRING_LITERAL); }

"..."			{ cnt+=yyleng;ECHO; return(ELLIPSIS); }
">>="			{ cnt+=yyleng;ECHO; return(RIGHT_ASSIGN); }
"<<="			{ cnt+=yyleng;ECHO; return(LEFT_ASSIGN); }
"+="			{ cnt+=yyleng;ECHO; return(ADD_ASSIGN); }
"-="			{ cnt+=yyleng;ECHO; return(SUB_ASSIGN); }
"*="			{ cnt+=yyleng;ECHO; return(MUL_ASSIGN); }
"/="			{ cnt+=yyleng;ECHO; return(DIV_ASSIGN); }
"%="			{ cnt+=yyleng;ECHO; return(MOD_ASSIGN); }
"&="			{ cnt+=yyleng;ECHO; return(AND_ASSIGN); }
"^="			{ cnt+=yyleng;ECHO; return(XOR_ASSIGN); }
"|="			{ cnt+=yyleng;ECHO; return(OR_ASSIGN); }
">>"			{ cnt+=yyleng;ECHO; return(RIGHT_OP); }
"<<"			{ cnt+=yyleng;ECHO; return(LEFT_OP); }
"++"			{ cnt+=yyleng;ECHO; return(INC_OP); }
"--"			{ cnt+=yyleng;ECHO; return(DEC_OP); }
"->"			{ cnt+=yyleng;ECHO; return(PTR_OP); }
"&&"			{ cnt+=yyleng;ECHO; return(AND_OP); }
"||"			{ cnt+=yyleng;ECHO; return(OR_OP); }
"<="			{ cnt+=yyleng;ECHO; return(LE_OP); }
">="			{ cnt+=yyleng;ECHO; return(GE_OP); }
"=="			{ cnt+=yyleng;ECHO; return(EQ_OP); }
"!="			{ cnt+=yyleng;ECHO; return(NE_OP); }
";"			{ cnt+=yyleng;ECHO; return(';'); }
("{"|"<%")		{ cnt+=yyleng;ECHO; return('{'); }
("}"|"%>")		{ cnt+=yyleng;ECHO; return('}'); }
","			{ cnt+=yyleng;ECHO; return(','); }
":"			{ cnt+=yyleng;ECHO; return(':'); }
"="			{ cnt+=yyleng;ECHO; return('='); }
"("			{ cnt+=yyleng;ECHO; return('('); }
")"			{ cnt+=yyleng;ECHO; return(')'); }
("["|"<:")		{ cnt+=yyleng;ECHO; return('['); }
("]"|":>")		{ cnt+=yyleng;ECHO; return(']'); }
"."			{ cnt+=yyleng;ECHO; return('.'); }
"&"			{ cnt+=yyleng;ECHO; return('&'); }
"!"			{ cnt+=yyleng;ECHO; return('!'); }
"~"			{ cnt+=yyleng;ECHO; return('~'); }
"-"			{ cnt+=yyleng;ECHO; return('-'); }
"+"			{ cnt+=yyleng;ECHO; return('+'); }
"*"			{ cnt+=yyleng;ECHO; return('*'); }
"/"			{ cnt+=yyleng;ECHO; return('/'); }
"%"			{ cnt+=yyleng;ECHO; return('%'); }
"<"			{ cnt+=yyleng;ECHO; return('<'); }
">"			{ cnt+=yyleng;ECHO; return('>'); }
"^"			{ cnt+=yyleng;ECHO; return('^'); }
"|"			{ cnt+=yyleng;ECHO; return('|'); }
"?"			{ cnt+=yyleng;ECHO; return('?'); }
		
[ ]			{cnt+=yyleng;ECHO;}
[\t\v\f]		{ cnt+=yyleng; }
[\n]			{line++;cnt=1;}
.			{ /* ignore bad characters */ }

%%
yywrap()
{
	return(1);
}
comment()
{
	char c, c1;
loop:
	while ((c = input()) != '*' && c != 0)
	{
		if(c=='\n')	{line++;cnt=1;} 
		else	{cnt++;}
	}
		//putchar(c); PUTCHAR only if comments need to be shown! 
	if ((c1 = input()) != '/' && c1 != 0)
	{
		unput(c1);
		goto loop;
	}
}


