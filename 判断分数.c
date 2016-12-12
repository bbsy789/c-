#include<stdio.h>
void main()
{
int score;
printf("请输入分数:");
scanf("%d",&score);
if(score>=80)
printf("A 优秀");
else if(score>=70)
printf("B 中等");
else if(score>=60)
printf("C 及格");
else 
printf("D 不及格");
system("pause");
}