#include<stdio.h>
selectionsort(int a[],int n)
{
	for(int i=0;i<n-2;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min])
			min=j;
		}
		int temp =a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	
}
int main(){
	int a[]={2,7,4,1,5,3};
	selectionsort(a,6);
	for(int i=0;i<6;i++){
		printf(" %d ",a[i]);
	}
	return 0;
}
