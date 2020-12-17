#include <stdio.h>
#include <math.h>

int IsSquare( int n );

int main()
{
    int n;

    scanf("%d", &n);
    if ( IsSquare(n) ) printf("YES\n");
    else printf("NO\n");

    return 0;
}

int IsSquare( int n) {
    if(n==0)
    return 1;
    int flag;
    for(int i=1;i<=n;i++) {
        if(n==i*i) {
          flag = 1;
          break;
          }
          else flag =0;
    }
    return flag;
}
