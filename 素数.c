#include<stdio.h>
main()
{
int i,j,k=0;
for(i=0;i<=100;i++)
{
for(j=2;j<=i-1;j++)
if(i%j==0)
break;
if(j>=i)
{
printf("%2d��100���ڵ�һ������\n",i);
k++;
}
}
printf("100���ڹ���%2d������",k);
system("pause");
} 