#include<stdio.h>
#include<math.h>
int main(void) {
    int a;
    scanf("%d",&a);
    if(a>=2){
    for(int i=2;i<=a;i++) {
      if(a%i==0 ){
      printf("Not prime.\n");
    }
    else {
        printf("prime.\n");
         }
    }
 }
    else {
        printf("invalid.\n");
    }
    return 0;
    }