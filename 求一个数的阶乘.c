#include<stdio.h>
int main()
{
int s=1,i,n;
printf("请输入一个数求其阶乘：");
scanf("%d",&n);
for(i=1;i<=n-1;i++)
{
	s=s*i;
}
printf("这个数的阶乘为:%d",s);
system("pause");
return 0;
}