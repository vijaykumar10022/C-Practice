#include <stdio.h>

int main(int argc, char **argv)
{
	char *collegename,*district,*collegecode,*affiliated;
	collegename=argv[1];
	district=argv[2];
	collegecode=argv[3];
	affiliated=argv[4];
	printf("College is \n %s \n It is in District %s \n Eamcet code
	of the college is  %s \n and it is affiliated to %s \n",collegename,district,collegecode,affiliated);
	
		return 0;
}

