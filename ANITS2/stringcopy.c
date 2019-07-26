#include<stdio.h>
//~ #include<stdlib.h>
int main()
{
	char s[20],d[20];
	gets(s);
	int i=0;
	while(s[i]!=0)
	{
		d[i]=s[i];
		i++;
	}
	d[i]='\0';
	puts(d);
	return 0;
}
