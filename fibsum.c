#include<stdio.h>
int calculateSum(int n,int m)
{
	if (n <= 0 && m<=0)
	return 0;
	int fibo[n+1];
	fibo[0] = 0, 
	fibo[1] = 1;
	int sum = fibo[0] + fibo[1];
	for (int i=2; i<=n; i++)
	{
		fibo[i] = fibo[i-1]+fibo[i-2];
		sum += fibo[i];
	}
	return sum;
}
int main()
{
	int n,res,m;
	printf("Enter a fib number limit to calculate");
	scanf("%d %d",&n,&m);
	res = calculateSum(n,m);
	printf("%d",res);
	return 0;
}
