#include<stdio.h>
int main()
{
	int n,last;
	printf("Enter n value:");
	scanf("%d",&n);//5678
	last=n%10;//5678%10-->8
	printf("Last digit=%d\n",last);//8
	while(n>=10)//5678>=10(T),567>=10(T),56>=10(T),5>=10(F)
	{
		n=n/10;//n=5678/10-->567,567/10-->56,56/10-->5
	}
	printf("First digit=%d",n);//5
	return 0;
}





//0 to 9

//10 to 99

//100 to 999




