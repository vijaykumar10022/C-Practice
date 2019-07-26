//strongnumber:145=1!+4!+5!=1+24+120=145
//5!=5*4*3*2*1
#include<stdio.h>
int main()
{
	int n,fact=1,i=1,l,sum=0,temp;
	printf("Enter a number:");
	scanf("%d",&n);
	temp=n;
	while(n>0)//145>0 14>0 1>0 0>0..f
	{
		l=n%10;
		fact=1;
		for(i=l;i>=1;i--)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		n=n/10;
	}
	if(temp==sum)
	{
		printf("Given number %d is strongnumber",temp);
	}
	else
	{
		printf("Given number %d is notstrongnumber",temp);
	}
	return 0;
}
