#include<stdio.h>
int main(void)
{
    printf("Please Input Your Height: \n");
    float inch,cm;
    scanf("%f",&inch);
    cm = 2.54*inch;
    printf("%3.2f",cm);
    return 0;
}