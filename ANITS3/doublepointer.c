#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int *p2;
	p2=&n;
	int **p1;
	p1=&p2;
	printf("Values of variables of n:\n");
	printf("Value of n:%d\n",n);
	printf("Value of n by single pointer:%d\n",*p2);
	printf("Value of n by using the double pointer:%d\n",**p1);
	printf("Address of variables:\n");
	printf("Address of n:%p\n",&n);
	printf("Address of single pointer:%p\n",&p2);
	printf("addreess of double pointer:%p\n",&p1);
	printf("Values by double pointer:\n");
	printf("Value by double pointer:%d\n",*(p2));
	printf("Address of double pointer:%p\n",*(&p2));
	printf("Address of Double pointer to single:%p\n",p1);
	return 0;
}
