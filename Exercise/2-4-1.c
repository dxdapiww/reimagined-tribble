#include <stdio.h>
int is( int number );
void count_sum( int a, int b );

int main(void)
{
    int a, b;

    scanf("%d %d", &a, &b);
    if (is(a)) printf("%d is counted.\n", a);
    if (is(b)) printf("%d is counted.\n", b);
    count_sum(a, b);

    return 0;
}

int is( int number ) {
    int sum=0,index;
    while(number!=0) {
        int d=number%10;
        sum+=d;
        number/=10;
    }
    if(sum==5){
        index=1;
    }
    else index=0;
    return index;
}

void count_sum( int a, int b ) {
    int count=0,sum=0,i;
   for(i=a;i<=b;i++) {
       if(is(i)) {
         count++;
         sum+=i;
       }
   }
   printf("count = %d, sum = %d",count,sum);
}