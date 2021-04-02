#include <stdio.h>
#define X 3
#define Y 3
void copy_arr(const double a[], double b[], int n);
void show_array(double (*x)[X], int n);
int main(int argc, char const *argv[])
{
    double a[X][Y] = {
        {1.0, 2.0, 3.0},
        {4.0, 5.0, 6.0}};
    double b[X][Y] = {0.0};
    printf("Array a:\n");
    show_array(a, X);
    printf("Array b:\n");
    show_array(b, X);
    for (int i = 0; i < X; i++)
        copy_arr(a[i], b[i], X);
    printf("Copying array a to array b is:\n");
    show_array(b, X);
    return 0;
}
void copy_arr(const double a[], double b[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        b[i] = a[i];
    return;
}
void show_array(double (*x)[Y], int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < Y; j++)
            printf("%-5g", x[i][j]);
        putchar('\n');
    }
    return;
}
