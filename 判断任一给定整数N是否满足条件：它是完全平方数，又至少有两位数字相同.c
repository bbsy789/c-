#include <stdio.h>
#include <math.h>

int IsTheNumber ( const int N );

int main()
{
    int n1, n2, i, cnt;
				
    scanf("%d %d", &n1, &n2);
    cnt = 0;
    for ( i=n1; i<=n2; i++ ) {
        if ( IsTheNumber(i) )
            cnt++;
    }
    printf("cnt = %d\n", cnt);

    return 0;
}

int IsTheNumber ( const int N )
{
int n = N;
int m;
int k;
int tmp[10]={0};
int i;
i = (int)sqrt(N);
m = i * i;
if (m == N)
{ 
while (n > 0)
	{
		for (k = 0; k < 10; k++)
		{
		if (n % 10 == k)  
		                {  
		                    tmp[k] += 1;   
		                    if (tmp[k] == 2)  
		                    {  
		                        return 1;  
		                    }  
		                }   
		} 
		n = n / 10;
	}
return 0;
}
return 0;
}
