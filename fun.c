//1).calling a function with arguments  
#include<stdio.h>
//defination
int add(int a,int b){
	printf("addition of %d and %d=%d\n",a,b,a+b);
	return 0;
}
int sub(int a,int b){
	printf("subtraction of %d and %d=%d\n",a,b,a-b);
	return 0;
}
int mul(int a,int b){
	printf("Multiplication of %d and %d=%d\n",a,b,a*b);
	return 0;
}
int div(int a,int b){
	printf("Division of %d and %d=%d\n",a,b,a/b);
	return 0;
}

int main(){
	int a=10,b=50;
	printf("Before changing values:\n");
	printf("=====================\n");
	add(a,b);//calling fun
	sub(a,b);
	mul(a,b);
	div(a,b);
	a=50,b=80;
	printf("After changing values:\n");
	printf("=====================\n");
	add(a,b);//calling fun
	sub(a,b);
	mul(a,b);
	div(a,b);
return 0;
}

