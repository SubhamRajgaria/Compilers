#include "lex.yy.c"

int main(){
  int token = yyparse();
  if(token==2){
    printf("Parser error : memory exhausted\n");
  }else if(token==1){
    printf("Parser error : invalid input\n");
  }else{
    printf("Parsing successful.\n");
  }
  return token;
}
