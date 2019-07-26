//1'd array using functions
#include<stdio.h>
void readarray(int a[],int s)
{
	printf("Enter Array ELements to store in array:");
	for(int i=0;i<=s-1;i++)
	{
		scanf("%d",&a[i]);
	}
}
void displayarray(int a[],int s)
{
	printf("Array values are :");
	for(int i=0;i<=s-1;i++)
	{
		printf("%d\t",a[i]);
	}
}
void sumofarray(int a[],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("sum of array elemets is: %d\n",sum);
}
void max_element(int a[],int n)
{
	int max=0,i,min=0;
	max=a[0];
	min=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		else
		{
			min=a[i];
	    }
}
	printf("max_element is %d\n",max);
	printf("minimum_element is %d\n",min);
}
void sorted(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
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
void array_reverse(int a[],int n)
{
	int i=0,temp;
	int j=n-1;
	while(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i++;
		j--;
	}
}
void even_odd_numbers(int a[],int n)
{
	int i,even_count=0,odd_count=0;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			even_count++;
		}
		else
		{
			odd_count++;
		}
	}
	printf("Even Count is:%d\n",even_count);
	printf("Odd Count is:%d\n",odd_count);
}
	
int main(int argc, char **argv)
{
	int size;
	printf("Enter array size");
	scanf("%d",&size);
	int arr[size];
	readarray(arr,size);
	displayarray(arr,size);
	printf("\n");
	//~ sumofarray(arr,size);
	//~ printf("\n");
	//~ max_element(arr,size);
	//~ printf("\n");
	//~ sorted(arr,size);
	//~ displayarray(arr,size);
	array_reverse(arr,size);
	displayarray(arr,size);
	printf("\n");
	displayarray(arr,size);
	return 0;
}

