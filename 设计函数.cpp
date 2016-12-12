#include <stdio.h>
#include <math.h> 

#define MAXN 10

double fx( int n, double a[], double x );

int main()
{
    int n, i;
    double a[MAXN], x;
				
    scanf("%d %lf", &n, &x);
    for ( i=0; i<=n; i++ )
        scanf("%lf", &a[i]);
    printf("%.1f\n", fx(n, a, x));
    return 0;
}

double fx( int n, double a[], double x)
{
	int index;
	double Sn1,Sn2;
	for(index=0;index<=n;index++)
	Sn1 = Sn1 + double a[index];
	
	Sn2=(x*(1-pow(x,n)))/(1-n);
	return Sn1+Sn2;
}

//����Ҫ��ʵ��һ���������������Ϊn��ϵ��Ϊa[0] ... a[n]�Ķ���ʽf(x)=\sum_{i=0}^{n}(a[i]\times x^i)f(x)=��
