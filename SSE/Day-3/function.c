   //to know about functions
#include<stdio.h>
int fact(int x);
int main()
{
	int n;
	printf("Enter A NumBer : ");
	scanf("%d",&n);
	printf("%d Is the Factorial Of %d",fact(n),n);
	return 0;
}
int fact(int x)
{
	int f=1;//5!=5*4*3*2*1
	while(x!=1)
	{
		f=f*x;//factorial
		x=x-1;
	}
	return f;
}
