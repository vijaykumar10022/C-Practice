//Leaner Search
//input:5
//      7 8 9 4 1
//      9
//output:9 value found at location 3 
//input:5
//      7 8 9 4 1
//      2
//output:2 value not found     
#include<stdio.h>
int main(){
	int size,i,n;
	printf("Enter Size of an array");
	scanf("%d",&size);
	int a[size];
	for(i=0;i<=size-1;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter Searching Element :");
	scanf("%d",&n);
	
	return 0;
}
