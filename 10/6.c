#include <stdio.h>
#define N 5
void reverse(const double a[], int n);
int main(void)
{
    double n[N];
    for (int i = 0; i < N; i++)
        scanf("%lf", &n[i]);
    reverse(n, N);
    return 0;
}
void reverse(const double a[], int n)
{
    for (int i = n - 1; i >= 0; i--)
        printf("%.2lf ", a[i]);
}