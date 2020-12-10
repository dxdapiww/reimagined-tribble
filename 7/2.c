#include<stdio.h>
int main(void){
    char ch=0;
    int i=0;
    printf("# to quit\n");
    while((ch=getchar())!=' ') {
        if((i%8==0)&&(i!=0)) {
            putchar('\n');
        }
        i++;
        printf("%c:%d ",ch,ch);
    }
    return 0;
}