#include<stdio.h>
int flag=0;
void readarray(int arr[],int size){
	printf("enter array elements");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
}
void displayarray(int arr[],int size){
	printf("array elements are:");
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
}
void binaryserchingele(int arr[],int size,int ele)
{
	int left=0,right=size-1,middle;
	while(left<=right){
		middle=(left+right)/2;
		if(arr[middle]<ele){
			left=middle+1;			
			}
		else if(arr[middle]==ele){
			printf("Element found at position %d element is %d",middle,arr[middle]);
			break;
			
			
		}
		else {
			right =middle-1;
			
		}
	}
	
}
int main(){
	int size,ele;
	printf("Enter Your Size of array: ");
	scanf("%d",&size);
	int arr[size];
	readarray(arr,size);
	displayarray(arr,size);
	printf("\nEneter searching element:");
	scanf("%d",&ele);
	binaryserchingele(arr,size,ele);
	return 0;
}
