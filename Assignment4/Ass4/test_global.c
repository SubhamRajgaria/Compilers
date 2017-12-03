void func(int i, double d);
int main();
void func(int i, double d){
	char c;
	int z = i^2;
	int a = i<<2;
	int b = i>>2;
	i=i|6;
	z = a>4 ? 4:6;
}
int main(){
	int a=4, *p, b;
	double d=2.3;
	int i;
	func(i,d);
	return 0;
}
