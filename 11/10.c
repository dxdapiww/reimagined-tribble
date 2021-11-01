#include <stdio.h>
#include <string.h>
#define LEN 10

char *s_gets(char *st, int n);
void cancel(char *str);

int main(int argc, char *argv[])
{
    char source[LEN];

    printf("Please enter a string (EOF or enter to quit):\n");
    while (s_gets(source, LEN) != NULL && source[0] != '\0')
    {
        printf("Source string: %s\n", source);
        cancel(source);
        printf("Delete space: %s\n", source);
        printf("You can enter a string again (EOF or enter to quit):\n");
    }
    printf("Done.\n");

    return 0;
}

char *s_gets(char *st, int n)
{
    char *ret_val;
    char *find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');
        if (find)
        {
            *find = '\0';
        }
        else
        {
            while (getchar() != '\n')
                continue;
        }
    }
    return ret_val;
}
void cancel(char *str)
{
    char *pt = str;
    while (*str)
    {
        if (*str != ' ')
        {
            *pt++ = *str++;
        }
        else
        {
            str++;
        }
    }
    *pt = '\0';
    return;
}