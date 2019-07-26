#include<stdio.h>
int main()
{
	int n,i,j,k,m;
	scanf("%d",&n);
	for(k=1;k<=n;k++)
	{
		for(m=1;m<=k;m++)
		{
			printf(" *");
		}
		printf("\n");
	}
	for(i=1;i<=n-1;i++)
	{
		for(j=i;j<=n;j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	return 0;
	}
	/*3).input:5
   output:
   *
   **
   ***
   ****
   *****
   ****
   ***
   **
   *
   */
