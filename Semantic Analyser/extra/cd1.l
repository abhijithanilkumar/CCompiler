%{
# include <stdio.h>
#include <sys/stat.h>
%}
%%
"//".* { }
\/\*[^(\*\/)]*\*\/ { } 
%%

yywrap()
{
	return 1;
}
int main(int argc,char *argv[])
{
	 if(argc==2)
	 {
                yyin=fopen(argv[1],"r");
		yyout=fopen("result.c","w");
		yylex();
		fclose(yyout);
	
        }
        else
               printf("Insufficient no of arguments ! " );

}
