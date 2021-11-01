#include<stdio.h>
#include<string.h>
#define M 100
char* s_gets(char *st, int n)
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
void reverse(char *exp){
   char temp;
   int len=strlen(exp);
   for(int i=0;i<len/2;i++){
       temp=exp[i];
       exp[i]=exp[len-1-i];
       exp[len-1-i]=temp;
   }
  return;
}
int main(int argc, char const *argv[])
{
    char input[M];
    while(s_gets(input,M)!=NULL){
    reverse(input);
    puts(input);
    }
    return 0;
}

