#include <stdio.h>
#include <math.h>
double main()
{
double a,b,c,d,x1,x2;
	printf("����a��ֵ��");
	scanf("%d",&a);
	printf("����b��ֵ��");
	scanf("%d",&b);
	printf("����c��ֵ��");
	scanf("%d",&c);
	d=b*b-4*a*c;
	
		if(d<0)
			printf("����û��ʵ����\n");
		if(d==0)
			x1=(-b)/(2*a);
			printf("������һ����ͬ��ʵ������x1=%f\n",x1);
		if(d>0)
			x1=(-b+sqrt(d))/(2*a);
			x2=(-b+sqrt(d))/(a*a);
			printf("������������ͬ��ʵ������x1=%f,x2=%f\n",x1,x2);
			return 0;
			system("pause");


}
