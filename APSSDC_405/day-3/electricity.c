//~ to calculate electricity bill
i/p:150
o/p:120

// 50..50*0.5=25 + 75=100  20%=20  100+20=120
#include<stdio.h>
int main()
{
	int unit;
	float amount, totalamount, surcharge;
	printf("enter total units consumed");
	scanf("%d", &unit);
	if(unit<=50)
	{
		amount=unit*0.50;
	}
	else if(unit<=150)
	{
		amount=25+((unit-50)*0.75);
	}
	else if(unit<=250)
	{
		amount=100+((unit-150)*1.20);
	}
	else
	{
		amount=220+((unit-250)*1.50);
	} 
	surcharge=amount*0.20;
	totalamount=amount+surcharge;
	printf("electrycity bill is %f", totalamount);
	return 0;
}
