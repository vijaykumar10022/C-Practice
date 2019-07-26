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
void bubblesort(int s,int a[]){
		for(int i=1;i<=s-1;i++){//no of passes
			printf("\nPass-->%d\n",i);
			for(int j=0;j<=s-1-i;j++){
				if(a[j]>a[j+1]){
					int temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
				displayarray(s,a);//to print array values for each pass
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
	bubblesort(size,arr);
	printf("\nAfter Sorting values are:");
	displayarray(size,arr);
	return 0;
}
