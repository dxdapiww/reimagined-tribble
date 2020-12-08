#include<stdio.h>
#define CONVERT_INCH 2.54
int main(void)
{
    float height,inch;
    int feet;
    printf("Enter a height in centimeters: \n");
    scanf("%f",&height);
    while (height>0)
    {
       feet=(height/CONVERT_INCH)/12.0;						
		inch=(height/CONVERT_INCH)-(feet*12.0);	
       printf("%.1f cm = %d feet,%.1f inches\n",height,feet,inch);
       printf("Enter a height in centimeters (<=0 to quit): \n");
       scanf("%f",&height);
    }
    printf("bye\n");
    system("PAUSE");
    return 0;

}