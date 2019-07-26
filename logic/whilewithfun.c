#include <stdio.h>
#include <conio.h>
int main(int argc, char **argv)
{
	while(!kbhit())
		printf("You haven't pressed a ke\n");
	return 0;
}

