#include<stdio.h>
int main()
{
	/*��ʼ��*/
	int i,n,a,b,temp,flag;
	printf("�����������С��");
	scanf("%d",&n);
	/*����һ��һά����*/
	int x[n];
	printf("������Ҫ��������ֲ����ÿո����:");
	for(i=0;i<n;i++)/*ʹ��forѭ������i��0�仯��n-1*/
	/*����һά�����ֵ*/
	{
	scanf("%d",&x[i]);
	getchar();
	}
	/*�������������*/
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
	printf("��%d������Ľ��:",a+1);
	for(b=0;b<n;b++)
		printf("%5d",x[b]);
	putchar('\n');
	if (flag==1) break;
	}
	return 0;
		
}