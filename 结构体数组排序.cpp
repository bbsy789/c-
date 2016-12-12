#include<stdio.h>
#include<stdlib.h>
#define n 10

struct student{
	char name[10];
	int score;
};

void shellsort(struct student a[n],int m);
void quicksort(struct student a[n],int low,int high);
void bubblesort(struct student a[n],int m);
void print(struct student a[n]);

int main()
{
	struct student a[n]={{"",0},{"wwq",75},{"ww",75},{"rr11",67},{"uu",67},{"q1",80},{"w2",75},{"r2r",69},{"u2u",67},{"www",100}};
	char s[5];
	for(;;)
	{
      printf("1------------希尔排序\n");
      printf("2------------快速排序\n");
	  printf("3------------冒泡排序\n");
	  printf("4------------退出\n");
	  gets(s);
	  switch(*s)
	  {
	      case '1':shellsort(a,9);
			       print(a);
				   break;
	      case '2':quicksort(a,1,9);
			       print(a);
				   break;  
		  case '3':bubblesort(a,9);
			       print(a);
				   break;				  
		  case '4':exit(0);
	      default :printf("输入有误，请重新输入\n");
			       break;
	 }

   }
   return 0;
}
void shellsort(struct student a[n],int m)
{
	int i,d,j;
	d=m/2;
	while(d>0)
	{
		for(i=d+1;i<=m;i++)
		{
			a[0]=a[i];
			j=i-d;
			while(j>=0 && a[0].score<a[j].score)
			{
				a[j+d]=a[j];
				j=j-d;
			}
	    a[j+d]=a[0];
		}
		d=d/2;
	}
}
void quicksort(struct student a[n],int low,int high)
{
	int i,j;
	struct student t;
	i=low;
	j=high;
	t=a[low];
	while(i<j)
	{
		while(i<j && a[j].score>t.score)
			j--;
		if(i<j)
			a[i++]=a[j];
		while(i<j && a[i].score<=t.score)
			i++;
		if(i<j)
			a[j--]=a[i];
	}
	a[i]=t;
	if(low<i-1) quicksort(a,low,i-1);
	if(high>i+1) quicksort(a,i+1,high);
}
void bubblesort(struct student a[n],int m)
{
	int i,j,flag;
	for(i=1;i<=m;i++)
	{
		flag=1;
		for(j=1;j<=m-i;j++)
			if(a[j+1].score<a[j].score)
			{
				flag=0;
				a[0]=a[j];
				a[j]=a[j+1];
				a[j+1]=a[0];
			}
			if(flag)
				break;
	}
}
void print(struct student a[n])
{
	int i,k;	
	printf("名次---姓名---成绩\n");
	for(i=n-1;i>=1;i--)
	{
		if(a[i].score==a[i+1].score)
		{
          
			printf("%d,%s,%d",k,a[i].name,a[i].score);
		    printf("\n");
			
		}
		else
		{
		k=n-i;
		printf("%d,%s,%d",k,a[i].name,a[i].score);
		printf("\n");
		}
	}
}

