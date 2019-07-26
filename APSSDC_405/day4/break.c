//~program using break statement

#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i==7)
		{
			break;
		}
		printf("%d",i);
	}
	return 0;
}
