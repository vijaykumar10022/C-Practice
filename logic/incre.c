#include <stdio.h>
int main(int argc, char **argv)
{
	int a=5;
	a=++a+++a;
	printf("a :%d\n",a);
	return 0;
}

