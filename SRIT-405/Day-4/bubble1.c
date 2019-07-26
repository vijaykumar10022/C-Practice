//Bubble sort
#include<stdio.h>
int main()
{
	int size,i,j;
	printf("Enter size of array:");
	scanf("%d",&size);//size=5
	int a[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);//5 2 1 4 3
	}
	printf("Before sorting:");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);//5 2 1 4 3
	}
	printf("\n");
	for(i=1;i<size;i++)
	{
		printf("Pass-->%d\n",i);
		for(j=0;j<(size-i);j++)
		{
			if(a[j]>a[j+1])//a[0]=5  a[1]=2  5>2    5>1   5>4    
			{
				int t=a[j];//t=5  t=1
				a[j]=a[j+1];//a[0]=2   a[1]=5
				a[j+1]=t;//a[1]=5    a[2]=1
			}
			for(int z=0;z<=size-1;z++){
				printf("%d ",a[z]);
			}
			printf("\n");
			
		}
		printf("\n");
	}
	//~ printf("\nAfter sorting:");
	//~ for(i=0;i<size;i++)
	//~ {
		//~ printf("%d ",a[i]);
	//~ }
	return 0;
}
