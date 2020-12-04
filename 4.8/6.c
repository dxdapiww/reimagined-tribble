#include<stdio.h>
#include<string.h>
int main (void)
{
    int letters1; 
	int letters2; 
	char fname[30];
	char gname[30];
	printf("Please Input Your Family Name: \n");
	scanf("%s",fname);
	printf("Please Input Your Given Name: \n");
	scanf("%s",gname);
	letters1=strlen(fname);
	letters2=strlen(gname);
    printf("%s %s\n",fname,gname);
    printf("%*d %*d\n",letters1,letters1,letters2,letters2);
    printf("%s %s\n",fname,gname);
    printf("%-*d %-*d\n",letters1,letters1,letters2,letters2);
	return 0;	
 } 
