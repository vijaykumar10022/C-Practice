//~ To perform artheamatic operations 
#include <stdio.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	printf("the sum of %d and %d is : %d\n",n,m,n+m);
	printf("the difference of %d and %d is : %d\n",n,m,n-m);
	printf("the mul of %d and %d is : %d\n",n,m,n*m);
	printf("the Div of %d and %d is : %f\n",n,m,(float)n/m);
	printf("the modular division of %d and %d is : %d\n",n,m,n%m);
	return 0;
}
