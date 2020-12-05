#include<stdio.h>
int main(void)
{
    int d,i,total;
    scanf("%d",&d);
    total = 1;
    for (i=1;i<d;i++)
    {
      total = (total+1)*2;
    }
    printf("%d",total);
    return 0;
}