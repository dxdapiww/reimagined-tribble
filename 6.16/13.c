#include<stdio.h>
#include<math.h>
int main(void)
{
    int num[8],j=1;
    for (int i=1;i<=8;i++)
    {
      num[i]=pow(2,i);
    }
    do {
        printf("%d\n",num[j]);
        j++;
    }
    while(j<=8);
    return 0;
}