#include<stdio.h>
void readarray(int arr[][3],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++){
			scanf("%d",&arr[i][j]);
		}
	}
}
void printarray(int arr[][3],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}
//~ int sumarray(int arr[][m],int n,int m)
//~ {
	//~ int sum=0;
	//~ for(int i=0;i<n;i++)
	//~ {
		//~ sum+=arr[i];
	//~ }
	//~ return sum;
//~ }
//~ int maxarray(int arr[],int n)
//~ {
	//~ int max=arr[0];
	//~ for(int i=0;i<n;i++)
	//~ {
		//~ if(arr[i]>max)
		//~ max=arr[i];
	//~ }
	//~ return max;
//~ }
//~ int minarray(int arr[],int n)
//~ {
	//~ int min=arr[0];
	//~ for(int i=0;i<n;i++)
	//~ {
		//~ if(arr[i]<min)
			//~ min=arr[i];
	//~ }
	//~ return min;

	
int main()
{
	int n,m;
	printf("Enter The size of an array :");
	scanf("%d%d",&n,&m);
	int arr[n][m];
	printf("Reading of an Array\n");
	readarray(arr,n,m);
	printf("printing array elements\n");
	printarray(arr,n,m);
	//~ sum=sumarray(arr,n,m);
	//~ printf("\nthe sum of array Elements is %d",sum);
	//~ max=maxarray(arr,n);
	//~ printf("\nmaximum value in the array is %d",max);
	//~ min=minarray(arr,n);
	//~ printf("\nMinimum value in the array is %d",min);
	return 0;
}
