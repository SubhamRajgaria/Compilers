/* Test case for expression grammar */
/* Also includes test for type conversion */
int main();
int main(){
	int x = 5, y = 10;
	int z = x + y;     // Binary addition	
	int a = x*y;		// Binary multiplication
	double b = 10.0;	
	double ans = b + x;	// Binary addition with type conversion
	int ans2 = b * x; // Multiplication with type conversion
	int mod = y%x;  // Modulus
	int div = y/x;	// Division	
	double dif = b - x;	// Subtraction with type conversion
	x++;	// Postfix increment
	--y;	// Prefix decrement
	b = -x;	// Unary minus with type conversion
	return 0;
}
