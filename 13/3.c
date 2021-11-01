#include <stdio.h>
#include <ctype.h>
#define N 50
int main(void)
{
    int ch;
    char a[N];
    FILE *fp;
    unsigned long count = 0;
    scanf("%49s", a);
    fp = fopen(a, "r+");
    while ((ch = getc(fp)) != EOF)
    {
        fseek(fp, -1L, SEEK_CUR);
        putc(toupper(ch), fp);
        fseek(fp, 0L, SEEK_CUR);
    }
    rewind(fp);
    while ((ch = getc(fp)) != EOF)
    {
        putchar(ch);
    }
    fclose(fp);
    return 0;
}