#include <stdio.h>

int main(int argc, char **argv)
{
	int a=10;
	int b;
	b=(a==10)?20:30;
	printf("value of b is %d\n",b);
	b=(a==40)?20:30;
	printf("value of b is %d\n",b);
	return 0;
}

