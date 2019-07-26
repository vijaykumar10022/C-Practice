#include <stdio.h>

int main(int argc, char **argv)
{
	int number=3;
	switch(number){
			case 1:
			      printf("one\n");
			case 2:
			      printf("two\n");
		    case 3:
			      printf("three\n");
			default:
					 printf("default\n");
		}
	
	return 0;
}

