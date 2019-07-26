#include<stdio.h>
int main(){
	int n,a;
	scanf("%d",&n);
	long long int sum=0;
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		sum=sum+a;
	}
	printf("%lld",sum);
	return 0;
}
