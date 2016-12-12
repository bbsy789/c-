#include<stdio.h>
main()
{int i,n=2;
 printf("1~100ËùÓĞËØÊı");
 while(++n<100)
 {i=1;
  while(++i<n)
    if(n%i==0)break;
  if(i==n)printf("%d,",n);
 }
}