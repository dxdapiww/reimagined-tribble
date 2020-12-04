#include<stdio.h>
int main(void)
{
    int n,a;
    scanf("%d\n",&n);
    int num[100];
    for (int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    for (int i=0;i<n;i++){
        if(num[i]>num[a])
        a=i;}
    printf("%d %d",num[a],a);
}