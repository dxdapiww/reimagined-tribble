#include<stdio.h>
int main(void)
{
    int s,e,ch;
    ch = 'F';
    for (e=ch;e >='A';e--)   
     {
        for (s=ch;s>=e;s--)
        {
            printf("%c",s);
        }
            printf("\n");
    }
    return 0;
}
