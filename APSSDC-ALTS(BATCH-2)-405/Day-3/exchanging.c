#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two integers a,b\n:");
	scanf("%d%d",&a,&b);//10 20
	a=a+b;//-->a=10+20=30
	b=a-b;//b=30-20-->10
	a=a-b;//a=30-10-->20
	printf("a=%d\n b=%d\n",a,b);
	
	return 0;
	}
