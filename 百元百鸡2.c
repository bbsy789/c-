#include<stdio.h>
int main(void)
{
	int a,b,c;
	printf("百元百鸡问题：\n");
	for(a=0;a<=20;a++)
	{
		for(b=0;b<=33;b++)
		{
			c=100-a-b;
			if((c%3==0) && ((5*a+3*b+c/3)==100) )
				printf("%3d %3d %3d\n",a,b,c);	
		}
	}
	system("pause");
	return 0;
}