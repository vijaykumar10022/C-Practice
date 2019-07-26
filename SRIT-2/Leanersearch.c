
//Leaner Search
/*-->size
-->array declaration
-->insert elements in to array
-->Read search element
-->compare search element in array
-->print desired output like location /found or not*/
#include<stdio.h>
int main(){
	int size;
	printf("Enter Size");
	scanf("%d",&size);//5
	int arr[size];//arr[5]
	int i;
	for(i=0;i<=size-1;i++){
		scanf("%d",&arr[i]);//7 8 1 9 6
	}
	  //7 8 1 9 6
	  //0 1 2 3 4-->index location
	  //1 2 3 4 5-->element location
	int search,temp=0;
	printf("Enter Your Serching element:");
	scanf("%d",&search);
	for(i=0;i<=size-1;i++){
		if(search==arr[i]){
			temp++;
			//printf("%d is found  at location %d",search,i+1);
			break;
		}
	}
	if(temp>0){
		printf("%d is found  at location %d",search,i+1);
	}
	else{
		printf("%d is not found ",search);
	}
	return 0;
}
