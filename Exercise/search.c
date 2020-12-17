#include<stdio.h>
int main(void) {
    char ch[80],a;
    int i=0,j,index=-1;
    scanf("%c\n",&a);
    while((ch[i]=getchar())!='\n') {
        i++;
    }
    ch[80]='\0';
    for(int k=0;k<i;k++) {
      if(a==ch[k]){
          index=k;
      }
    }
    if(index==-1) {
        printf("Not found.\n");
    }
    else {
        printf("%d",index);
    }
    return 0;
}