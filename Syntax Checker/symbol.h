#include <stdlib.h>
#define t_void	1
#define t_char	2
#define t_int	3
#define t_float	4
struct symrec
{
	char *name,type[20],line[100];
	//int line;
	struct symrec *next;
};
typedef struct symrec symrec;
symrec *sym_table = (symrec *)0;
symrec *const_table = (symrec *)0;

void *putsym(char *sym_name,char sym_type, int linec)
{
	symrec *ptr,*newptr;
	char line[39],linen[19];
  //sprintf(linen,"%d",linec);
  snprintf(linen, 19, "%d", linec);
  //itoa(linec,linen,10);
	strcpy(line," ");
	strcat(line,linen);
	char type[20];
	switch(sym_type)
	{
			case 'c':
					strcpy(type,"Constant");
					break;
			case 'v':
					strcpy(type,"Identifier");
					break;
			case 'p':
					strcpy(type,"Punctuator");
					break;
			case 'o':
					strcpy(type,"Operator");
					break;
			case 'k':
					strcpy(type,"Keyword");
					break;
			case 's':
					strcpy(type,"String Literal");
					break;
			case 'd':
					strcpy(type,"Preprocessor Statement");
					break;
	}
	if(sym_type == 'c')
	{
    for(newptr=const_table;newptr!=(symrec *)0;newptr=(symrec *)newptr->next)
  	 if(strcmp(newptr->name,sym_name)==0)
     {
       strcat(newptr->line,line);
       return;
     }
		ptr=(symrec *)malloc(sizeof(symrec));
		ptr->name=(char *)malloc(strlen(sym_name)+1);
		strcpy(ptr->name,sym_name);
		strcpy(ptr->type,type);
    strcpy(ptr->line,line);
		ptr->next=(struct symrec *)const_table;
		const_table=ptr;
	}
	else
	{
    for(newptr=sym_table;newptr!=(symrec *)0;newptr=(symrec *)newptr->next)
  	 if(strcmp(newptr->name,sym_name)==0)
     {
       strcat(newptr->line,line);
       return;
     }
		ptr=(symrec *)malloc(sizeof(symrec));
		ptr->name=(char *)malloc(strlen(sym_name)+1);
		strcpy(ptr->name,sym_name);
		strcpy(ptr->type,type);
    strcpy(ptr->line,line);
		ptr->next=(struct symrec *)sym_table;
		sym_table=ptr;
	}
}
void *getsym(char *sym_name)
{
	symrec *ptr;
	for(ptr=sym_table;ptr!=(symrec *)0;ptr=(symrec *)ptr->next)
	if(strcmp(ptr->name,sym_name)==0)
	return ptr;
	return 0;
}

/*
void print()
{

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



} */
