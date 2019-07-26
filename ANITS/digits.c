#include<stdio.h>
int main()
{
	int n,l,sum=0;
	scanf("%d",&n); //n=123
	while(n!=0)
	{
		l=n%10;
		sum=sum+l;
		n=n/10;
	}
	printf("%d",sum);
	return 0;
}
