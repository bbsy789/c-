#include <stdio.h>

void Print_Factorial ( const int N );

int main()
{
    int N;
				
    scanf("%d", &N);
    Print_Factorial(N);
    return 0;
}

void Print_Factorial ( const int N )
{
	int i;
	int num;
	if(N>=0)
	{
	for(i=1;i<=N;i++)
	num*=i;
	printf("%d",num);
	}
	else printf("Invalid input");
}
