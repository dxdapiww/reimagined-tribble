#include<stdio.h>
#include<string.h>
int main(void) {
    int ch;
    int count=0;
    while((ch=getchar())!='#') {
     if(ch=='.'){
         putchar('!');
         count++;
     }
     else if(ch=='!'){
             printf("!!");
             count++;
         }
         else {
             putchar(ch);
         }
     }
     printf("% d\n",count);
     return 0;
    }