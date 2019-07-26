//~ arrays
#include<stdio.h>
#include "arrayfunctions.h"

int main(){
	//int a[5]={1,2,3,4,5};//static declaration of array
	//~ printf("Addition of a[%d]=%d and a[%d]=%d is %d ",2,a[2],3,a[3],a[2]+a[3]);
	//printf("%d\n",sizeof(a));
	//~ printf("%d + %d =%d ",a[sizeof(a)-17],a[sizeof(a)-16],a[sizeof(a)-17]+a[sizeof(a)-16]);
	//~ for(int i=4;i>=0;i--){
		//~ printf("a[%d]=%d\n",i,a[i]);
	//~ }
	int size;
	printf("Enter size of array:");
	scanf("%d",&size);//5
	int data[size],g[size];//data[5]//20bytes
	printf("First Array:\n");
	readarray(data,size);
	printarray(data,size);
	printf("\n\n");
	printf("Second Array:\n");
	readarray(g,size);
	printarray(g,size);
	printf("\n\n");
	printf("Addition of 2 arrays is:");
	addarray(data,g,size);
	return 0;
}
