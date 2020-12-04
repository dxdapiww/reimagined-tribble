#include<stdio.h>
#include<math.h>
int main(void)
{
    int n,i,high,low;
    scanf("%d %d",&high,&low);
    if (high<low)
    {
        printf("Wrong input.");
    }
    else for (i=low;i<=high;i++)
    {
        printf("%d %d %.0lf\n",i,i*i,pow(i,3));
    }
    return 0;
}