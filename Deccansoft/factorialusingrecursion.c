#include<stdio.h>

unsigned long long int factorial(unsigned long long int n){
	if(n ==1)
	       return 1;
	 else 
	    return n*factorial(n-1);
}
int main(){
	unsigned long long int a;
	printf("Enter Factorial of Number :\n");
	scanf("%llud",&a);
	printf("%llud \n",factorial(a));
}

