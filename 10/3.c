#include <stdio.h>
#define LEN 5
void showarray(const int a[], int n);
int findmax(const int a[], int n);
int main(void)
{
    int max;
    int array[LEN] = {1, 3, 2, 4, 5};
    showarray(array, LEN);
    printf("Array:\n");
    max = findmax(array, LEN);
    printf("The maximum is %d.\n", max);
    return 0;
}
int findmax(const int a[], int n)
{
    int max = a[0];
    for (int i = 0; i < n; i++)
        max = max < a[i] ? a[i] : max;
    return max;
}
void showarray(const int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%-3d", a[i]);
        putchar('\n');
    return;
}