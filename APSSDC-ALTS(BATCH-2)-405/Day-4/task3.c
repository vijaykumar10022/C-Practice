#include<stdio.h>
int main()
{
	int n,i,m;
	scanf("%d%d",&n,&m);
	for(i=1;i<=m;i++)
	{
		printf("%d ",n*n-i);
	}
	return 0;
	}
