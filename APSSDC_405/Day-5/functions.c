//~to perform all arithmetic operations by using functions
//~ 1. with return type and with arguments
//~ 2. with return type and without arguments
//~ 3. without return type and with arguments
//~ 4. without return type and without arguments
#include<stdio.h>
int sum(int e,int f)
{
	return e+f;
}

int main()
{
	int n,m,d;
	scanf("%d%d",&n,&m);
	d=sum(n,m);
	printf("sum of %d and %d is:%d\n",n,m,sum(n,m));
	printf("sum of %d and %d is:%d",n,m,d);
	
	
	return 0;
}
