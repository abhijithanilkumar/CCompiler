lex scan.l
yacc -d parse.y
gcc lex.yy.c y.tab.c
