#include<stdio.h>
int main()
{
	int size,i,even=0,odd=0;
	scanf("%d",&size);
	int a[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		if(a[i]%2==0)
		even++;
		else
		odd++;
	}
	printf("Even number count=%d\n",even);
	printf("Odd Number Count=%d",odd);
	return 0;
}
	


10 20 30 40 50
0   1  2  3  4

2
25

10 20 25 30 40 50







