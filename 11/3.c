#include <stdio.h>
#include <ctype.h>
#define M 1000
char *getword(char *exp)
{
    int i = 0;
    char ch;
    char *p = exp;
    while ((ch = getchar()) != EOF && isspace(ch))
    {
        continue;
    }
    if (ch == EOF)
        return NULL;
    else
    {
        i++;
        *exp++ = ch;
    }
    while ((ch = getchar()) != EOF && !isspace(ch) && (i < M - 1))
    {
        *exp++ = ch;
        i++;
    }
    *exp = '\0';
    if (ch == EOF)
    {
        return NULL;
    }
    else
    {
        while ((ch = getchar()) != '\n')
        {
            continue;
        }
        return p;
    }
}
int main(int argc, char const *argv[])
{
    char a[M];
    while (getword(a) != NULL)
    {
        puts(a);
    }
    return 0;
}
