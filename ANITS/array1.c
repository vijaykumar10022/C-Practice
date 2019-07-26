#include<stdio.h>
int main()
{
	int size,i;
	scanf("%d",&size);
	int a[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		printf(" a[%d]-->Address=%d--->%d\n",i,&a[i],a[i]);
	}
	return 0;
}



Input:
5
1  9  4  8 3

Output:Even Number Count:2
       Odd Number Count:3












