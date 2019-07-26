#include <stdio.h>
int main()
{
	int a,b;
	for(a=b=10;a;printf("\n%d %d",a,b))
	a=b++<=12;
	printf("\n%d %d",a+10,b+10);
	return 0;
}
