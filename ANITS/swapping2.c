//with out using 3rd variable
#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("Before swapping a is %d and b is %d\n",a,b);
	a=a+b;    //a=10  b=20   a=30
	b=a-b;    //b=30-20   b=10
	a=a-b;    //a=30-10 a=20
	printf("After swapping a is %d and b is %d",a,b);
	return 0;
}






