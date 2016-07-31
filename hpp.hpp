#ifndef _H_HPP
#define _H_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <cassert>
using namespace std;

extern int yylex();
extern int yylineno;
extern char* yytext;
#define TOS(X) {yylval.s = new string(yytext); return X;}
#define HEX(X) {yylval.n = strtol(yytext,NULL,0x10); return X;}
extern int yyparse();
extern void yyerror(string);
#include "ypp.tab.hpp"

extern long org;

#endif // _H_HPP
