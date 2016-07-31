#include "hpp.hpp"
#define YYERR "\n\n"<<yylineno<<":"<<msg<<"["<<yytext<<"]\n\n"
void yyerror(string msg) { cout<<YYERR; cerr<<YYERR; exit(-1); }

FILE *com = fopen("com.com","wb");

long org=0x100;
long I=0;
char M[Msz];

int main() {
	assert(com!=NULL);
	yyparse();
	fwrite(M,1,I,com);
	fclose(com);
	return 0;
}
