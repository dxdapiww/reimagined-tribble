#include<stdio.h>
#define INITIAL_FRIENDS 5
int main(void){
  int f=INITIAL_FRIENDS;
  for(int i=1;f<150;i++){
      f-=i;
      f*=2;
      printf("Friends he has is %d \n",f);
  }
}