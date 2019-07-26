#include<stdio.h>
int main(){
	
	int a=5;
	int b=3;
	int *pa=&a;
	int *pb=&b;
	printf("Addition: \n");
	printf("=========\n");
	*pa = *pa + *pb;
	printf("Addition of Two numbers : %d \n",*pa);
	printf("substraction:\n");
	printf("============\n");
	*pb = *pa - *pb;
	printf("substration of Two numbers : %d\n",*pb);
	printf("Multiplication:\n");
	printf("==============\n");
	*pb = *pa * *pb;
	printf("Multiplication of Two numbers : %d \n",*pb);
	printf("Division: \n");
	printf("========\n");
	*pb = *pa / *pb;
	printf("Division of Two numbers : %d \n",*pb);
	
	return 0;
	}
