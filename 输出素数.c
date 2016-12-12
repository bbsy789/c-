#include<stdio.h>
int main()
{
	int i,j,k=0;
	for(i=1;i<100;i++)
	{
		for(j=2;j<=i-1;j++)
			if(i%j==0)
				break;
			if(j>=i)
				printf("%4d",i);
				k++;
	}
	printf("一共有 %4d 个素数",k);
	system("pause");
	return 0;
}