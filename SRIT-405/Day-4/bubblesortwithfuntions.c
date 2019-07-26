#include<stdio.h>
void read_array(int arr[],int size){
		int i;
		for(i=0;i<=size-1;i++){
			scanf("%d",&arr[i]);
		}
}
void display_array(int arr[],int size){
		int i;
		for(i=0;i<=size-1;i++){
			printf("%d ",arr[i]);
		}
}
void bubble_sort(int a[],int size){
	int i,j;
	for(i=1;i<size;i++)
	{
		printf("\nPass-->%d\n",i);
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
		
}
int main(){
	int size;
	scanf("%d",&size);
	int arr[size];
	read_array(arr,size);
	printf("\nBefore Sorting :");
	display_array(arr,size);
	bubble_sort(arr,size);
	printf("\n");
	printf("\nAfter Sorting :");
	display_array(arr,size);
	return 0;
}
