void swap(int *a, int *b);
void no_swap(int a, int b);
int main();
int readInt(int *i);
int printInt(int i);
int printStr(char *s);
int error;
void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	return;
}
void no_swap(int a, int b){
	int temp;
	temp = a;
	a = b;
	b = a;
	return;
}
int main(){
	int u;
	u = printStr("\nEnter the first number 

