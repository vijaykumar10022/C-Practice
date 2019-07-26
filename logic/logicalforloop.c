#include <stdio.h>
int main()
{
	int a,b;
	for(a=b=10;a;printf("\n%d %d\n",a,b)){
		a= b++<=12;
	}
	return 0;
}
