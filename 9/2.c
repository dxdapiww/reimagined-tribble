#include <stdio.h>
void chline(char ch1, int n, int m);
int main(void)
{
    char ch;
    int i, j;
    scanf("%c %d %d", &ch, &i, &j);
    chline(ch, i, j);
    return 0;
}

void chline(char ch1, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%c", ch1);
        printf("\n");
    }
}