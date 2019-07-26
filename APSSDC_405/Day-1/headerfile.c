//~ Userdefined headerfile creation
//~ System defined header file
//~ User defined header file
//~ Ex: #include "sample.h"
 
#include <stdio.h>
#include "first.h"


int main()
{
	int a;
	extern int b;
	scanf("%d",&a);
	printf("The value of a is: %d and b is:%d",a,b);
	return 12;
}

