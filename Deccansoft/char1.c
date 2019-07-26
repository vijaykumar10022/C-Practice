#include <stdio.h>
#include<string.h>

int main(int argc, char **argv)
{
	char c[10];
	c[0]='v';
	c[1]='i';
	c[2]='j';
	c[3]='a';
	c[4]='y';
	printf("%s \n",c);
	int len=strlen(c);
	printf("Length = %d\n",len);
	
	return 0;
}

