//Funtion by using arrays
//funtion with arguments and with out return value
#include<stdio.h>
void readArray(int size,int b[]);//declaration
void printArray(int size,int b[]);
int main(){
	int size;
	printf("Enter Size:");
	scanf("%d",&size);
	int b[size];
	readArray(size,b);//calling
	printArray(size,b);
	return 0;
}
void readArray(int size,int b[])//Defination
{
	int i;
	for(i=0;i<=size-1;i++){
		scanf("%d",&b[i]);
	}
}
void printArray(int size,int b[])//Defination
{
	int i;
	for(i=0;i<=size-1;i++){
		printf("%d ",b[i]);
	}
}
