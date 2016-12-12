#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int a,b,c;
printf("  a  b  c\n");
	for(a=0;a<=100;a++)
	{
	for(b=0;b<=100;b++)
	{
		c=100-a-b;
		if(a+b+c==100 && (5*a + 3*b + (1.0/3.0)*c)==100.0)
		{
			printf("公鸡有 %d 母鸡有%d 小鸡有%d ",a,b,c);
			putchar('\n');
		}
	}
	}
system("pause");
return 0;
}
