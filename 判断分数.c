#include<stdio.h>
void main()
{
int score;
printf("���������:");
scanf("%d",&score);
if(score>=80)
printf("A ����");
else if(score>=70)
printf("B �е�");
else if(score>=60)
printf("C ����");
else 
printf("D ������");
system("pause");
}