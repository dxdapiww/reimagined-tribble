#include <stdio.h>
#include <stdlib.h>
double min(double n1, double n2);
int main(void)
{
    double x, y;
    scanf("%lf %lf", &x, &y);
    printf("The smaller one is:%.2lf\n", min(x, y));
    system("PAUSE");
    return 0;
}
double min(double n1, double n2)
{
    if (n1 > n2)
        return n2;
    else
        return n1;
}