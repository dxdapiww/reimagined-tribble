#include<stdio.h>
#include<string.h>
#define M 10
int is_within(char ch,char *exp){
    while(*exp!='\0'){
        if(*exp!=ch){
            ++exp;
        }
        else
        {
        return 1;
        }
    }
    return 0;
}
char *s_gets(char *st, int n)
{
    char *ret_val;
    char *find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');
        if (find)
        {
            *find = '\0';
        }
        else
        {
            while (getchar() != '\n')
                continue;
        }
    }
    return ret_val;
}
int main(int argc, char const *argv[])
{
    char ch,input[M];
    printf("Please enter a string (EOF to quit):\n");
    while(s_gets(input,M)!=NULL){
     printf("Please enter a character: ");
     ch = getchar();
        while (getchar() != '\n')
            continue;
        printf("String:\n");
        puts(input);
        if(!is_within(ch,input)){
            printf("NOT FOUND.\n");
        }
        else {
        printf("Exist %c in the string.\n", ch);
        }
        printf("You can enter a string again (EOF to quit):\n");
    }
    printf("Done.\n");
    return 0;
}
