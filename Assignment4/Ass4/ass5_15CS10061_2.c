int readi(int *ep);
int printi(int n);
int prints(char *str);
int n1;
int n2;
int main();
int main(){
	int u, choice ,res;
	u = prints("Enter the first operand ");
	int b;
	n1 = readi(&b);
	u = prints("Enter the second operand:");
	n2 = readi(&b);
	u = prints("1 for addition, 2 for subtraction\n");
	u = prints("3 for multiplication, 4 for division\n");
	u = prints("5 for modulo, 6 for unary plus\n");
	u = prints("7 for unary minus, 8 for unary negation\n");
	u = prints("-1 for exit\n");
	do{
		u = prints("Enter your choice\n");
		choice = readi(&b);
		if(choice == 1)
			res = n1+n2;
		else if(choice ==2)
			res = n1-n2;
		else if(choice ==3)
			res = n1*n2;
		else if(choice ==4)
			res = n1/n2;
		else if(choice == 5)
			res = n1%n2;
		else if(choice == 6)
			res = +n1;
		else if(choice == 7)
			res = -n1;
		else if(choice == 8)
			res = !n1;
		if(choice != -1){
			u = prints("Result :");
			u = printi(res);
			u = prints("\n");
		}while(choice !=-1);
		return 0;
}
