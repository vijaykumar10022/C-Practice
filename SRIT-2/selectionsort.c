#include<stdio.h>
void readArray(int size,int arr[]){
		for(int i=0;i<=size-1;i++){
			scanf("%d",&arr[i]);
		}
}
void displayarray(int s,int a[]){
	for(int i=0;i<=s-1;i++){
		printf("%d ",a[i]);
	}
}
void selectionsort(int s,int a[]){
	for(int i=0;i<s-1;i++){
		printf("%d iteration\n",i+1);
		for(int j=i+1;j<=s-1;j++){
			if(a[i]>a[j]){//a[1]>a[4],7>9
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			displayarray(s,a);
			printf("\n");
		}
		printf("\n");
	}
}
int main(){
	int size;
	printf("Enter Your Array size:");
	scanf("%d",&size);
	int arr[size];
	printf("Enter Your Un ordered values:");
	readArray(size,arr);
	printf("Before Sorting values are:");
	displayarray(size,arr);
	printf("\n");
	selectionsort(size,arr);
	printf("\nAfter Sorting values are:");
	displayarray(size,arr);
	return 0;
}

