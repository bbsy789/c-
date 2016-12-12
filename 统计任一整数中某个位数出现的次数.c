#include <stdio.h>

int Count_Digit ( const int N, const int D );

int main()
{
    int N, D;
				
    scanf("%d %d", &N, &D);
    printf("%d\n", Count_Digit(N, D));
    return 0;
}

int Count_Digit ( const int N, const int D )
{
int i;
int tmp[10] = {0};
int n = N;
if (n < 0)
{
n = -n;
}
if ((n == 0) && (D == 0))
{
return 1;
}
while (n > 0)
{
for (i = 0; i < 10; i++)
{
if (n % 10 == i)
{
tmp[i] += 1; 
}
}
n = n / 10; 
  }
for (i = 0; i < 10; i++)
{
if (D == i)
{
return tmp[i];
}
}
return 0;
}
