#include<stdio.h>
int main(void){
    int a,b;
    printf("Compare two number(output the bigger one):");
    scanf("%d %d",&a,&b);
    printf("%d",(a>b)?a:b);
}