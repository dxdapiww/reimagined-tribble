#include<stdio.h>
double judge(double n1,double n2);
int main (void)
{
    double n1,n2,res;
    printf("please input two float number:");
    while(scanf("%lf %lf",&n1,&n2)==2)
    {
        res=judge(n1,n2);
        printf("%lf\n",res);
        printf("q to quit");
    }
    return 0;
}
double judge(double n1,double n2)
{
    double num;
    num = (n1-n2)/(n1*n2);
    return num;
}