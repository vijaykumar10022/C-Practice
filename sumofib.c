#include<stdio.h>
unsigned long long int calculateSum(int n)
{
	if (n <= 0 )
	return 0;
	int fibo[n+1];
	fibo[0] = 0, 
	fibo[1] = 1;
	unsigned long long sum = fibo[0] + fibo[1];
	for (int i=2; i<=n; i++)
	{
		fibo[i] = fibo[i-1]+fibo[i-2];
		sum += fibo[i];
	}
	return sum;
}
int main()
{
	unsigned long long int res;
	int n;
	printf("Enter a fib number limit to calculate");
	scanf("%d",&n);
	res = calculateSum(n);
	printf("%llu",res);
	return 0;
}
