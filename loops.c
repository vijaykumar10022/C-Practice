#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter n value :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum=sum+i;
	}
	printf("sum of %d natural numbers is %d",n,sum);
	return 89;
}
