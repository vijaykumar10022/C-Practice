#include<stdio.h>
int main()
{
	char s[20];
	gets(s);
	int i=0,l=0;
	while(s[i]!='\0')
	{
		l++;
		i++;
	}
	printf("%d",l);
	return 0;
}
