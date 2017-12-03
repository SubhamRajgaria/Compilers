void swap(int *a, int *b);
void no_swap(int a, int b);
int main();
int readInt(int *i);
int printInt(int i);
int printStr(char *s);
int error;
void swap(int *a, int *b){
	int *f;
	int *e;
	f =a;
	e =b;
	int temp,c,d;
	temp = *f;
	*f = *e;
	*e = temp;
	c = *f;
	d = *e;
	temp = printInt(c);
	temp = printInt(d);
	return;
}
void no_swap(int a, int b){
	int c,d;
	c =a;
	d =b;
	int temp;
	temp = c;
	c = d;
	d = c;
	return;
}
int main(){
	int u;
	u = printStr("\nEnter the first number : ");
	int a,b,temp;
	a = readInt(&error);
	if(error == 0){
		u = printStr("\nNow Enter the second number : ");
		b = readInt(&error);
		if(error == 0){
			u = printStr("\nInline swapping");
			temp = a;
			a = b;
			b = temp;
			u = printStr("\na = ");
			u = printInt(a);
			u = printStr("\nb = ");
			u = printInt(b);
			u = printStr("\nSwapping through pointers");
			//swap(&a,&b);
			u = printStr("\na = ");
			u = printInt(a);
			u = printStr("\nb = ");
			u = printInt(b);
			u = printStr("\nAn attempt to sort through call by value");
			no_swap(a,b);
			u = printStr("\na = ");
			u = printInt(a);
			u = printStr("\nb = ");
			u = printInt(b);
			u = printStr("\nPointers are dangerous!");
		}
		else{
			u = printStr("\nYou entered non numeral characters");
			u = printStr("\nThe program is exiting");
		}
	}
	else{
		u = printStr("\nYou entered non numeral characters");
		u = printStr("\nThe program is exiting");
	}
	return 0;
}
