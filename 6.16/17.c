#include<stdio.h>
#define MONEY 100
#define RATE 0.08
int main(void){
    double i1=MONEY;
    int i;
    for(i=1;i1>0;i++){
      i1=i1+RATE*i1-10;
    }
    printf("Money will be drawed up %d years later.",i);
}