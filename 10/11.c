#include <stdio.h>
#define M 3
#define N 5
void Display(int (*a)[M], int n);
void Double(int (*a)[M], int n);
int main(void)
{
    int a[M][N] = {{1, 2, 3, 4, 5},
                   {6, 7, 8, 9, 10},
                   {11, 12, 13, 14, 15}};
    Double(a, N);
    Display(a, N);
    return 0;
}
void Display(int (*a)[M], int n)
{
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%-5d", a[i][j]);
        }
        putchar('\n');
    }
    return;
}
void Double(int (*a)[M], int n)
{
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            a[i][j] = a[i][j] * 2;
    return;
}