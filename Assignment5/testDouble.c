int printFlt(double d);
int printInt(int n);
int readInt( int *n);
int readFlt(double *f);
int printStr(char *s);
int main();
int main(){
	int a, b, c,u;
	double f,g,h;
	u =printStr("Enter two integers\n");
	u= printStr("Enter first integer\n");
	a = readInt(&u);
	u = printStr("Enter second integer\n");
	b = readInt(&u);
	u = printStr("Addition Result is\n");
	c = a+b;
	u = printInt(c);
	u = printStr("\nSubtraction Result is\n");
	c = a-b;
	u = printInt(c);
	u = printStr("\nMultiplication Result is\n");
	c = a*b;
	u = printInt(c);
	u = printStr("\nDivison Result is\n");
	c = a/b;
	u = printInt(c);
	u = printStr("\nModulo Result is\n");
	c = a+b;
	u = printInt(c);
	u =printStr("Enter two doubles\n");
	u= printStr("Enter first double\n");
	u = readFlt(&f);
	u = printStr("Enter second double\n");
	u = readFlt(&g);
	u = printStr("Addition Result is\n");
	h = f+g;
	u = printFlt(h);
	u = printStr("\nSubtraction Result is\n");
	h = f-g;
	u = printFlt(h);
	u = printStr("\nMultiplication Result is\n");
	h = f*g;
	u = printFlt(h);
	u = printStr("\nDivison Result is\n");
	h = f/g;
	u = printFlt(h);
}

