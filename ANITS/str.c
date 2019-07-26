#include<stdio.h>
int main()
{
	char s[50];
	gets(s);
	int i=0;
	while(s[i]!='\0')
	{
		if(s[i]>='a'&& s[i]<='z')
		{
			s[i]=s[i]-32;
		}
		else if(s[i]>='A'&& s[i]<='Z')
		{
			s[i]=s[i]+32;
		}
		i++;
	}
	puts(s);
	return 0;
}



Input:

madam

output:
given string is palindrome


hello

given string is not a palindrome





