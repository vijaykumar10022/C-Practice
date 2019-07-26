#include <stdio.h>

int main(int argc, char **argv)
{
	int x=3,y=3;
	while(--x,y--){
		--x;
		
	}
	printf("%d,%d",x,y);
	return 0;
}

