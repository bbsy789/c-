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
	printf("һ���� %4d ������",k);
	system("pause");
	return 0;
}