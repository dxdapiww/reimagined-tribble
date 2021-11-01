#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void){
    int temp;
    time_t t;
    srand((unsigned)time(&t));
    int count[10]={0};
    for(int i=0;i<1000;i++){
        temp=rand()%11;
        switch(temp)
        {
            case 1:
            count[0]++;
            break;
            case 2:
            count[1]++;
            break;
            case 3:
            count[2]++;
            break;
            case 4:
            count[3]++;
            break;
            case 5:
            count[4]++;
            break;
            case 6:
            count[5]++;
            break;
            case 7:
            count[6]++;
            break;
            case 8:
            count[7]++;
            break;
            case 9:
            count[8]++;
            break;
            case 10:
            count[9]++;
            break;
        }
    }
    for(int i=0;i<10;i++){
        printf("%d\n",count[i]);
    }
    return 0;
}