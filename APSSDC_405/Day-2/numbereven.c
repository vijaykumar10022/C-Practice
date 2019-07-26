//~Given number is even or not
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);//11
	printf("Given number is :%d\n",n);
	if(n%2==0)//(111%2==0)F
	{
		printf("%d number is even\n",n);
	}
	else 
	{
		printf("%d number is odd\n",n);
	}	
	return 0;
}
