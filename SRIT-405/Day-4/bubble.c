#include<stdio.h>
int main()
{
	int size;
	printf("Enter array size:");
	scanf("%d",&size);
	int a[size];
	for(int i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	int i,j;
	for(i=1;i<size;i++)
	{
		for(j=0;j<(size-i);j++)
		{
			if(a[j]>a[j+1])
			{
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<size;i++)
		printf("%d\t",a[i]);
	return 0;
}
