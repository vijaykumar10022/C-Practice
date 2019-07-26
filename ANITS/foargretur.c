//-->funtion with out argument and with return vaue
#include<stdio.h>
int sum_of(){
	int n,l,sum=0;
	scanf("%d",&n); //n=123
	while(n!=0)
	{
		l=n%10;
		sum=sum+l;
		n=n/10;
	}
	return sum;
}
int main(){
	printf("Sum of Digits =%d",sum_of());
return 0;
}
