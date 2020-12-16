#include<stdio.h>
int main(void) {
    char ch[100];
    int j,k;
    while((ch[j]=getchar())!='\n') {
        j++;
    }
    ch[j]='\0';
      k=0;
      j=j-1;
      while(k<j) {
          if(ch[k]!=ch[j])
          break;
          k++;
          j--;
      } 
      if(k>=j)
      printf("This is palindrome.");
      else
      printf("Not A palindrome.");
      return 0;
}