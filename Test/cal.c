#include<stdio.h>
int main(void)
{
    double num1,num2,sum;
    char op;
    sum = 0;
    printf("Input two figures.\n");
    scanf("%lf%c%lf",&num1,&op,&num2);
    switch (op)
    {
    case '+':
        sum = num1+num2;
        printf("%lf",sum);
        break;
    case '-':
        sum = num1-num2;
        printf("%lf",sum);
        break;
    case '*':
        sum = num1*num2;
        printf("%lf",sum);
        break;
    case '/':
        sum = num1/num2;
        printf("%lf",sum);
        break;    
    default:
        break;
    }
    return 0;
}