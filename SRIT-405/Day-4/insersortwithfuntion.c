#include<stdio.h>
void readarray(int size,int a[])
{
	for(int i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
}
void printarray(int size,int a[])
{
	for(int i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
}
void inserts_sort(int size,int arr[]){
	int i,j;
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
}
int main()
{
	int size;
	printf("Enter array size:");
	scanf("%d",&size);
	int a[size];
	readarray(size,a);
	//printarray(size,a);
	inserts_sort(size,a);
	printf("\n");
	//printarray(size,a);
	return 0;
}

