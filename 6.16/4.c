#include <stdio.h>
int main()
{
    char c = 'A';
    int i, j;
    int n;
    printf("How many lines you want to print: ");
    scanf("%d",&n);
    for( j = 0; j < n; j++)
    {
        for( i = 0; i <= j; i++)
            printf("%c",c++);
        printf("\n");
    }
    return 0;
} 