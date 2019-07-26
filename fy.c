//3)funtions with arg and with return value
//Division of two numbers
#include<stdio.h>
int Div();//function declaration
int main(){
	int d=Div(20,10);
	printf("Division of two values is %d",d);//function calling
	return 0;
}
//function defination
int Div(int a,int b){
	return a/b;
}
