#include <stdio.h>

int main(int argc, char **argv)
{
	int x,y,z;
	x=0;y=1;
	z=x&&++y;
	printf("%d%d%d",x,y,z);
	
	return 0;
}

//~ x=0000
//~ y=0001
//~ it cont go ++y=0010
//~ 0000
//~ 0010
//~ ----
//~ 0000
//~ x=0,y=1,z=0
