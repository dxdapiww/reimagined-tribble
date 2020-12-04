#include<stdio.h>
int main(void)
{
    int age,day;
    printf("Please input your age.\n");
    scanf("%d",&age);
    day=age*365;
    printf("%d",day);
    return 0;
}