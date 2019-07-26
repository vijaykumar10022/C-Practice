//~ 0 1 2 3 4 5 6 7  8   9   10 
//~ 0 1 1 2 3 5 8 13 21  34  55
#include<stdio.h>
int fib(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	return fib(n-1)+fib(n-2);
}
int main(){
	int n;
	scanf("%d",&n);
	printf("Fibnacci Series:");
	for(int i=0;i<=n-1;i++){
		printf("%d ",fib(i));
	}
	return 0;
}
