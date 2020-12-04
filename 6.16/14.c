#include<stdio.h>
int main(void)
{
    double num1[8],num2[8];
    printf("Please input 8 numbers:");
    for(int i=1;i<=8;i++)
    {
        scanf("%lf",&num1[i]);
        for (int j=1;j<=i;j++)
        {
            num2[j]=(num1[1]+num1[i])*j/2;
        }
    }
    for (int k=1;k<=8;k++)
    {
        printf("%.0lf ",num1[k]);
    }
    printf("\n");
    for(int l=1;l<=8;l++)
    {
        printf("%.0lf",num2[l]);
    }
    return 0;
}