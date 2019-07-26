#include<stdio.h>
int main(){
	int n,temp=0;
	scanf("%d",&n);
	long long int fibo[n];
	fibo[0] = 0, 
	fibo[1] = 1;
	if(fibo[n]==0){
		printf("%lld",temp);
	}
	else if(fibo[n]==1){
		printf("%d",temp+1);
	}
	else {
		long long int sum=fibo[0]+fibo[1];
		for (int i=2; i<=n; i++)
		{
			fibo[i] = fibo[i-1]+fibo[i-2];
			sum =sum+fibo[i];
		}
		printf("%lld",sum%10);
	}
	
}
