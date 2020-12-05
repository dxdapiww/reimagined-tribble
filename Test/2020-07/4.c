#include<stdio.h>
#include<math.h>
int main(void)
{
    int i,n1,n2,bit,ten,hundred;
    scanf("%d %d",&n1,&n2);
    if (n1<=n2&&n1>=100&&n2>=100&&n2<=999)
    {
        for(i=n1;i<=n2;i++)
    {
      bit = i%10;
      ten = i%100/10;
      hundred = i/100;
      if (i==pow(hundred,3)+pow(ten,3)+pow(bit,3))
    {
        printf("%d\n",i);
    }
    }
    }
   else {
       printf("Invalid Value.");
   }
   return 0;
}