#include<stdio.h>
int main(void)
{
    int n;
    char ch[64];
    scanf("%d %s",&n,&ch);
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n-i;j++)
        printf(" ");
        for (int k=1;k<=i;k++)
        printf("%s ",ch);
        printf("\n");
    }
    return 0;
}