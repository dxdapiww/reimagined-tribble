#include<stdio.h>
int main()
{
	int max,min,num,f=0,a,b,c,t;
	scanf("%d",&num);
	while(num!=495||f==0){ 	/*在统计次数的同时，也处理了一种可能，
就是输入的数就是495的时候也要循环一次*/	
		a=num/100;b=num/10%10;c=num%10; //分解为a,b,c三个数 
		if(a<b) {t=a;a=b;b=t;} 	//三个if是把a,b,c从大到小排序 
		if(a<c) {t=a;a=c;c=t;}
		if(b<c) {t=b;b=c;c=t;}
		max=a*100+b*10+c; 
        min=a+b*10+c*100;
		num=max-min;	
        f++;
		printf("%d: %d - %d = %d\n",f,max,min,num);
	}
	return 0;
} 
