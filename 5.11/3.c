#include<stdio.h>
#define DAY 7
int main(void)
{
    int d;
    printf("Day = ");
    scanf("%d",&d);
    while(d>0)
    {
      printf("%d days are %d weeks, %d days.\n",d,d/7,d%7);
      printf("Input Days ( 0 to exit)\n");
      scanf("%d",&d);
    }
    system ("PAUSE");
    return 0;
}