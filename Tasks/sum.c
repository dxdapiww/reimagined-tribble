#include <stdio.h>
#include<stdlib.h>
int fn( int a, int n );
int SumA( int a, int n );

int main(void)
{
    int a, n;

    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a,n));        
    printf("s = %d\n", SumA(a,n));    
    system("PAUSE");
    return 0;
}
int fn(int a,int n)
{
  int b=0;
  for(int i=1;i<=n;i++)
      b=b*10+a;
  return b;
}
int SumA( int a, int n )
{
    int sum=0;
    for (int i=1;i<=n;i++)
        sum+=fn(a,i);
    return sum;
}