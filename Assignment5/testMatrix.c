int printFlt(float *f);
int printInt(int n);
int printStr(char *s);
int main();
int main(){
 Matrix M[2][2];
 int i,j;
 for(i=0; i< 2; i++)
{
	for(j=0; j<2; j++)
	{
		M[i][j] = 2.34;
	}
}
Matrix N[2][2];
for(i=0; i< 2; i++)
{
	for(j=0; j<2; j++)
	{
		N[i][j] = 3.34;
	}
}
double d;
int u;
for(i=0; i< 2; i++)
{
	for(j=0; j<2; j++)
	{
		d = M[i][j];
		u = printFlt(d);
	}
}

 return 0;
}
