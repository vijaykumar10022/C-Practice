//to know about strings
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int len=0,i=0;
	gets(str);
	while(str[i]!='\0')
	{
		len=len+1;
		i=i+1;
	}
	printf("Length Of string is : %d\n",len);
	puts(strlwr(str));
	return 0;
}
