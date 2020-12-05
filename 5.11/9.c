#include<stdio.h>
void Temperatures(double x);
int main(void)
{
  double f;
  printf("Please type a temperature:");
  while(scanf("%lf",&f) ==1)
  {
      Temperatures(f);
      printf("Please type a temperature:");
  }
  printf("Done.");
  return 0;
}
void Temperatures(double x)
{
    double c,k;
    const double CONVERT_F = 32;
    const double CONVERT_K = 273.16;
    c = 5.0/9.0*(x-CONVERT_F);
    k = c+CONVERT_K;
    if (c<-273.16)
    {
        printf("Please input a valid temperature!\n");
    }
    else 
    {
    printf("Celsius %.2lf = Fahrenheit %.2lf\n",c,x);
    printf("Celsius %.2lf = Kelvin %.2lf\n",c,k);
    }
}