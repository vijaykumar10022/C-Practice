#include<stdio.h>
int main()
{
	char s[50];
	gets(s);
	int n=1,i;
	for(i=1;i<=50;i++)
	{
		if(s[i]==' ')
		{
			n++;
		}
	}
	printf("%d",n);
}
	
