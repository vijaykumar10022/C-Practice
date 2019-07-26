#include<stdio.h>
void printarr(int m[],int n)// to print array
{
		for(int i=0;i<n;i++)
		{
			printf("\t %d",m[i]);
		}	printf("\n");	
}
void read(int m[],int n)//to read an array
{
		for(int i=0;i<n;i++)
		{
			scanf("\t %d",&m[i]);
		}		
}
void swap(int a[],int n)//to sort an array
{
	int temp,i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			}
		}
	}
}
void common(int arr1[],int l1,int arr2[],int l2,int arr3[],int l3)//to print common elements from three arrays
{
	for(int i=0;i<l1;i++)
	{
		for(int j=0;j<l2;j++)
		{
			for(int k=0;k<l3;k++)
			{
				
				if(arr1[i]==arr2[j] && arr2[j]==arr3[k])
				{
					printf("%d\t",arr1[i]);
				} 
			}
		}
	}
}
	
int main()
{
	int a[10],b[10],c[10];
	int i,j,k;
	printf("enter the sizes of three arrays:");
	scanf("%d %d %d",&i,&j,&k);
	read(a,i);
	read(b,j);
	read(c,k);
	
	printf(" 3 arrays are\n");
	printarr(a,i);
	printarr(b,j);
	printarr(c,k);
	
	printf(" sorted arrays are\n");
	swap(a,i);
	swap(b,j);
	swap(c,k);
	printf(" 3 arrays after sorting are\n");
	printarr(a,i);
	printarr(b,j);
	printarr(c,k);
	
	//~ printf("Common elements are:\n");
	//~ common(a,i,b,j,c,k);
	return 0;
}
