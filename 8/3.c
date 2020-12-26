#include<stdio.h>
#include<ctype.h>
int main(void) {
    char ch;
    int count1=0,count2=0;
    printf("Input a string:");
    while((ch=getchar())!=EOF) {
        if(isupper(ch))
        count1++;
        if(islower(ch))
        count2++;
    }
    printf("Upper :%d ,Lower :%d",count1,count2);
    return 0;
}