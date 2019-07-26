#include<stdio.h>
int main()
{
	char s[5];
	//gets(s);
	fgets(s,sizeof(s),stdin);
	puts(s);
	return 0;
}








