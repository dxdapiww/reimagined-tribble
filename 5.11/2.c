
#include <stdio.h>
 
int main(void)
{
    int m,i;
    printf("Please Input A Number:");
    scanf("%d", &m);
    for(i = 0; i < 11; i++)
    {
        printf("%d ", m + i);
    }
    printf("\n");
    system("PAUSE");
    return 0;
}
