#include<stdio.h>
#define gallon 3.785
#define mile 1.609
int main(void)
{
	double gas,range,ratio;
	double km,litter;
	printf("Please Input Your Gas Consumption = \n");
	scanf("%lf",&gas);
	printf("Please Input Your Tour Range = \n");
	scanf("%lf",&range);
	km=mile*range;
	litter=gallon*gas;
	ratio=km/litter;
	printf("Your GasComsumption/Range Ratio is = %.1lf",ratio);
	return 0;
}
