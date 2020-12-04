#include<stdio.h>
int main (void)
{
	float height;
	char name[40];
	printf("Enter Your Height: \n");
	scanf("%f",&height);
	getchar();
	printf("Enter Your Name: \n");
	scanf("%c",name);
	printf("%s ,you are %.3f feet tall.",name,height);
	return 0;
}
