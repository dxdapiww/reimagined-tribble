#include <stdio.h>
int isalphabet(char ch);
int main(void)
{
    char a;
    while ((a = getchar()) != '\n')
    {
        printf("%d ", isalphabet(a));
    }
    return 0;
}
int isalphabet(char ch)
{
    int t;
    if (ch >= 'a' && ch <= 'z')
    {
        t = ch - 96;
        return t;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        t = ch - 64;
        return t;
    }
    else
        return -1;
}