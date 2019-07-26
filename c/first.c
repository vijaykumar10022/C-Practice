#include<stdio.h>
int add(int a,int b){
	printf("Addition of two numbers is %d\n",a+b);
	return 0;
}
int main(){
	int a,b;
	printf("Enter first value:\n");
	scanf("%d",&a);
	printf("Enter Second value\n");
	scanf("%d",&b);
	add(a,b);//calling
	//~ sub(a,b);
	//~ mul(a,b);
	//~ div(a,b);
	return 0;
}
//defination
int sub(int a,int b){
	printf("Subtration of two numbers is %d\n",a-b);
	return 0;
}
