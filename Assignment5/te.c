int printInt(int n);
int readInt(int *n);
int printStr(char *s);
int func(int a, int d);
int foo();

int main();
int func(int a, int d){
 int b,c,u;
  b =a;
 c = d;
 u = printInt(b);
 u = printStr("\n");
 u = printInt(c);
 u = printStr("Hello\n");
 return 1;
}

int foo(){
 return 1;
}

int main(){
 int a,b, u;
 a = readInt(&u);
 b = readInt(&u);
 u = func(a,b);
 return 0;
}
 
 
