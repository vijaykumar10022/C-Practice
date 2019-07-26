#include<stdio.h>
int main(){
	int size;
	printf("Enter array size:");
	scanf("%d",&size);//20
	int array[size];//array[20]
	//int arr[10]={1,2,3,4,5,6,7,8,9,10};
	for(int i=0;i<=size-1;i++){
		scanf("%d",&array[i]);
		}
		printf("Array elements are :");
	for(int i=0;i<=size-1;i++){
		printf("%d\t",array[i]);
	}
	
	return 0;
}
