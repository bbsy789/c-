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
printf("%2d是100以内的一个素数\n",i);
k++;
}
}
printf("100以内共有%2d个素数",k);
system("pause");
} 