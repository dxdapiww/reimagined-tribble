#include <stdio.h>
int fibonacci(int n);
int main(void)
{
    int x;
    scanf("%d", &x);
    printf("%d", fibonacci(x));
    return 0;
}
int fibonacci(int n)
{
    int a = 1, b = 1, t;
    while (t <= n)
    {
        t = a + b;
        a = b;
        b = t;
    }
    return t;
}
