/* addemup.c -- five kinds of statements */
#include <stdio.h>
int main(void)                /* finds sum of first 20 integers */
{
    int count, sum,input;           /* declaration statement          */
    scanf("%d",&input);
    count = 0;                /* assignment statement           */
    sum = 0;                  /* ditto                          */
    while (count++ < input)      /* while                          */
        sum = sum + count*count;    /*     statement                  */
    printf("sum = %d\n", sum);/* function statement             */
    
    return 0;                 /* return statement               */
}
