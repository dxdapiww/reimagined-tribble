#include <stdio.h>
#include<math.h>
int main(void)
{
	double money,year,rate;
	double interest;
	scanf("%lf %lf %lf",&money,&year,&rate);
	interest = money*pow(rate+1,year)-money;
	printf("interest = %.2lf",interest);
    system("PAUSE");
	return 0;
}