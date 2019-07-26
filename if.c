#include<stdio.h>
int main(){
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	if(n>10)
	{
		printf("Number %d is grater than ",n);
	}
	else if(n==10){
		printf("Number %d is   equal to 10",n);
	}
	else
	{
		printf("Number %d is  less than ",n);
	}
	
	return 0;
}
