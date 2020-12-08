#include<stdio.h>
#include<string.h>
int main(void)
{
	int width;
	char name[40];
	width =strlen(name)+3;
	printf("Enter Your Name: ");
	scanf("%s",name);
	printf("\"%s\"\n",name);
	printf("\"%+20s \"\n",name);
	printf("\" %-20s\"\n",name);
	printf("%*s",width,name);
	
return 0;

}
