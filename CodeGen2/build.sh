#!/bin/sh

yacc -d parser.y
lex lexer.l
yacc -v parser.y
gcc lex.yy.c y.tab.c codegen.c -w -o qc
