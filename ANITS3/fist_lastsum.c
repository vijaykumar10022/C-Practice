//~ Task
//~ =====
//~ input:54789
//~ output:first digit=5
	   //~ Last Digit=9
	   //~ Sum=14
#include<stdio.h>
int main(){
	int number,first,last;
	scanf("%d",&number);
	last=number;
	while(number!=0){
		first=number%10;
		number=number/10;
	}
	printf("First Digit =%d\n",first);
	printf("Last Digit =%d\n",last%10);
	printf("Sum =%d\n",first+(last%10));
	return 0;
	}
