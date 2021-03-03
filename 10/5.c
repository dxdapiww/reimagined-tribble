#include <stdio.h>
#define N 5
double arr(const double n[], int a);
int main(void)
{
    double a[N], d;
    printf("Please input a set of numbers(5):\n");
    for (int i = 0; i < N; i++)
        scanf("%lf", &a[i]);
    d = arr(a, N);
    printf("The deviation is %.2lf", d);
    return 0;
}
double arr(const double n[], int a)
{
    double max = n[0], min = n[0];
    for (int i = 0; i < a; i++)
        if (max < n[i])
            max = n[i];
    for (int i = 0; i < a; i++)
        if (min > n[i])
            min = n[i];
    return max - min;
}