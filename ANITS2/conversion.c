#include<stdio.h>
int main()
{
	printf("1.Rupess to Dollars 2.Dollars to rupess");
	int choice,r,d;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("Enter number of rupees:");
				scanf("%d",&r);
				printf("%d",r/70);
				break;
		case 2:printf("Enter number of dollars");
				scanf("%d",&d);
				printf("%d",d*70);
				break;
	}
	return 0;
}
