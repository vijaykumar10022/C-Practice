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
void insertsort(int s,int a[]){
	int temp,j;
	for(int i=1;i<s;i++){
		temp=a[i];//tem=8
		for(j=i;j>0&&temp<a[j-1];j--){//,8<7
			a[j]=a[j-1];
		}
		a[j]=temp;//a[0]=8
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
	insertsort(size,arr);
	printf("\nAfter Sorting values are:");
	displayarray(size,arr);
	return 0;
}


