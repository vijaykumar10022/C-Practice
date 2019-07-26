//~ 7).Input:
//~ Enter principle: 1200
//~ Enter time: 2
//~ Enter rate: 5.4
//~ Output:
//~ Simple Interest = 129.600006
#include<stdio.h>
int main()
{
	float principle,time;
	float rate,simpleinterest;
	printf("enter principle:\n");
	scanf("%f",&principle);
	printf("enter time:\n");
	scanf("%f",&time);
	printf("enter rate:\n");
	scanf("%f",&rate);
	simpleinterest=(principle*time*rate)/100;
	printf("simpleinterest is %f",simpleinterest);
    return 0;	
}
