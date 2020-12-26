#include<stdio.h>
int main(void) {
    int n,sum=0,flag=0,a=0;
    char id[18];
    int num[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char num1[11]={'1','0','X','9','8','7','6','5','4','3','2'};
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        sum=0;
        scanf("%s",id);
        for(int j=0;j<17;j++) 
        sum+=(id[j]-'0')*num[j];
    a=sum%11;
    if(id[17]!=num1[a]) {
        flag=1;
        printf("%s\n",id);
    }
}
if(flag==0)
printf("All passed\n");
return 0;
}