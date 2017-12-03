int readInt(int *ep);
int printInt(int n);
int printStr(char *str);
int fib(int n);
int main();
int fib(int n){
	int d;
	d =n;
	int a,b,k;
	if(d == 0)
		k = 0;
	else if(d == 1)
		k = 1;
	else{
		a = fib(d-1);
		b = fib(d-2);
		k = a + b;
	}
	return k;
}
int main(){
	int u,n,res;
	u = printStr("Enter the number \n");
	n = readInt(&u);
	res = fib(n);
	u = printStr("Fibonacci output : ");
	u = printInt(res);
	u = printStr("\n");
	return 0;
}
