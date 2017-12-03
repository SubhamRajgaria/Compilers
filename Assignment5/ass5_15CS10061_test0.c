int printInt(int a); 

int main()
{
    int a = 15;
    int b = 10;
    int i = 0;
    int ans, c;
    int out1, out2, out3;
    c = b;
	int e =printInt(c);
    ans = sum(a, b);

    for(i=0; i<b; i++)
    {
        if(a%i == 0 && b%i==0)
        {
            out1 = i;
        }
    }

    i = c-1;
    do
    {
        i--;
        out3=i;
    }
    while(i>0);

    i = 0;   
    if( (out1 == out2) && (out2 == out3) )
    out = out1;
    return 0;
}

int sum(int a , int b)
{
    return a+b ;
}
