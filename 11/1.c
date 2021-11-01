#include <stdio.h>
#define MAX 1000
void Fgetchar(char *exp)
{
  char ch;
  int i = 0;
  while ((ch = getchar()) != '\n')
  {
    exp[i] = ch;
    i++;
  }
  printf("%s", exp);
  return;
}
int main(void)
{
  char a[MAX];
  Fgetchar(a);
  return 0;
}