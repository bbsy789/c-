#include<stdio.h>
#include<stdlib.h>
	void swap<char *p1,char *p2>
{	
	while(*p2)
	{
		*p1=*p2;
		p1++;
		p2++;
	}
}

int main()
{
char s[5],p[5];
char *s1,char *s2;
printf("ÊäÈëÒ»¸ö×Ö·û´®:");
gets(s);
char *s1 = &char s[];
char *s2 = &char p[];
s(*s1,*s2);
puts(s2);
system("pause");
return 0;
}