#include<stdio.h>
void main()
{
	int x,y,z;
		printf(" x y z");
		for(x=0;x<=33;x++)
			for(y=0;y<=25;y++)
				for(z=0;z<=20;z++)
					if(3*x+4*y+5*z==100)
						printf("%4d%4d%4d\n",x,y,z);
system("pause");
}