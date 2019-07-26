//Funtions with arg,with out return value
//input:main()      output : subfuntion
#include<stdio.h>
void readArray(int a[],int s){
		int i;
		for(i=0;i<=s-1;i++){
			scanf("%d",&a[i]);
		}
}
void leanearsearch(int a[],int s,int se){
		int i,temp=0;
		for(i=0;i<=s-1;i++){
			if(se==a[i]){
				temp++;
				break;
			}
		}
		if(temp>0){
		
			printf("%d is found at location %d\n",se,i+1);
		}
		else{
			printf("Not Found\n");
		}
}
int main(){
	int size,times;
	printf("Enter Size:");
	scanf("%d",&size);
	int arr[size];
	readArray(arr,size);
	printf("Enter value to search different values:");
	scanf("%d",&times);
	for(int i=0;i<=times-1;i++){
	int search;
		printf("Enter Searching value %d :",i+1);
		scanf("%d",&search);
		leanearsearch(arr,size,search);
	}
	return 0;
}
