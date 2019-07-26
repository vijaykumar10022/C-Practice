#include<stdio.h>
int main()
{
	int size,i;
	printf("Enter number of elements to store in array:");
	scanf("%d",&size);//size=5
	int arr[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	int max=arr[0];
	for(i=0;i<size;i++)
	{
		if(arr[i]>max){
			max=arr[i];
		}
	}
	printf("Maximum Number is %d\n",max);
	int min=arr[0];
	for(i=0;i<size;i++)
	{
		if(arr[i]<min){
			min=arr[i];
		}
	}
	printf("Minimum Number is %d\n",min);
	return 0;
}


//~ input:
	//~ 10 20 30 8 70 88
//~ output:
	//~ Maximum Element is 88
	//~ Minimum Element is 8







