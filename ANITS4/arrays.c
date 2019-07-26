#include<stdio.h>
void read_array(int a[],int s){
		for(int i=0;i<=s-1;i++){
		scanf("%d",&a[i]);
	}
}
void display_array(int w[],int z){
	for(int i=0;i<=z-1;i++){
		printf("%d ",w[i]);
	}
}

void minimum_array(int a[],int s){
		int min=a[0];
		for(int i=0;i<=s-1;i++){
			if(a[i]<min){
				min=a[i];
			}
	
		}
		printf("\nMinimum value is:%d",min);
}
void maximu_array(int a[],int s){
		int max=a[0];
		for(int i=0;i<=s-1;i++){
			if(a[i]>max){
				max=a[i];
			}
	
		}
		printf("\nMaximum value is:%d",max);
}
int main(){
	for(int i=0;i<2;i++){
	int size;
	scanf("%d",&size);//5
	int array[size];//20bytes
	printf("Enter Array Values to store in array");
	read_array(array,size);
	printf("Array Values are:");
	display_array(array,size);
	minimum_array(array,size);
	maximu_array(array,size);
	
}
return 0;	
}
