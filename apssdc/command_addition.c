//input:exe 5 10 20 30 40 50
#include <stdio.h>
#include <stdlib.h>
int main(int c, char **v)
{
	int size;
	//size=;
	int a[atoi(v[1])];
	for(int i=0;i<c-2;i++)
	{
		a[i]=atoi(v[i+2]);
	}
	for(int i=0;i<=size-1;i++)
	{
		printf("%d\n",a[i]);
	}
return 0;
}

