lex cd1.l
gcc lex.yy.c -ll
./a.out test1.c
lex clexer.lex
yacc -d cparser.yacc
gcc lex.yy.c y.tab.c -ll
./a.out result.c
