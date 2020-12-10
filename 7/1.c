#include<stdio.h>
int main(void){
    char ch;
    int count1=0,count2=0,count3=0;
    while((ch=getchar())!='#'){
      switch (ch)
      {
      case ' '/* constant-expression */:
          count1++;
          break;/* code */
      case '\n':
          count2++;
          break;
      default:
          count3++;
      }
    }
    printf("Blank: %d,Return: %d,Others: %d",count1,count2,count3);
    return 0;
}