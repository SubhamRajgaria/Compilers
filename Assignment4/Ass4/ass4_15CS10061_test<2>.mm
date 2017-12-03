/* Test for function calling and ternary expression */
/* This includes if-else and logical expression testing too */
double max(int x, int y);
int main();
double max(int x, int y) {
       double ans;
       ans = (x > y)? x : y;	// Ternary operator check
       return ans;	// return expression
}

int main() {
       int a, b, big;	// Multiple declararation in one line
       a = a << 1;	// Shift operator
       if((a > 10) && (b == 0))	// if-else
               a = 0;
       else
               a = 1;
		if(3)	// if
			b=1;
		
		int *p = &a;	// Pointer assignment
		int big2 = *p;	// Dereferencing Pointer
		*p = a;
		int big3;
		big3 = *p;
       big = max(a, b/2); // Function call
       return 0;
}
