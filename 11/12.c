#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define M 100
int main(int argc, char const *argv[])
{
    char input;
    int upcnt = 0, lowcnt = 0, puntcnt = 0, wdcnt = 1, digit = 0;
    int inword = 0;
    while ((input = getchar()) != EOF)
    {
        if (isupper(input))
        {
            upcnt++;
        }
        if (islower(input))
        {
            lowcnt++;
        }
        if (ispunct(input))
        {
            puntcnt++;
        }
        if (input == ' ')
        {
            wdcnt++;
        }
        if (isdigit(input))
        {
            digit++;
        }
        if (!isspace(input) && !inword)
        {
            inword = 1;
            wdcnt++;
        }
        if (isspace(input) && inword)
        {
            inword = 0;
        }
    }
    printf("%d %d %d %d %d", upcnt, lowcnt, puntcnt, wdcnt, digit);
    return 0;
}
