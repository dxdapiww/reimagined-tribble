#include<stdio.h>
#define Hour 60
int main(void)
{
    int time,h,m;
    printf("Please Enter Minutes = ");
    scanf("%d",&time);
    while (time>0)
    {
      h = time/Hour;
      m = time%Hour;
      printf("%02d:%02d\n",h,m);
      printf("Enter Next Value = ");
      scanf("%d",&time);
    }
    system("PAUSE");
    return 0;
}