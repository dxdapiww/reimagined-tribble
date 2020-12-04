#include<stdio.h>
void a(double x);
int main(void)
{
    double num1;
    scanf("%lf",&num1);
    a(num1);
    return 0;
}
void a(double x)
{
  
  printf("%lf",x*x*x);
}