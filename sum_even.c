#include<stdio.h>
int main()
{
	int n,i,se=0;
	printf("enter any number");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(i%2==0)
		{
			se=se+i;
		}
			

	}
	printf("\n sum of even numbers:%d",se);
	return 67;
}
