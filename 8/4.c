#include<stdio.h>
#include<ctype.h>
int main(void) {
    char ch;
    int letter=0,word=0,countword=0;
    float count;
    while((ch=getchar())!='\n') {
      if(ispunct(ch))
      continue;
      if(isalpha(ch))
      letter++;
      if(ch==' ')
      word=0;
      else if(word==0) {
          word=1;
          countword++;
      }
    }
    count=(float)letter/(float)countword;
    printf("letters per word: %f",count);
    return 0;
}