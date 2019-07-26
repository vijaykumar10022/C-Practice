#include<stdio.h>
int main()
{
	int w=0;
	char s[100];
	gets(s);
	int i=0;
	while(s[i]!='\0')
	{
		if(s[i]==' '||s[i]=='\n')
		w++;
		i++;
	}
	printf("%d",w+1);
	return 0;
}
