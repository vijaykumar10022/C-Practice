#include<stdio.h>
int main(){
	int a=10;
	int *ptr=&a;
	printf("variable address:%d\n",&a);
	printf("value of a :%d\n",a);
	printf("Address of pointer :%d\n",ptr);
	printf("pointer value :%d\n",*ptr);
	printf("pointer own address:%d\n",&ptr);
	return 0;
}
