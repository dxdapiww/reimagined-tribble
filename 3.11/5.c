#include<stdio.h>
int main(void)
{
    float molmass;
    float t;
    int q;
    scanf("%d",&q);
    molmass = 3.0e-23;
    t=q*950/molmass;
    printf("%e",t);
    return 0;
}