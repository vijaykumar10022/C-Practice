#include<stdio.h>
void readarray(int arr[],int size)
{
	printf("Enter elements to store in array");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
}
void displayarray(int arr[],int size){
	printf("Array elements are:");
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
} 
void linearsearch(int arr[],int size,int ele)
{
	for(int i=0;i<size;i++){
		if(ele==arr[i]){
			printf("\nElement found at position %d element is %d\n",i,ele);
		}
	}
}
int main(){
	int size;
	printf("Eneter size of an array");
	scanf("%d",&size);
	int arr[size];
	readarray(arr,size);
	displayarray(arr,size);
	printf("Enter searching element to find in array");
	int ele;
	scanf("%d",&ele);
	linearsearch(arr,size,ele);
	
	
	return 0;
}
