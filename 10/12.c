#include<stdio.h>
#define MONTH 12
#define YEARS 5
void Total( float (*rain)[MONTH],int n);
void Total_Average( float (*rain)[MONTH],int n);
int main(void){
    float rain[YEARS][MONTH] =
    {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2},
    };
    Total(rain,YEARS);
    Total_Average(rain,YEARS);
    return 0;
}
void Total( float (*rain)[MONTH],int n){
    int year,month;
    float subtotal,total;
    printf(" YEAR  RAINFALL (inches)\n");
    for(year=0,total=0;year<n;year++){
        for(month =0,subtotal=0;month<MONTH;month++)
        subtotal+=rain[year][month];
        printf("%5d %15.1f\n",2010+year,subtotal);
        total+=subtotal;
    }
    printf("\nThe yearly average is %.1f inches.\n\n",total/n);
    return;
}
void Total_Average( float (*rain)[MONTH],int n){
    int year,month;
    float subtotal,total;
    printf("MONTHLY AVERAGES:\n\n");
    printf(" Jan Feb Mar Apr May Jum Jul Aug Sep Oct");
    printf(" Nov Dec\n");
    for(month=0;month<MONTH;month++){
        for(year=0,subtotal=0;year<n;year++)
        subtotal+=rain[year][month];
        printf("%4.1f",subtotal/n);
    }
    printf("\n");
    return;
}
