#include <stdio.h>
int t = 0;
int cycle(void);
int main(void)
{
    int i = 0, n;
    scanf("%d", &n);
    while (i < n)
    {
        cycle();
        i++;
    }
    printf("%d", t);
    return 0;
}
int cycle(void)
{
    t++;
}