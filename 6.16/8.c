#include<stdio.h>
int main(void)
{
    double n1,n2;
    printf("Please input two flaot figure:");
    while(scanf("%lf %lf",&n1,&n2)==2)
    {
        printf("%lf\n",(n1-n2)/(n1*n2));
        printf("Non-numeric to quit:");
    }
    return 0;
}