#include<stdio.h>
double f1(double x);
double f2(double y);
int main(void)
{
    int n;
    while(scanf("%d",&n)==1){
        if(n==0)
        return 0;
    printf("%lf\n",f1(n));
    printf("%lf\n",f2(n));}
    return 0;
}
double f1(double x)
{
    double sum=0;
    for (int i=1;i<=x;i++)
    {
        sum =sum+1.0/i;
    }
    return sum;
}
double f2(double y)
{
    double sum=0;
    int j;
    int sign;
    for (int i=1,sign =1;i<=y;sign *=-1,i++)
    {
        sum =sum +sign*1.0/i;
    }
    return sum;
}