//sum of digits
#include<stdio.h>
int main(){
	int n,sum=0,l,count=0;
	scanf("%d",&n);
	while(n!=0){//n=4567,n=456,n =45,4
		l=n%10;//l==7,6,5,4
		count++;
		sum=sum+l;//sum=0+7-->7-->7+6->13+5->18+4->22
		n=n/10;//456,45,4,0
	}
	printf("Sum of digit for given number is %d",sum);
	printf("\nDigit count is %d\n",count);
return 0;	
}
