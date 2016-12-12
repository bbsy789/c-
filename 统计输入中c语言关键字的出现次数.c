#include<stdio.h>
#include<ctype.h>
#include<string.h>

#define BUFSIZE 100
#define MAXWORD 100
#define NKEYS (sizeof keytab / sizeof keytab[0])

struct key{
		char *word;
		int count;
	}keytab[] = {"auto",0,"break",0,"case",0,"char",0,"const",0,"continue",0,"default",0,
				"unsigned",0,"void",0,"volatile",0,"white",0};
				
char buf[BUFSIZE];/*����ungetch�����Ļ�����*/
int bufp = 0;/*buf����һ������λ��*/

int getword(char * ,int);/*��ȡ����*/
int binsearch (char *,struct key*,int); /*�۰����*/
int getch (void);/*ȡһ���ַ�(������ѹ�ص��ַ�)*/
void ungetch (int );/*���ַ�ѹ��������*/

/*ͳ��������c���Թؼ��ֵĳ��ִ���*/
int main()
{
	char *keyword[NKEYS];
	int keycount[NKEYS];
	
	int n;
	char word[MAXWORD];
	
	while(getword(word,MAXWORD)!=EOF)
		if(isalpha(word[0]))/*isalpha������ʶ����ĸ*/
			if((n = binsearch(word,keytab,NKEYS)) >= 0)
				keytab[n].count++;
	for(n=0;n<NKEYS;n++)
		if(keytab[n].count > 0)
			printf("%4d %s\n",keytab[n].count,keytab[n].word);
	return 0;
}

/*binsearch��������tab[0]��tab[n-1]�в��ҵ���*/ 
	int binsearch (char *word,struct key tab[],int n)
{
	int cond;
	int low,high,mid;
	
	low = 0;
	high = n-1;
	while (low <= high)
	{
		mid = (low + high)/2;
		if((cond = strcmp(word,tab[mid].word)) < 0)
		high = mid - 1;
		else if(cond > 0)
			low = mid + 1;
		else 
			return mid;/*�ҵ����ʷ���mid*/
	}
		return -1;/*û���ҵ�����-1*/
}

/*getword����:�������ж�ȡ��һ�����ʻ��ַ�*/
	int getword(char *word,int lim)
	{
		int c,getch(void);
		void ungetch(int);
			char *w =word;
		while(isspace(c=getch())) /*����isspace�������հ׷�*/
			;
		if(c!=EOF)
		*w++=c;
		if(!isalpha(c)){
			*w = '\0';
			return c;
		}
		for ( ; --lim>0;w++)
			if(!isalnum(*w = getch())){
				ungetch(*w);
				break;
			}
		*w='\0';
		return word[0];
	}
	
	 int getch(void) /*ȡһ���ַ�(������ѹ�ص��ַ�)*/
	 {
	 	return (bufp>0) ? buf[--bufp]:getchar();
	 }
	 
	 void ungetch (int c)/*���ַ�ѹ�ص�������*/
	 {
	 	if(bufp>=BUFSIZE)
	 		printf("ungetch:  too many characters \n");
	 		else
	 			buf[bufp++]=c;
	}
