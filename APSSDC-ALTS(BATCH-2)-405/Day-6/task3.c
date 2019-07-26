
#include<stdio.h>

void readarray(int a[],int n)
{
	int i;
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
}

void printarray(int a[],int n)
{
	int i;
	for(i=0;i<=n-1;i++)
	{
		printf("%d ",a[i]);
	}
}

void sort(int a[],int n)
{
	int i,j,temp;
	//max=a[0];
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	readarray(arr,n);
	printarray(arr,n);
	sort(arr,n);
	printf("\n");
	printarray(arr,n);
	return 0;
}
