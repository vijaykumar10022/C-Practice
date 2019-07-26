#include<stdio.h>
#include<string.h>
int main()
{
	char s[50],d[50];
	gets(s);
	strcpy(d,s);
	strrev(d);
	if(strcmp(s,d)==0)
	printf("palindrome");
	else
	printf("not a palindrome");
	return 0;
}
