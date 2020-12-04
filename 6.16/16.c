#include<stdio.h>
#include<math.h>
#define money 100
int main(void)
{
    double i1=money,i2=money;
    int i;
    for(i=1;i1>=i2;i++){
           i1+=money*0.1;
    i2+=0.05*i2;
    }
printf("%d Daphne: %lf Deirdre : %lf",i,i2,i1);
}