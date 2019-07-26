#include<stdio.h>
int main(){
	long int a,b;
	scanf("%ld%ld",&a,&b);
	while(a%b!=0){
		int t=a%b;
			a=b;
			b=t;
	}
	printf("%ld",(a*b)/b);
	return 0;
}
//printf("%llu",(n1*n2)/gcd);
