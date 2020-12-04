#include<stdio.h>
int main(void)
{
    int n;
    int n1,n2,n3,n4,n5,n6,a,b;
    scanf("%d",&n);
    int num[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&num[i]);
        n1=num[i]/100000;
        n2=num[i]/10000-n1*10;
        n3=num[i]/1000-n1*100-n2*10;
        n6=num[i]%10;
        n5=(num[i]%100-n6)/10;
        n4=(num[i]%1000-n5*10-n6)/100;
        a=n1+n2+n3;
        b=n4+n5+n6;
        if(a==b)
        {
            printf("You are lucky!\n");
        }
        else {
            printf("Wish you good luck.\n");
        }
    }
}