#include <stdio.h>
void main ()
{
	int a=3,b=4;
	int t;
	t=a;
	a=b;
	b=t;
	printf("a=%d b=%d",a,b);
	system("pause");
}