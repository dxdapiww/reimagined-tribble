#include<stdio.h>
int main(void)
{
  int i,j;
  char ch='A';
  for (i=1;i<=5;i++)
  {
      for (j=1;j<=5-i;j++)
      printf(" ");
      for (j=0;j<i;j++)
      printf("%c",ch+j);
      for (j=i-2;j>=0;j--)
      printf("%c",ch+j);
      printf("\n");
  }
  return 0;
}