#include<stdio.h>
int readvalues(int arr[],int a){
	
	for(int i=0;i<=a;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	return 0;
}
int display(int arr[],int a){
	
	for(int i=0;i<=a;i++)
	{
		printf("%d\t",&arr[i]);
	}
	
return 0;
}
int serchelemet(int arr[],int a,int s){
	
	for(int i=0;i<=a;i++)
	{
		if(arr[i]=s){
			printf("positon %d and value=%d\t",i,arr[i]);
	}
	return 0;
}
int main(){
	printf("Enter Array element to store\n");
	int a;
	printf("Enter Size of array\n");
	scanf("%d",&a);
	int arr[a];
	readvalues(arr,a);
	printf("Display array elemetns\n");
	display(arr,a);
	printf("Enter serch element\n");
	int s;
	scanf("%d",&s);
	serchelemet(arr,a,s);
return 0;
}
