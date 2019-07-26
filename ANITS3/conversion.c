//convert dollars to rupess and rupess to dollars
#include<stdio.h>
int main()
{
	int d,r;
	printf("Enter number of dollars to convert into rupees:");
	scanf("%d",&d);
	printf("%drs\n",d*73);
	printf("Enter rupess to convert into dollars:");
	scanf("%d",&r);
	printf("%d$\n",r/73);
	return 0;
}
	
