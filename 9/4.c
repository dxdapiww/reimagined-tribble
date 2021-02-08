#include<stdio.h>
double avg(double n,double m);
int main(void) {
    double x,y;
    scanf("%lf %lf",&x,&y);
    printf("harmonic mean=%.2lf",avg(x,y));
    return 0;
}
double avg(double n,double m) {
    double avg;
    avg=(1.0/n+1.0/m)/2;
    return 1.0/avg;
}