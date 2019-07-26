#include<stdio.h>
int main()
{
int n,m;
printf("enter range\n");
scanf("%d%d",&m,&n);
int i=m+1;
while(i<n)
{
	if(i%2!=0)
	{
		printf("%d\t",i);
	}
	i++;
}
return 0;
}
