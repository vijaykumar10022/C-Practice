#include <stdio.h>

int main(int argc, char **argv)
{
		int i=0,j=1;
		printf("%d",i++&&++j);
		printf("%d%d",i,j);
	return 0;
}
//~ 0000
//~ 0010
//~ ----
//~ 0000
