#include<stdio.h>
#include<stdlib.h>
void read(int *array,int *size){
	int i;
	for(i=0;i<=*size;i++){
		scanf("%d",array);
		array++;
	}
}
void print(int *array,int *s){
	for(int i=0;i<*s;i++){
		printf("%d ",*(array+i));
	}
}
int main(int a,char *b[]){
	int size=atoi(b[1]);
	int array[size];
	int *ptr=&array[0];//int *ptr=array
	read(ptr,&size);
	print(ptr,&size);
	return 0;
}
