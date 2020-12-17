#include<stdio.h>
#include<math.h>
int main(void) {
    int num,flag;
    if(scanf("%d",&num)==1 && num>=2) {
        for(int i = 2;i<=num;i++) {
            flag=0;
          for(int j=2;j<=sqrt(i);j++) {
              if(i%j==0) {
                  flag=1;
              break;
              }
                  }
        if(flag==0)
        printf("%d ",i);          
        }
    }
    else {
        printf("Invalid input.\n");
    }
    return 0;
}