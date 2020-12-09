#include <stdio.h>

int main(void) {
  int n, t = 0, count = 0, max = 0;
  scanf("%d", &n);
  int a[1000];
  int b[1000] = {0};
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (a[i] == a[j]) {
        b[i]++;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    if (b[i] >= max) {
      max = b[i];
      t = i;
    }
  }
  printf("%d %d", a[t], b[t]);
  return 0;
}
