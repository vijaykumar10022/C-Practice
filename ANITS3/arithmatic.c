//~ 1).Arithmatic Operators-->+,-,*,/,%
					//~ /-->quotint-->20/10=2
					//~ %-->reminder-->0

#include<stdio.h>
int main(){
	int first,second;
	printf("Enter First &Second values to perform Arithmatic operations");
	scanf("%d%d",&first,&second);
	printf("Addition of %d and %d is %d\n",first,second,first+second);
	printf("Subtration of %d and %d is %d\n",first,second,first-second);
	printf("Multiplication of %d and %d is %d\n",first,second,first*second);
	printf("Division of %d and %d is %d\n",first,second,first/second);
	printf("Modulo Division  of %d and %d is %d\n",first,second,first%second);
return 0;
}
