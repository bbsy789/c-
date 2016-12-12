#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
int i,x,y,z;
char c=' ';
for(i=1;c!='\n';i++)
{
x=rand();
y=rand();
printf("%d+%d=?\n",x,y);
scanf("%d",&z);
if(z==x+y)
printf("you are wrong\n");
else
printf("Do you want more?\n");
c=getchar();
}
}                                        