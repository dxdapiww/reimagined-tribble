#include <stdio.h>
#define N 7
#define M 3
void copy_arr(const double a[], double b[], int n);
void show_arr(double x[], int n);
int main(int argc, char const *argv[])
{
    double a[N] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
    double b[M] = {0.0};
    printf("Array a:\n");
    show_arr(a, N);
    printf("Array b:\n");
    show_arr(b, M);
    copy_arr(a, b, N);
    printf("Copy a to b:\n");
    show_arr(b, M);
    return 0;
}
void copy_arr(const double a[], double b[], int n)
{
    for (int i = 2; i < n - 2; i++)
        b[i - 2] = a[i];
    return;
}
void show_arr(double x[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%.2lf ", x[i]);
    putchar('\n');
    return;
}
