int readInt(int *ep);
int printInt(int n);
int printStr(char *str);
void sort(int a, int b, int c);
void test_equality_a(int a, int b, int c);
void test_not_equality_b(int a, int b, int c);
void test_greater_equality_c(int a, int b, int c);
void test_less_equality_c(int a, int b, int c);
int main();
int u;
void sort(int a, int b, int c){
				int d,e,f;
				d =a;
				e =b;
				f =c;
                u = printInt(d);
                u = printInt(e);
                u = printInt(f);
	if(d<e && d<f){
		u = printStr("Smallest number is : ");
		u = printInt(d);
		u = printStr("\n");
		if(e>f){
			u = printStr("Largest number is : ");
			u = printInt(f);
			u = printStr("\n");
			u = printStr("Second Largest number is : ");
			u = printInt(e);
			u = printStr("\n");
		}
		else{
			u = printStr("Largest number is : ");
			u = printInt(e);
			u = printStr("\n");
			u = printStr("Second Largest number is : ");
			u = printInt(f);
			u = printStr("\n");
		}
	}
	else if(a>b && c>b){
		u = printStr("Smallest number is : ");
		u = printInt(e);
		u = printStr("\n");
		if(d<f){
			u = printStr("Largest number is : ");
			u = printInt(f);
			u = printStr("\n");
			u = printStr("Second Largest number is : ");
			u = printInt(d);
			u = printStr("\n");
		}
		else{
			u = printStr("Largest number is : ");
			u = printInt(d);
			u = printStr("\n");
			u = printStr("Second Largest number is : ");
			u = printInt(f);
			u = printStr("\n");
		}
	}
	else{
		u = printStr("Smallest number is : ");
		u = printInt(f);
		u = printStr("\n");
		if(a>b){
			u = printStr("Largest number is : ");
			u = printInt(d);
			u = printStr("\n");
			u = printStr("Second Largest number is : ");
			u = printInt(e);
			u = printStr("\n");
		}
		else{
			u = printStr("Largest number is : ");
			u = printInt(e);
			u = printStr("\n");
			u = printStr("Second Largest number is : ");
			u = printInt(d);
			u = printStr("\n");
		}
	}
	return;
}
void test_equality_a(int a, int b, int c){
	int d,e,f;
	d=a;
    e =b;
	f =c;
	if(d == e || d == f){
		u = printInt(d);
		u = printStr(" is equal to ");
		u = printInt(e);
		u = printStr(" or ");
		u = printInt(f);
		u = printStr("\n");
	}
	return;
}
void test_not_equality_b(int a, int b, int c){
	int d,e,f;
	d=a;
    e =b;
	f =c;
	if(e != d || e != f){
		u = printInt(e);
		u = printStr(" is not equal to ");
		u = printInt(d);
		u = printStr(" or ");
		u = printInt(f);
		u = printStr("\n");
	}
	return;
}
void test_greater_equality_c(int a, int b, int c){
	int d,e,f;
	d=a;
    e =b;
	f =c;
	if(f >= d || d >= e){
		u = printInt(f);
		u = printStr(" is greater than or equal to ");
		u = printInt(d);
		u = printStr(" or ");
		u = printInt(e);
		u = printStr("\n");
	}
	return;
}
void test_less_equality_c(int a, int b, int c){
	int d,e,f;
	d=a;
    e =b;
	f =c;
	if(f <= d || f <= e){
		u = printInt(f);
		u = printStr(" is less than or equal to ");
		u = printInt(d);
		u = printStr(" or ");
		u = printInt(e);
		u = printStr("\n");
	}
	return;
}
int main(){
	u = printStr("Enter the first of the three numbers\n");
	int a,b,c;
	a = readInt(&u);
	u = printStr("Enter the second number\n");
	b = readInt(&u);
	u = printStr("Enter the third number\n");
	c = readInt(&u);
                u = printInt(a);
                u = printInt(b);
                u = printInt(c);
	sort(a,b,c);
	test_equality_a(a,b,c);
	test_less_equality_c(a,b,c);
	test_greater_equality_c(a,b,c);
	test_less_equality_c(a,b,c);
	test_not_equality_b(a,b,c);
	return 0;
}
