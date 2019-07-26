//-->funtion with arguments and with return valu
//Addition of two numbers
#include<stdio.h>
int add(int a,int b)//Formal Parameters
{
	//int result=f+s;
	return a+b;
}
int sub(int s,int d){
	return s-d;
}
int main(){
	int f,s;
	scanf("%d%d",&f,&s);
	//int a=add(f,s);//Actual Parameters
	printf("Addition of %d and %d is %d",f,s,add(f,s));
	printf("Subtration of %d and %d is %d",f,s,sub(f,s));
return 0;
}
