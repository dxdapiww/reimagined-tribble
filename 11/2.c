#include <stdio.h>
#include <ctype.h>
#define MAX 1000
/*void Fgetchar(char *exp, int n)
{
    char ch;
    int i = 0;
    while (i <= n)
    {
        if ((ch = getchar()) != ' '&&(ch = getchar()) != '\n'&&(ch = getchar()) != '\t')
        {
            exp[i] = ch;
        }
        else
        {
            break;
        } 
        i++;
    }
    printf("%s", exp);
    return;
}*/
void getnchar(char str[], int n)
{
    int i = -1;

    while (++i < n - 1)
    {
        str[i] = getchar();
        if (isspace(str[i]))
        {
            break;
        }
    }
    str[i] = '\0';

    return;
}
int main(int argc, char const *argv[])
{
    char a[MAX];
    getnchar(&a, MAX);
    puts(a);
    return 0;
}