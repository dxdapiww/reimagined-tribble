#include<stdio.h>
int main(void)
{
    int i,n1,n2,sum;
    sum = 0;
    printf("Enter lower and upper integer limits: ");
    scanf("%d %d",&n1,&n2);
    while(n1<n2)
    {
        for (i=n1;i<=n2;i++)
        sum = sum+i*i;
            printf("The sums of the squares from %d to %d is %d.\n",n1*n1,n2*n2,sum);
            printf("Enter next set of limits: ");
            sum =0;
        scanf("%d %d",&n1,&n2);
        if (n1>=n2)
        printf("Done.");
    }
    return 0;
}