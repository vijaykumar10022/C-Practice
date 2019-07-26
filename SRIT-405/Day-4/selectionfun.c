#include<stdio.h>
void readarray(int size,int a[])
{
	for(int i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
}
void printarray(int size,int a[])
{
	for(int i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
}
void selection(int size,int a[])
{
	int i,j;
	for(i=0;i<size-1;i++)
	{
		printf("Iteration %d\n",i);
		for(j=i+1;j<size;j++)
		{
			if(a[i]>a[j])
			{
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
			for(int z=0;z<size;z++){
				printf("%d ",a[z]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
int main()
{
	int size;
	printf("Enter array size:");
	scanf("%d",&size);
	int a[size];
	readarray(size,a);
	//printarray(size,a);
	selection(size,a);
	printf("\n");
	//printarray(size,a);
	return 0;
}
