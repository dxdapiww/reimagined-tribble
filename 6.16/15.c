#include<stdio.h>
#include<string.h>
int main(void)
{
    int i;
    char ch[255];
    for(i=0;scanf("%c",&ch[0]);ch[i]!='\n'){
       i++;
       scanf("%c",&ch[i]);
    }
    for (i+=1;i<255;i++){
        ch[i]='\0';
    }
    for (i=strlen(ch);i>=0;i--){
        printf("%c",ch[i]);
    }
    return 0;
}