//~ arrays using Funtions:
//~ ----------------------
//Funtion with arguments and return value
#include<stdio.h>
int read_Array(int array[],int size){
	for(int i=0;i<=size-1;i++){
		scanf("%d",&array[i]);
	}
	return 0;
}
int display_Array(int array[],int size){
	for(int i=0;i<=size-1;i++){
		printf("%d ",array[i]);
	}
	return 0;
}
int sorted_Array(int a[],char s[]){
	int temp;
	for(int i=0;i<=size-1;i++){
		for(int j=i+1;j<=size-1;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	return 0;
}
int main(){
	int size;
	scanf("%d",&size);
	int array[size];
	read_Array(array,size);//Funtion calling
	printf("Before Sorting \n");
	display_Array(array,size);
	sorted_Array(array,size);
	printf("\nAfter Sorting \n");
	display_Array(array,size);
	//printf("Minimum Value is %d",min_Array(array,size));
	return 0;
}
