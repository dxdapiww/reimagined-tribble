#include<stdio.h>
int main(void)
{
    int n1,n2,a,flag;
    flag=0;
    scanf("%d %d",&n1,&n2);
    int num[n1];
    for(int i=0;i<n1;i++){
        scanf("%d",&num[i]);
        if(num[i]==n2){
          a=i;
          printf("%d",a);
          flag=1;
        }
    }
    if(flag==0){
        printf("Not Found\n");
    }
}