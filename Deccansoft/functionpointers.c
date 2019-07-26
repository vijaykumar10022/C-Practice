
#include <stdio.h>
void add(int n,int m)
{
	

	return n+m;
}
void sub(int n,int m)
{
	

	return n-m;
}

int main(int argc, char **argv)
{
	int (*operation) (int ,int )
	printf("Enter the operation (add=0/sub=1): ");
	int input;
	scanf("%d",&input)
	if(input)
	  opration =sub;
	else 
	   operation =add;
	  int res = operation(12,5);
	  printf(" Result : %d ",res);
	  foo(10);
	  (*foo) (10);
	
	
	return 0;
}

