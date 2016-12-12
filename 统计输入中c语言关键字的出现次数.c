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
				
char buf[BUFSIZE];/*用于ungetch函数的缓冲区*/
int bufp = 0;/*buf中下一个空闲位置*/

int getword(char * ,int);/*读取输入*/
int binsearch (char *,struct key*,int); /*折半查找*/
int getch (void);/*取一个字符(可能是压回的字符)*/
void ungetch (int );/*把字符压回输入中*/

/*统计输入中c语言关键字的出现次数*/
int main()
{
	char *keyword[NKEYS];
	int keycount[NKEYS];
	
	int n;
	char word[MAXWORD];
	
	while(getword(word,MAXWORD)!=EOF)
		if(isalpha(word[0]))/*isalpha函数，识别字母*/
			if((n = binsearch(word,keytab,NKEYS)) >= 0)
				keytab[n].count++;
	for(n=0;n<NKEYS;n++)
		if(keytab[n].count > 0)
			printf("%4d %s\n",keytab[n].count,keytab[n].word);
	return 0;
}

/*binsearch函数：在tab[0]到tab[n-1]中查找单词*/ 
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
			return mid;/*找到单词返回mid*/
	}
		return -1;/*没有找到返回-1*/
}

/*getword函数:从输入中读取下一个单词或字符*/
	int getword(char *word,int lim)
	{
		int c,getch(void);
		void ungetch(int);
			char *w =word;
		while(isspace(c=getch())) /*函数isspace：跳过空白符*/
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
	
	 int getch(void) /*取一个字符(可能是压回的字符)*/
	 {
	 	return (bufp>0) ? buf[--bufp]:getchar();
	 }
	 
	 void ungetch (int c)/*把字符压回到输入中*/
	 {
	 	if(bufp>=BUFSIZE)
	 		printf("ungetch:  too many characters \n");
	 		else
	 			buf[bufp++]=c;
	}
