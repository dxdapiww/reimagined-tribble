#include <stdio.h>
void arrayplus(const int a[], const int b[], int c[], int n);
void showarray(const int x[], int n);
int main(void)
{
    int a[4] = {2, 4, 5, 8};
    int b[4] = {1, 0, 4, 6};
    int c[4] = {0.0};
    printf("Array a:\n");
    showarray(a, 4);
    printf("Array b:\n");
    showarray(b, 4);
    arrayplus(a, b, c, 4);
    printf("Array a+b=\n");
    showarray(c, 4);
    return 0;
}
void arrayplus(const int a[], const int b[], int c[], int n)
{
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
    }
    return;
}
void showarray(const int x[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%-3d", x[i]);
    }
    putchar('\n');
    return;
}