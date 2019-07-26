//~to covert cm to m and km
#include<stdio.h>
int main()
{
	float cm;
	printf("enter a number in cm");
	scanf("%f",&cm);
	printf("Given cm is %.2f and converted to meters is:%.2f\n",cm,(cm/100));
	printf(" Given cm is %.2f and converted to kilometers is :%.3f\n",cm,(cm/100000));
	return 0;
}
