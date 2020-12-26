#include<stdio.h>
int main(void) {
    int count=0;
    char ch;
    printf("Please Input: \n");
    while((ch=getchar())!=EOF)
        count++;
    printf("Chars before EOF are: %d",count);
    return 0;
}