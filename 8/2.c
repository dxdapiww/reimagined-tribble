#include<stdio.h>
int main(void) {
    char ch;
    while((ch=getchar())!=EOF) {
        if(ch<' ')
        printf("\n");
        else 
        {
            printf("%c's ASCII is %d\n",ch,ch);
        }
    }
    return 0;
}