/* Handles global variables and uses them in functionc */
/* Also handles cases of declarations and bitwise operators */
void func(int i, double d);
char c;
int main();
void func(int i, double d){
	int a = 4, *p, b;
	int z = i^2;			// Bitwise xor
	int a = i<<2;			// Bitwise left shift
	int b = i>>2;			// Bitwise right shift
	i = i|6;
	int z = (z>5)?5:7;
}
int main(){
	double d = 2.3;
	func(i,d);
	return 0;
}
