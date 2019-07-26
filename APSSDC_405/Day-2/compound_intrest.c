//~ 
//~ 8).Input:
//~ Enter principle (amount): 1200
//~ Enter time: 2
//~ Enter rate: 5.4
//~ Output:
//~ Compound Interest = 1333.099243
//~ CI = principle * pow((1 + rate / 100), time).
#include<stdio.h>
#include<math.h>
 int main(){
	float principle,rate,time,CI;
	printf("enter principle(amount:");
	scanf("%f",&principle);
	printf("enter time");
	scanf("%f",&time);
	printf("enter rate");
	scanf("%f",&rate);
	CI=principle*(pow((1+rate/100),time));
	printf("compound intrest=%f",CI);
	return 0;
}
