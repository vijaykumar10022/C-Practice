#include<stdio.h>
int main(){
	int size,i,j;
	scanf("%d",&size);
	int arr[size];
	for( i=0;i<=size-1;i++){
		scanf("%d",&arr[i]);
	}
	//~ for( i=0;i<=size-1;i++){
		//~ printf("%d ",arr[i]);//80 10 30 60
	//~ }
	for(i=1;i<=size-1;i++){
		printf("\nIteration %d ",i);
		int temp=arr[i];//temp=arr[1]-->10
		for(j=i;j>0&&temp<arr[j-1];j--){//10<arr[1-1]-->10<80
			arr[j]=arr[j-1];//a[1]=a[1-1]-->a[1]-->80
		}//10 80 30 60
		//j=0
		
		printf("\n");
		arr[j]=temp;//a[1]->
		for(int z=0;z<size;z++){
			printf("%d ",arr[z]);
		}
	}
	printf("\nAfter sorting \n:");
	for( i=0;i<=size-1;i++){
		printf("%d ",arr[i]);//80 10 30 60
	}
	return 0;
}
