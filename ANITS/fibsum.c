#include<stdio.h>
int main()
{
	int n,i,f1=0,f2=1,f3,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		f3=f1+f2;
		f2=f1;
		f1=f3;
		sum=sum+f3;
	}
	printf("%d",sum);
	return 0;
}
