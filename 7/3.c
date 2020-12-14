#include<stdio.h>
int main(void){
    int i,even=0,odd=0,avg=0,sume=0,sumo=0;
    printf("Please Input Numbers( 0 to quit ):\n");
    while(scanf("%d",&i)==1 && i!=0){
        if(i%2==0){
           even++;
           sume+=i;
        }
        if(i%2!=0){
            odd++;
            sumo+=i;
        }
    }
    avg=(float)sumo/odd;
    printf("%d %d %d",even,odd,avg);
    return 0;
}