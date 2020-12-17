#include <stdio.h>
#include <math.h>

int prime( int p );
int PrimeSum( int m, int n );

int main()
{
    int m, n, p;

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for( p=m; p<=n; p++ ) {
        if( prime(p) != 0 )
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}

int prime( int p) {
    int count=0,index;
    for(int i=2;i<p;i++) {
        if(p%i==0)
        count++;
        }
        if(count==0&&p>0&&p!=1)
        index =1;
        else index = 0;
    return index;
}
int PrimeSum( int m, int n ) {
    int sum=0;
    for(int i=m;i<=n;i++) {
        if(prime(i)==1)
        sum+=i;
    }
    return sum;
}