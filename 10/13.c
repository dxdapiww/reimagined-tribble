#include <stdio.h>
#define M 3
#define N 5
void read(double a[], int n);
void print(double a[][N], int n);
double average(const double a[], int n);
double average2(const double a[][N], int n);
double max(double a[][N], int n);
int main(int argc, char const *argv[])
{
    double a[M][N];
    for (int i = 0; i < M; i++)
    {
        printf("Please enter %d numbers for %d row\n", N, i + 1);
        read(a[i], N);
    }
    for (int i = 0; i < M; i++)
    {
        printf("Average for row %d is %g.\n", i + 1, average(a[i], N));
    }
    printf("Average: %g\n", average2(a, M));
    printf("Max: %g\n", max(a, M));
    print(a, M);
    printf("Done!");
    return 0;
}
void read(double a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Please enter a number: ", i + 1);
        scanf("%lf", &a[i]);
    }
    return;
}
void print(double a[][N], int m)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%-5g", a[i][j]);
        }
        putchar('\n');
    }
    return;
}
double average(const double a[], int n)
{
    double total = 0.0;
    for (int i = 0; i < n; i++)
    {
        total += a[i];
    }
    return total / n;
}
double average2(const double a[][N], int n)
{
    double total = 0.0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < N; j++)
        {
            total += a[i][j];
        }
    }
    return total / (M * N);
}
double max(double a[][N], int n)
{
    double max = a[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < N; j++)
        {
            max = max < a[i][j] ? a[i][j] : max;
        }
    }
    return max;
}
