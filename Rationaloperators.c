//Rational operators ==,!=,>,<,<=,>=
#include<stdio.h>
int main(){
	int a,b;
	printf("Enter a value\n");
	scanf("%d",&a);
	printf("Enter b value \n");
	scanf("%d",&b);
	if(a==b)
	{
		printf("a is equal to b\n ");
	}
	else 
	{
		printf("a is not equal to b\n");
	} 
	if(a!=b)
	{
		printf("a is not equal to b\n");
	}
	else
	{
		printf("a is qual to b\n");		
	}
	if(a<b){
		printf("a is less than b\n");
	}
	else
	{
		printf("a is not less than b\n"); 
	}
	if(a>b)
	{
		printf("a is Grater than b\n");
	}
	else{
		printf("a is not grater than b\n");
	}
	if(a<=b)
	{
		printf("a is either less than or equal to b\n");
	}
	if(b>=a){
		printf("B is either grater than or euqal to b\n");
	}
	return 0;
}

