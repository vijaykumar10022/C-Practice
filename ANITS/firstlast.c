#include<stdio.h>
int main(){
	long long int n;
	long long int fd;
	scanf("%lld",&n);
	long long int k=n;
	while(n!=0){
		fd=n%10;
		n=n/10;
	}
	long long int ld=k%10;
	printf("First =%lld",fd);
	printf("Last =%lld",ld);
	return 0;
}
