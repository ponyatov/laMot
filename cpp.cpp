#include "hpp.hpp"
#define YYERR "\n\n"<<yylineno<<":"<<msg<<"["<<yytext<<"]\n\n"
void yyerror(string msg) { cout<<YYERR; cerr<<YYERR; exit(-1); }

FILE *com = fopen("com.com","wb");
long org=0;
int main() {
	assert(com!=NULL);
	yyparse();
	fclose(com);
	return 0;
}
