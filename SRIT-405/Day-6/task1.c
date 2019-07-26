#include<stdio.h>
int sum_squre(int n){
	int sum=0;
		for(int i=1;i<=n;i++){
			sum=sum+(i*i);
		}
	return sum;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",sum_squre(n));
	return 0;
}
