#include <stdio.h>

int main(int argc, char **argv)
{
	int x=1;
	switch(x)
	{
		x=x+1;
		case 1:printf("one");break;
		case 2:printf("two");break;
		default :printf("three");
	}
	return 0;
}

