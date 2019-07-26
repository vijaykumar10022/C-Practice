#include<stdio.h>
int printarray(int ar[],int len);
void increment(int a[],int len);
void buildArray(int ar[], int len);
int main(){
	int ar1[] ={1,2,3,4,5};
	printarray(ar1,5);
	int ar2[]={1,23,4,5,6,7,7,95,5};
	increment(ar2,9);
	printarray(ar2,9);
	int ar3[5];
	buildArray(ar3,5);
	printarray(ar3,5);
	int ar4[10];
	buildArray(ar4,10);
	printarray(ar4,10);
	
	
	}
int printarray(int ar[],int len)
{
	for (int i=0;i<len;i++)
	printf("%d ",ar[i]);
	printf("\n");
	return 0;
	
	}
	
void increment(int ar[],int len)
{
	
	for (int i=0;i<len;i++)
	ar[i]++;
	
	
	}
void buildArray(int ar[], int len)
{
	int i;
	printf("Now reading data for an array of %d elements",len);
	for(i=0;i<len;i++)
	{
		printf("Enter a Value for index %d : ",i);
		scanf("%d",&ar[i]);
		
		}
	
	}
