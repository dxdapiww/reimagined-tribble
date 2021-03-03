#include <stdio.h>
#define N 5
int max_element(const double a[], int n);
void show(const double a[], int n);
int main(int argc, char const *argv[])
{
    int index;
    double array[N] = {1.1, 6.6, 3.3, 4.4, 5.5};
    show(array, N);
    printf("The index of the biggest element:");
    index = max_element(array, N);
    printf("%d", index);
    return 0;
}
void show(const double a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%.2lf ", a[i]);
    putchar('\n');
}
int max_element(const double a[], int n)
{
    int index;
    double max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
            index = i;
        }
    }
    return index;
}