#include<stdio.h>
#include<string.h>
int main()
{
	char s[20],d[20];
	gets(s);
	gets(d);
	int l1=strlen(s);
	int l2=strlen(d);
	int i=0,flag=0;
	if(l1==l2)
	{
		while(s[i]==d[i])
		{
			flag=1;
			i++;
		}
	}
	if(flag==1)
		printf("Equal");
	else
		printf("Not equal");
	return 0;
}
