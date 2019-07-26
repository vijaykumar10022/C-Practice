//convert days into remainingyears,weeks and days
//input:700 days
//output:one year,47weeks,6days
#include<stdio.h>
int main() 
{
	int days;
	printf("enter no.of days:\n");
	scanf("%d",&days);
	printf("years = %dyears\t",days/365);
	int rdays=days-(days/365)*365;
	printf("weeks=%dweeks\t",rdays/7);
	int rdays2=rdays%7;
	printf("days=%ddays\n",rdays2);
	return 0;
	}
