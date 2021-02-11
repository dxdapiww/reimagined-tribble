#include <stdio.h>
void larger_of(double *m, double *n);
int main(void)
{
    double x, y;
    scanf("%lf %lf", &x, &y);
    printf("Originally x = %.2lf , y = %.2lf\n", x, y);
    larger_of(&x, &y);
    printf("(Interchanged) x = %.2lf y = %.2lf", x, y);
    return 0;
}
void larger_of(double *m, double *n)
{
    double temp;
    if (*m >= *n)
    {
        temp = *m;
        *n = temp;
    }
    else
    {
        temp = *n;
        *m = temp;
    }
}