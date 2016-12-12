#include <stdio.h>
#include <math.h>
double main()
{
double a,b,c,d,x1,x2;
	printf("输入a的值：");
	scanf("%d",&a);
	printf("输入b的值：");
	scanf("%d",&b);
	printf("输入c的值：");
	scanf("%d",&c);
	d=b*b-4*a*c;
	
		if(d<0)
			printf("方程没有实数根\n");
		if(d==0)
			x1=(-b)/(2*a);
			printf("方程有一个相同的实数根：x1=%f\n",x1);
		if(d>0)
			x1=(-b+sqrt(d))/(2*a);
			x2=(-b+sqrt(d))/(a*a);
			printf("方程有两个不同的实数根：x1=%f,x2=%f\n",x1,x2);
			return 0;
			system("pause");


}
