#include<stdio.h>
int main()
{
	char s;
	scanf("%c",&s);
	if((s>='a' && s<='z')||(s>='A' && s<='Z'))
	printf("It is a alphabet");
	else if(s>='0' &&s<='9')
	printf("Number");
	else
	printf("special character");
	return 0;
}




Input:+
Learn at aPSSDC.
Output:
lEARN AT Apssdc.






