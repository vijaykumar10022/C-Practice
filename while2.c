#include<stdio.h>
int main(){
	int i,n;
	printf("Enter a Range to print the values");
	scanf("%d",&n);
	i=1;
	while(i<=n){
		printf("value : %d\n",i);
		i++;
	}
	return 0;
}
