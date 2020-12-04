#include<stdio.h>
int main(void)
{
    int i,n,x1,x2,x3;
    scanf("%d",&n);
    x1=0;
    x2=1;
    for (i=1;i<n;i++)
    {
      x3=x1+x2;
      x1=x2;
      x2=x3;
    }
    printf("%d",x3);
    return 0;
}