#include<stdio.h>
int main(void) {
    int ch,count=0;
    while((ch=getchar())!='#') {
        switch (ch)
        {
        case '.':
            {
            putchar('!');
            count++;
            break;
            }
        case '!': 
        {
            printf("!!");
            count++;
        }
        default:{
            putchar(ch);
            }
        }
    }
    printf(" %d\n",count);
    return 0;
}