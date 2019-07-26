#include<stdio.h>
int main()
{
	unsigned long long  n;
	int first=0,second=1,i,temp,m;
	scanf("%llu",&n);
	scanf("%d",&m);
	if(n==0)
	{
		printf("%d",first);
	}
	else if(n==1)
	{
		printf("%d",second);
	}
	else 
	{
		for(i=2;i<=n;i++)
		{
			temp=(first+second)%m;
			first=second;
			second=temp;
		}
		printf("%d",temp);
	}
	return 0;
}
