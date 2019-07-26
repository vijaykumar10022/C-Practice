#include<stdio.h>
int main()
{
	int size,p,n;
	scanf("%d",&size);
	int  a[size],i;
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&p);
	if(p<0 || p>size)
	{
		printf("Insertion not possible");
	}
	else
	{
		scanf("%d",&n);
		size=size+1;
		for(i=size-1;i>=p;i--)
		{
			a[i+1]=a[i];
		}
		a[p]=n;
	}
		for(i=0;i<size;i++)
		{
			printf("%d ",a[i]);
		}
	return 0;
}











