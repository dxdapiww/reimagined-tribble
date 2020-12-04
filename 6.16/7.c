#include<stdio.h>
#include<string.h>
int main(void)
{
  char word[64];
  int n,i;
  scanf("%s",&word);
  n =strlen(word);
  for (i=n-1;i>=0;i--)
  {
      printf("%c",word[i]);
  }
  return 0;
}