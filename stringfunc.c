#include <stdio.h>

int main(int argc, char **argv)
{
	char s[100];
	printf("Eneter Expression:  ");
	gets(s);
	if(AreParanthesesBalanced(s))
			printf("Balanced\n");
	else
		printf("Not Balanced\n");
	return 0;
}

