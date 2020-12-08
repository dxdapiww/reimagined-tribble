#include<stdio.h>
void jk(void);
int main(void)
{
    jk();
    return 0;
}
void jk(void)
{
    int num[8];
    int i,j;
    for (i=0;i<8;i++)
    scanf("%d",&num[i]);
    for (i=7;i>=0;i--)
    printf("%d ",num[i]);
    printf("\n");
}