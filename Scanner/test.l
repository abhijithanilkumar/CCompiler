D			[0-9]
L			[a-zA-Z_]
H			[a-fA-F0-9]
E			[Ee][+-]?{D}+
FS			(f|F|l|L)
IS			(u|U|l|L)*

%{
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
int found=0,var_cnt=0,i,nestedComment=0,bracCount=0,lineCount=0;
char *comment;
void add_to_comment(char*);
struct holder
{
	char name[10];
	int val;
	}st[20];

%}
string L?\"(\\.|[^\\"])*\"
printf (printf\({string}(\,([^,)])+)*\))
prnterr (printf\(.*\))
scanf (scanf\({string}(\,([^,)])+)*\))
scanerr (scanf\(.*\))
comment (\/\/.*)
comstr (\/\*)
comend (\*\/)
keyword "auto"|"break"|"case"|"char"|"const"|"continue"|"default"|"do"|"double"|"else"|"enum"|"extern"|"float"|"for"|"goto"|"if"|"int"|"long"|"register"|"return"|"short"|"signed"|"sizeof"|"static"|"struct"|"switch"|"typedef"|"union"|"unsigned"|"void"|"volatile"|"while"
relop >|<|<=|>=|!=
ws [ \t]+
%x C_COMMENT

%%
^#([-a-zA-Z0-9.]|{relop}|{ws})* {fprintf(yyout,"\n%s\t\t\tPreprocessor Statement\t\t\t\t***",yytext);}
{printf}            {;}
{prnterr}           {printf("ERROR: printferror\n");}
{scanf}             {;}
{scanerr}           {printf("ERROR: scanferror\n");}
{comment}           ;
{comstr}            {  BEGIN(C_COMMENT);
			           nestedComment++;
					   if(nestedComment>1)
						 printf("ERROR: Nested Comment\n");
					}
<C_COMMENT>{comend} {
                        if(nestedComment>0)
                                nestedComment--;
                        else
                            printf("ERROR: */ found before /*\n");
                        if(nestedComment==0)
                            BEGIN(INITIAL);     
                    }
<C_COMMENT>\n {lineCount++; add_to_comment("\n");}
<C_COMMENT>. {add_to_comment(yytext);}
{keyword}  {if(nestedComment<=0)
                fprintf(yyout,"\n%s\t\t\t\t\tKeyword\t\t\t\t\t\t***",yytext);
            }
{L}({L}|{D})*		{  if(nestedComment<=0){
                            for(i=0;i<var_cnt;i++)
     						    if(strcmp(st[i].name,yytext)==0)
      						    break;

    						    if(i==var_cnt)
     							    strcpy(st[var_cnt++].name,yytext);
    						    fprintf(yyout,"\n%s\t\t\t\t\tVariable\t\t\t\t\t%d",yytext,i);
                        }
    				}


0[xX]{H}+{IS}?		{if(nestedComment<=0) fprintf(yyout,"\n%s\t\t\t\t\tConstant\t\t\t\t\t***",yytext);}
0{D}+{IS}?		{if(nestedComment<=0) fprintf(yyout,"\n%s\t\t\t\t\tConstant\t\t\t\t\t***",yytext);}
{D}+{IS}?		{if(nestedComment<=0) fprintf(yyout,"\n%s\t\t\t\t\tConstant\t\t\t\t\t***",yytext);}
L?'(\\.|[^\\'])+'	{if(nestedComment<=0) fprintf(yyout,"\n%s\t\t\t\t\tConstant\t\t\t\t\t***",yytext);}
{D}+{E}{FS}?		{if(nestedComment<=0) fprintf(yyout,"\n%s\t\t\t\t\tConstant\t\t\t\t\t***",yytext);}
{D}*"."{D}+({E})?{FS}?	{if(nestedComment<=0) fprintf(yyout,"\n%s\t\t\t\t\tConstant\t\t\t\t\t***",yytext);}
{D}+"."{D}*({E})?{FS}?	{if(nestedComment<=0) fprintf(yyout,"\n%s\t\t\t\t\tConstant\t\t\t\t\t***",yytext);}

L?\"(\\.|[^\\"])*\"	{if(nestedComment<=0) fprintf(yyout,"\n%s\t\t\t\t\tString Literal\t\t\t\t\t***",yytext);}
L?\"(\\.|[^\\"])*	{if(nestedComment<=0) printf("ERROR: String does not end\n");}

"..."|">>="|"<<="|"+="|"-="|"*="|"/="		{if(nestedComment<=0) fprintf(yyout,"\n%s\t\t\t\t\tOperator\t\t\t\t\t",yytext);}

"%="|"&="|"^="|"|="|">>"|"<<"|"++"|"--"|"->"|"&&"|"||"|"<="			{if(nestedComment<=0) fprintf(yyout,"\n%s\t\t\t\t\tOperator\t\t\t\t\t",yytext);}

">="|"=="|"!="		{if(nestedComment<=0) fprintf(yyout,"\n%sOperator\t\t\t\t\t",yytext);}
";"			{if(nestedComment<=0) fprintf(yyout,"\n%s\t\t\t\t\tPunctuator\t\t\t\t\t",yytext);}
"{" 		{if(nestedComment<=0) {
                fprintf(yyout,"\n%s\t\t\t\t\tPunctuator\t\t\t\t\t",yytext);
                bracCount++;
                }
            }
"<%"		{if(nestedComment<=0) fprintf(yyout,"\n%s\t\t\t\t\tPunctuator\t\t\t\t\t",yytext);}
"}" 	   	{if(nestedComment<=0) {
                fprintf(yyout,"\n%s\t\t\t\t\tPunctuator\t\t\t\t\t",yytext);
                bracCount--;
                }
            }
"%>"		{if(nestedComment<=0) fprintf(yyout,"\n%s\t\t\t\t\tPunctuator\t\t\t\t\t",yytext);}
","			{if(nestedComment<=0) fprintf(yyout,"\n%s\t\t\t\t\tPunctuator\t\t\t\t\t",yytext);}
":"			{if(nestedComment<=0) fprintf(yyout,"\n%s\t\t\t\t\tPunctuator\t\t\t\t\t",yytext);}
"="			{if(nestedComment<=0) fprintf(yyout,"\n%s\t\t\t\t\tPunctuator\t\t\t\t\t",yytext);}
"("			{if(nestedComment<=0) fprintf(yyout,"\n%s\t\t\t\t\tPunctuator\t\t\t\t\t",yytext);}
")"			{if(nestedComment<=0) fprintf(yyout,"\n%s\t\t\t\t\tPunctuator\t\t\t\t\t",yytext);}
("["|"<:")		{if(nestedComment<=0) fprintf(yyout,"\n%s\t\t\t\t\tPunctuator\t\t\t\t\t",yytext);}
("]"|":>")		{if(nestedComment<=0) fprintf(yyout,"\n%s\t\t\t\t\tPunctuator\t\t\t\t\t",yytext);}
"."			{if(nestedComment<=0) fprintf(yyout,"\n%s\t\t\t\t\tPunctuator\t\t\t\t\t",yytext);}
"&"			{if(nestedComment<=0) fprintf(yyout,"\n%s\t\t\t\t\tOperator\t\t\t\t\t",yytext);}
"!"			{if(nestedComment<=0) fprintf(yyout,"\n%s\t\t\t\t\tOperator\t\t\t\t\t",yytext);}
"~"			{if(nestedComment<=0) fprintf(yyout,"\n%s\t\t\t\t\tOperator\t\t\t\t\t",yytext);}
"-"			{if(nestedComment<=0) fprintf(yyout,"\n%s\t\t\t\t\tOperator\t\t\t\t\t",yytext);}
"+"			{if(nestedComment<=0) fprintf(yyout,"\n%s\t\t\t\t\tOperator\t\t\t\t\t",yytext);}
"*"			{if(nestedComment<=0) fprintf(yyout,"\n%s\t\t\t\t\tOperator\t\t\t\t\t",yytext);}
"/"			{if(nestedComment<=0) fprintf(yyout,"\n%s\t\t\t\t\tOperator\t\t\t\t\t",yytext);}
"%"			{if(nestedComment<=0) fprintf(yyout,"\n%s\t\t\t\t\tOperator\t\t\t\t\t",yytext);}
"<"			{if(nestedComment<=0) fprintf(yyout,"\n%s\t\t\t\t\tOperator\t\t\t\t\t",yytext);}
">"			{if(nestedComment<=0) fprintf(yyout,"\n%s\t\t\t\t\tOperator\t\t\t\t\t",yytext);}
"^"			{if(nestedComment<=0) fprintf(yyout,"\n%s\t\t\t\t\tOperator\t\t\t\t\t",yytext);}
"|"			{if(nestedComment<=0) fprintf(yyout,"\n%s\t\t\t\t\tOperator\t\t\t\t\t",yytext);}
"?"			{if(nestedComment<=0) fprintf(yyout,"\n%s\t\t\t\t\tOperator\t\t\t\t\t",yytext);}

[ \t\v\n\f]		{;}
.			{ /* ignore bad characters */ }

%%

int main()
{
 comment = (char*)malloc(100*sizeof(char));
 yyin=fopen("input.txt","r");
 yyout=fopen("out.txt","w");
 fprintf(yyout,"\n Symbol Table Format is:\n Lexeme\t\t\t\t\tToken\t\t\t\t\tAttribute Value\n");
 yylex();
 if(nestedComment!=0)
    printf("ERROR: Comment does not end\n");
 if(bracCount!=0)
    printf("ERROR: Bracket mismatch\n");
 fprintf(yyout,"\n");
 fprintf(yyout,"\n\nComment (%d lines):\n",lineCount);
 fputs(comment,yyout);
 fclose(yyout);
}
int yywrap()
{
 return(1);
}

void add_to_comment(char *yytext)
{
 int len1,len2;
 char *temp;
 len1 = strlen(comment);
 len2 = strlen(yytext);
 temp = (char*)malloc((len1+1)*sizeof(char));
 strcpy(temp,comment);
 comment = (char*)malloc((len1+len2+1)*sizeof(char));
 strcat(temp,yytext);
 strcpy(comment,temp);
}
