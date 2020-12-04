#include<stdio.h>
int main (void)
{
    int num,a,b,c,d;
    scanf("%d",&num);
    a=num/100;
    b=(num-a*100)/10;
    c=num-a*100-b*10;
    d = c*100+b*10+a;
    printf("%d\n",d);
        system("PAUSE");
    return 0;
}