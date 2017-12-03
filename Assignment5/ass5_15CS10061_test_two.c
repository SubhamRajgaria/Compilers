int readInt(int *ep);
int printInt(int n);
int printStr(char *str);

int main();
int main(){
	int n1,n2;
	int u;
	int choice;
	int res;
	u = printStr("Enter the first operand\n");
	int b;
	n1 = readInt(&b);
	u = printStr("Enter the second operand\n");
	n2 = readInt(&b);
	u = printStr("1 for addition, 2 for subtraction\n");
	u = printStr("3 for multiplication, 4 for division\n");
	u = printStr("5 for modulo, 6 for unary plus\n");
	u = printStr("7 for unary minus\n");
	u = printStr("-1 for exit\n");
	do{
		u = printStr("Enter your choice\n");
		choice = readInt(&b);
		if(choice == 1)
			res = n1+n2;
		else if (choice == 2)
			res = n1-n2;
		else if(choice ==3)
			res = n1*n2;
		else if(choice == 4)
			res = n1/n2;
		else if(choice == 5)
			res = n1%n2;
		else if(choice == 6)
			res = +n1;
		else if(choice == 7)
			res = -n1;
		if(choice != -1)
		{
			u = printStr("Result :\n");
			u = printInt(res);
			u = printStr("\n");
		}
	}while(choice!=-1);
	return 0;
}
