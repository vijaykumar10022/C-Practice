#include<stdio.h>
int main(){
	int n,l,fd;
	scanf("%d",&n);
	int k=n;
	while(n!=0){
		fd=n%10;
		n=n/10;
	}
	int ld=k%10;
	printf("First =%d",fd);
	printf("Last =%d",ld);
	return 0;
}
