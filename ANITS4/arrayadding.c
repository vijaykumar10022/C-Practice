/*array1={1,2,3,4,5};
arrar2={5,7,8,9,10};
array3={1,2,3,4,5,5,7,8,9,10};*/
#include<stdio.h>
void read_array(int a[],int s){
		int i;
		for(i=0;i<=s-1;i++){
			scanf("%d",&a[i]);
		}
}
void display(int a[],int s){
		int i;
		for(i=0;i<=s-1;i++){
			printf("%d ",a[i]);
		}
}
void storing_array(int a1[],int a2[],int a3[],int s){
	int i,t=0;
	for(i=0;i<=s-1;i++){
		a3[t]=a1[i];
		t++;
	}
	//a3={12345}t=6a3={1234578942}
	for(i=0;i<=s-1;i++){
		a3[t]=a2[i];
		t++;
	}
}
int main(){
int size;
	scanf("%d",&size);
	int array1[size],array2[size],array3[size*2];
	read_array(array1,size);
	read_array(array2,size);
	printf("Array1-:");
	display(array1,size);
	printf("\n");
	printf("Array2-:");
	display(array2,size);
	storing_array(array1,array2,array3,size);
	printf("\nArray-3:");
	display(array3,size*2);
	
return 0;	
}
