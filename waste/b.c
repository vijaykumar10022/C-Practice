#include<stdio.h>
int sumArray(int [] ,int);
int main(){
	int list[4] = {1,2,3,4};
	printf("Sum = %d\n ",sumArray(list,4));
	printf("%d %d %d ”, list, &list[0], *list);
	return 0;
}
int sumArray(int list[],int arraySize)
{	
	int sumvalue = 0;
	for (int i =0;i<arraySize;i++)
		sumvalue +=list[i];
		return sumvalue;
}
