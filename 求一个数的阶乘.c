#include<stdio.h>
int main()
{
int s=1,i,n;
printf("������һ��������׳ˣ�");
scanf("%d",&n);
for(i=1;i<=n-1;i++)
{
	s=s*i;
}
printf("������Ľ׳�Ϊ:%d",s);
system("pause");
return 0;
}