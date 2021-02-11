#include <stdio.h>
void sequence(double *x, double *y, double *z);
int main(void)
{
    double i, j, k;
    scanf("%lf %lf %lf", &i, &j, &k);
    sequence(&i, &j, &k);
    return 0;
}
void sequence(double *x, double *y, double *z)
{
    double temp;
    if (*x > *y)
    {
        temp = *x;
        *x = *y;
        *y = temp;
    }
    if (*x > *z)
    {
        temp = *x;
        *x = *z;
        *z = temp;
    }
    if (*y > *z)
    {
        temp = *y;
        *y = *z;
        *z = temp;
    }
    printf("The order of the number:%.2lf %.2lf %.2lf", *x, *y, *z);
}