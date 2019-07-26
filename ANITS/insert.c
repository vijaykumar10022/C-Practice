#include<stdio.h>
int main()
{
	int size,i,p,n;
	scanf("%d",&size);
	int a[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Before inserting new value:");
	for(i=0;i<size;i++)
	{
		printf("%d",a[i]);
	}
	scanf("%d",&p); //p=2
	scanf("%d",&n);//n=25
	if(p<0||p>size)
	{
		printf("Insertion not possible");
	}
	else
	{     //size=5 i=5;5>=2
		for(i=size;i>=p;i--)
		{
			a[i+1]=a[i];
		}
		a[p]=n;
		size++;
	}
	printf("After inserting new value:");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
Input:
6
7 2 1 6 5 4
Output:
1 2 4 7 6 5











