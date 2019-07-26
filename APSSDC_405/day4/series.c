#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i==1||i==10||i==7||i==13||i==20||i==23||i==25)
		{
	        continue;
		}
		printf("%d ",i);
	}
	return 0;
}
