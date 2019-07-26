#include <stdio.h>

int main(int argc, char **argv)
{
	int a=4,b=5;
	b=a+++a--;
	a=++b+ b--;
	printf("%d ,%d",a,b);
	
	return 0;
}

