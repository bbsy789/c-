#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Max( ElementType S[], int N );

int main ()
{
    ElementType S[MAXN];
    int N, i;

    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%f", &S[i]);
    printf("%.2f\n", Max(S, N));

    return 0;
}

ElementType Max( ElementType S[], int N )
{
    ElementType    max=S[0];      //注意，max不能习惯随意赋值为0，如果输入的数都为负数，则会出现错误的返回值；
    int i;
    if(N>MAXN)    {
        N=MAXN;
    }
    for(i=0;i<N;i++)    {
        if(S[i]>max)    {
            max=S[i];
        }    
    }
    return max;
 }
