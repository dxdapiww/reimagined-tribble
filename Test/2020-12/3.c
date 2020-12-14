#include<stdio.h>
#define MAX 10
int main(void) {
    int a[MAX];
    int n,temp;
    scanf("%d",&n);
    for (int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for (int i=1;i<n;i++) { //只需要交换n-1次
        for (int j=0;j<n-1;j++) {
            if(a[j]<a[j+1]) { //从大到小排列，如果从小到大，则a[j]>a[j+1]
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
            }
        }
    } //冒泡排序，需要牢记
    for(int i=0;i<n;i++) {
        if(i<n-1)
        printf("%d ",a[i]);
        else
        printf("%d\n",a[n-1]);
    }
    return 0;
}