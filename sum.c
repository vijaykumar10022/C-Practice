#include<stdio.h>
#include<stdlib.h>
long long int fib(long long int n);
int main()
{
	long long int n,res;
	scanf("%lld",&n);
	res=fib(n);
	printf("%lld",res%10);
	   return 0;
}
long long int fib(long long int n)
{
	if(n<=1)
	return n;
	else
	return fib(n-1) + fib(n-2);
}
