#include<stdio.h>
int main(){
	int current=0,sum=0;
	do{
		sum=sum+current;
		//printf("Hello\n");
		current++;
	}while(current<=10);
	printf("%d",sum);
return 0;
}
