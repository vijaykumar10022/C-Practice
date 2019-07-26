#include<stdio.h>
int main()
{
	int i,n,sum=0,odd=0;
	printf("enter range:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		sum=sum+i;
		else
		odd=odd+i;
		
	}
	printf("%d\n",sum);
	    printf("%d\n",odd);
}
