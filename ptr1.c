#include <stdio.h>

int main(int argc, char **argv)
{
	int arr[10]={10,20,30,40,50};
	int *ptr=&arr;
	printf("%d",*(ptr+3));
	
	return 0;
}

