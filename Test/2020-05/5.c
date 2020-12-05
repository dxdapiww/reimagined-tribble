#include<stdio.h>
#define Q1 6.95
#define Q2 7.44
#define Q3 7.93
int main(void)
{
    int a,b;
    double price;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    switch (b)
    {
    case 90:
        price = Q1;
        break;
    case 93:
        price = Q2;    
        break;
    case 97:
        price = Q3;
        break;   
    }
    if (c=='m')
    {
       printf("%.2lf",0.95*price*a);
    }
    if (c=='e')
    {
        printf("%.2lf",0.97*price*a);
    }
    else
    {
        printf("Please input a valid character.\n");
    }
    
    return 0;
}
