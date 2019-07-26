//~ #include <stdio.h>
//~ 
//~ int main()
//~ {
	//~ int a=6734;
	//~ printf("value of \"a\" using %%d is= %d\n",a);
	//~ printf("value of \"a\" using %%i is= %i\n",a);
	//~ 
	//~ return 0;
//~ }
#include <stdio.h>

int main()
{
	int a=0;
	int b=0;
	
	printf("Enter value of a: ");
	scanf("%d",&a);

	printf("Enter value of b: ");
	scanf("%i",&b);	
	
	printf("a=%d, b=%i\n",a,b);
	
	return 0;
}
