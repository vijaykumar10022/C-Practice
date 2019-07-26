#include<stdio.h>
void readarray(int a[],int n){
	printf("Please enter array %d values:",n);
	for(int i=0;i<=n-1;i++){
		scanf("%d",&a[i]);
	}
}
void reversearray(int arr[],int s){
	printf("Array elements are");
	for(int i=s-1;i>=0;i--){
		printf("%d,",arr[i]);
		}
}
void displayarray(int arr[],int s){
for(int i=0;i<s;i++)
	{
		printf("%d\t",arr[i]);
	}
}
//~ void sumofarray(int ar[],int s){
	//~ int sum=0;
	//~ for(int i=0;i<=s-1;i++){
		//~ sum=sum+ar[i];
	//~ }
	//~ printf("sum of array elements is %d",sum);
//}
//~ void esumarray(int arra[],int s){
	//~ printf("Sum of even numbers in given array\n");
	//~ int esum=0;
	//~ for(int i=0;i<=s-1;i++){
		//~ if(arra[i]%2==0){
		//~ esum=esum+arra[i];
	//~ }
	//~ }
	//~ printf("sum of array elements is %d",esum);
//~ }
int main(int argc, char **argv)
{
	//int a[10]={1,2,3,4,5,6,7,8,9,10};
	int size;
	printf("Enter your array size:");
	scanf("%d",&size);
	int array[size];
	readarray(array,size);
	reversearray(array,size);
	printf("\n");
	int i=0;
	int j=size-1;
	int temp;
	while(i<j)
	{
		temp=array[i];
		array[i]=array[j];
		array[j]=temp;
		j--;
		i++;
	}
	
	displayarray(array,size);
	printf("\n");
	int max=array[0];
		for(i=1;i<size;i++)
		{
			if(array[i]>max)
			{
				max=array[i];
			}
		}
		printf("max element is:%d",max);
	printf("\n");
	
	//~ printf("\n");
	//~ sumofarray(array,size);
	//~ printf("\n");
	//~ esumarray(array,size);
	return 0;
}

