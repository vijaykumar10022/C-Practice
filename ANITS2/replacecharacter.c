#include<stdio.h>
int main()
{
	char s[20],o,n;
	gets(s);
	scanf("%c",&o);
	getchar();
	scanf("%c",&n);
	int i=0;
	while(s[i]!='\0')
	{
		if(s[i]==o)
		{
			s[i]=n;
		}
		i++;
	}
	puts(s);
	return 0;
}
