#include<stdio.h>
int main(){
	int i,n;
	printf("Enter a table ");
	scanf("%d",&n);
	i=1;
	while(i<=10){
		printf("%d * %d = %d\n",n,i,n*i);
		i++;
	}
	return 0;
}
