#include <stdio.h>
#include <ctype.h>
#define M 10
char *getword(char *exp,int len)
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
    while ((ch = getchar()) != EOF && !isspace(ch) && i<len)
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
        while (getchar() != '\n')
        {
            continue;
        }
        return p;
    }
}
int main(int argc, char const *argv[])
{
    char a[M];
    while (getword(a,M-1) != NULL)
    {
        puts(a);
    }
    return 0;
}
