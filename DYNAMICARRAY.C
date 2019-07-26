#include<stdio.h>
int main(){
	int n;
	printf("Enter size of array");
	scanf("%d",&n);
	int a[n];
	//reading an array
	printf("Enter Array Elements ");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Array Elements are\n");
	//display array elements
	for(int j=0;j<n;j++){
		printf("value at index position a[%d]=%d\n",j,a[j]);
	}
	return 0;
}
	
