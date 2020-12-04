#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	if((n%5==3)||(n%5==1)||(n%5==2))
	{
		printf("Fishing in day %d",n);
	}
	else 
	{
		printf("Drying in day %d",n);
	}
	return 0;
}

