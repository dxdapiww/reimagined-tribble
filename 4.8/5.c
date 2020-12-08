#include <stdio.h>
int main(void)
{
	float mbits,MB,time;
	printf("Enter Mb/s: ");
	scanf("%f",&mbits);
	printf("Enter File Size in MB: ");
	scanf("%f",&MB);
	time = MB/(mbits/8);
	printf("At %.2f megabits per second, a file of %.2f megabytes \
	downloads in %.2f seconds.",mbits,MB,time);
	return 0;
}
