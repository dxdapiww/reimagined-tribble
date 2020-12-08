#include<stdio.h>
int main(void)
{
    char ch[26];
    int i;
    for (i=0;i<26;i++)
    ch[i]='a'+i;
    for (i=0;i<26;i++)
    printf("%c",ch[i]);
    return 0;
}