#include<stdio.h>
int main(void)
{
	int t1,t2,h,m;
	scanf("%4d %4d",&t1,&t2);
    h = t2/100-t1/100;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
    m = t2%100-t1%100;
    if (m<0)
    {
    m =m +60;
    h--;
    }
	printf("%02d:%02d",h,m);
	return 0;
 } 