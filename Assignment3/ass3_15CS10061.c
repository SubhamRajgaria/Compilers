#include <stdio.h>
#include "ass3_15CS10061.tab.c"
int main(){
	int val=yyparse();
	printf("Returned value is %d\n",val);
	return 0;
}
