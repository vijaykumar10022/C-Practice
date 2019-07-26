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
			printf("%d ",arr[i]);//5 1 2 6 3 
		}
}
void quick_sort(int a[],int start,int end){ // 5 1 2 6 3  0   4
		int i=start,j=end,temp;
		if(i<j){
			int pivot=start;
			while(i<j){
				while(a[i]<=a[pivot]){
					i++;
				}
				while(a[j]>a[pivot]){
					j--;
				}
				if(i<j){
					 temp=a[i];//swap(a[i],a[j]);
					 a[i]=a[j];
					 a[j]=temp;
				}
			}
			temp=a[pivot];
			a[pivot]=a[j];//swap(a[pivot],a[j]);
			a[j]=temp;
			quick_sort(a,start,j-1);
			quick_sort(a,j+1,end);
		}
}
int main(){
	int size;
	scanf("%d",&size);
	int arr[size];
	read_array(arr,size);
	printf("\nBefore Sorting :");
	display_array(arr,size);
	quick_sort(arr,0,size-1);
	printf("\n");
	printf("\nAfter Sorting :");
	display_array(arr,size);
	return 0;
}


