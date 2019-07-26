//arthamatic operations 
#include<stdio.h>
int sum(int,int); 
int sub(int,int);
int mul(int,int);
int main() 
{
		int a,b,c,d,e; 
		printf("\nEnter the two numbers : ");
		scanf("%d%d",&a,&b);
		c = sum(a,b);
		d = sub(a,b);
		e = mul(a,b);
		printf("\nAddition of two number is : %d",c); 
		printf("\nSubtration of two number is : %d",d); 
		printf("\nMultiplication of two number is : %d",e); 
	  return 0;	
 }
int sum (int num1,int num2)
{ 
		int num3; 
		num3 = num1 + num2 ; 
	return(num3); 
}
int sub(int sub1,int sub2)
{
		int sub3;
		sub3 = sub1 - sub2;
	return(sub3);
}	
int mul(int mul1,int mul2)
{
		int mul3;
		mul3=mul1 * mul2;
	return(mul3);
}	
	
