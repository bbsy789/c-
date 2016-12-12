#include<stdio.h>
int main()
{
	/*初始化*/
	int i,n,a,b,temp,flag;
	printf("请输入数组大小：");
	scanf("%d",&n);
	/*定义一个一维数组*/
	int x[n];
	printf("请输入要排序的数字并且用空格隔开:");
	for(i=0;i<n;i++)/*使用for循环控制i从0变化到n-1*/
	/*输入一维数组的值*/
	{
	scanf("%d",&x[i]);
	getchar();
	}
	/*排序输入的数组*/
	for(a=0;a<=n-1;a++)
	{
	flag=1;
		for(i=0;i<n;i++)
		{
			if(x[i]>x[i+1])
			{
			temp = x[i];
			x[i] = x[i+1];
			x[i+1] = temp;
			flag = 0;   
			}
		}
	printf("第%d次排序的结果:",a+1);
	for(b=0;b<n;b++)
		printf("%5d",x[b]);
	putchar('\n');
	if (flag==1) break;
	}
	return 0;
		
}