//swapping with using 3rd variable
#include<stdio.h>
int main()
{
	int a,b,t;
	scanf("%d%d",&a,&b);
	printf("Before swapping a is %d and b is %d\n",a,b);
	t=a;
	a=b;
	b=t;
	printf("After swapping a is %d and b is %d",a,b);
	return 0;
}
