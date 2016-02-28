%{
#include<stdlib.h>
#include<string.h>
int lineCount=1;
char *comment;
%}

letter [a-zA-Z]
digit[0-9]
%x C_COMMENT

%%

 /*RegEx for Comments*/
"/*"            { BEGIN(C_COMMENT); }
<C_COMMENT>"*/" { BEGIN(INITIAL); printf("%s\nis a comment with %d lines!", comment,lineCount);}
<C_COMMENT>\n   { lineCount++; }
<C_COMMENT>.    { strcat(comment,yytext); }

 /*RegEx for Real Number*/
{digit}+("E"("+"|"-")?{digit}+)? printf("\n%s\tis a Real Number!",yytext);

 /*RegEx for Floating Point Number*/
{digit}+"."{digit}+("E"("+"|"-")?{digit}+)? printf("\n%s\t is a Floating Point Number! ",yytext);

 /*RegEx for Keywords*/
"if"|"else"|"int"|"char"|"scanf"|"printf"|"switch"|"return"|"struct"|"do"|"while"|"void"|"for"|"float" printf("\n%s\t is a Keyword!",yytext);

 /*RegEx for Escape Sequences*/
"\a"|"\\n"|"\\b"|"\t"|"\\t"|"\b"|"\\a" printf("\n%s\tis an Escape Sequence!",yytext);

 /*RegEx for Identifiers*/
{letter}({letter}|{digit})* printf("\n%s\tis an Identifier!",yytext);

 /*RegEx for Operators*/
"&&"|"<"|">"|"<="|">="|"="|"+"|"-"|"?"|"*"|"/"|"%"|"&"|"||" printf("\n%s\tis an Operator!",yytext);

 /*RegEx for Special Characters*/
"{"|"}"|"["|"]"|"("|")"|"#"|"'"|"."|"\""|"\\"|";"|"," printf("\n%s\t is a Special Character!",yytext);

 /*RegEx for Format Specifiers*/
"%d"|"%s"|"%c"|"%f"|"%e" printf("\n%s\tis a Format Specifier!",yytext);

%%

int yywrap()
{
  return 1;
}

int main(int argc,char *argv[])
{
  yyin=fopen(argv[1],"r");
  comment = (char*)malloc(1000*sizeof(char));
  strcpy(comment,"\0");
  yylex();
  fclose(yyin);
  return 0;
}
