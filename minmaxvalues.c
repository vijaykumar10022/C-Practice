#include<stdio.h>
int main(){
	long int a,min,max;
	long long int sum;
	//scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
	scanf("%ld",&a);
	sum=min=max=a;
	for(int i=1;i<5;i++){
		scanf("%ld",&a);
		sum+=a;
		if(min>a) min=a;
		if(max<a) max=a;
	}
	printf("%lld %lld",sum-max,sum-min);
	return 0;
}

