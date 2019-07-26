#include<stdio.h>
int main()
{
	int i,n,count;
	printf("enter digit number");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
	n=n/10;
	count++;
}
printf("digit count%d",count);
return 0;
}
