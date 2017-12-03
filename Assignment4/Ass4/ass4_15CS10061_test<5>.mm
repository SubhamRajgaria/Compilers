void func(double i, double d);
int main();
void func(double i,double d ){
	char c;
	int io;
	int z = io^2;	// Bitwise XOR
	int a = io<<2;	// Left shift
	int b = io>>2;	// Right shift
	io=io|6;	// Biwise OR
	z = a>4 ? 4:6;	// Ternary operator
}
int main(){
	int a=4, *p, b; // Pointer declaration along with normal variable declaration
	double d=2.3;	
	int i;
	func(i,d);// function call
	return 0;	// return
}
