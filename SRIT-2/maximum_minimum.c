//to find maximum and minimum elements in the array
//funtion with arg and with  return value
#include<stdio.h>
void readArray(int size,int b[]);
int maxarray(int size,int b[]);
int minarray(int size,int b[]);
int main(){
	int size;
	printf("Enter Size of an array:");
	scanf("%d",&size);
	int b[size];
	readArray(size,b);//calling
	//int max=maxarray(size,b);
	printf("Maximum = %d",maxarray(size,b));
	//int min=minarray(size,b);
	printf("\nMinimum = %d",minarray(size,b));
	return 0;
}
void readArray(int size,int b[])//Defination
{
	int i;
	for(i=0;i<=size-1;i++){
		scanf("%d",&b[i]);
	}
}
int maxarray(int size,int b[]){
		int i,max=b[0];
		for(i=1;i<=size-1;i++){
			if(b[i]>max){
				max=b[i];
			}
		}
	return max;
}
int minarray(int size,int b[]){
		int i,min=b[0];
		for(i=1;i<=size-1;i++){
			if(b[i]<min){
				min=b[i];
			}
		}
		return min;
}
