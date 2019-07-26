#include<stdio.h>
int main(){
	int n,n2,n3;
	printf("Enter a number");
	scanf("%d",&n1);
	scanf("%d",&n2);
	scanf("%d",&n3);
	// 80	  20    60
	if(n1>n2)
	{
		if(n1>n3)
			printf(" %d is grater ",n);
		else
			printf("%d is grater ",n3);
	}
	else
	{
		if(n2>n3)
			printf("%d is greater ",n2);
		else 
			printf("%d is greater",n3);
	}
	
	return 0;
}

// n1  n2    n3
	
