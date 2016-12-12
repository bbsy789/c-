#include <stdio.h>

int Factorial( const int N );

int main()
{
    int N, NF;
				
    scanf("%d", &N);
    NF = Factorial(N);
    if (NF)  printf("%d! = %d\n", N, NF);
    else printf("Invalid input\n");

    return 0;
}

int Factorial( const int N )
{
	int i,x=1;
	if(N>=0)
		{
		for(i=1;i<=N;i++)
		x*=i;
		return x;
		}
	else return 0;
}
