#include<stdio.h>
int main(void) {
    int ch,flag,count=0;
    while((ch=getchar())!='#') {
        switch(ch) {
            case 'e': {
              flag=1;
              break;
            }
            case 'i': {
                if(1==flag){
                  count++;
                }
                flag=0;
                break;
            }
            default: {
            flag=0;
            }
        }
        }
        printf("%d",count);
        return 0;
}