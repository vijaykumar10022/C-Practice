//pointers with array
#include<stdio.h>
void readarray(int *ptr,int size){
	int i=0;
	for(i=0;i<=size-1;i++){
		scanf("%d",ptr+i);
					//100+0-->10
					//100+4-->20
					//100+8-->30
					//100+12-->40
					//100+16-->50
	}
}
void display(int *ptr,int size){
	int i=0;
	for(i=0;i<=size-1;i++){
		printf("%d\n",*(ptr+i));
	}
}
int main(){
	int n;
	printf("Enter Size of an arrya");
	scanf("%d",&n);
	int arr[n];
	readarray(arr,n);
	display(arr,n);
		return 0;
}
