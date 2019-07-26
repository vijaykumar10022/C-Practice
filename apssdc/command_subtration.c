#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	int a,b;
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	printf("Subtration of %d and %d is %d\n",a,b,a-b);
	printf("Count is %d",argc);
	
	return 0;
}

