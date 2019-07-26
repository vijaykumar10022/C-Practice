//to read & print data of an array(static way)
#include<stdio.h>
int main()
{
	int size,i;
	printf("Enter Array Size : ");
	scanf("%d",&size);
	int array[size];
	for(i=0;i<size;i++)
		scanf("%d",&array[i]);
	for(i=0;i<size;i++)
		printf("%d,",array[i]);
	return 0;
}
