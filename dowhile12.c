#include<stdio.h>
int main(){
	int i,n;
	printf("Enter a Range to print the values");
	scanf("%d",&n);
	i=1;
	do{
		printf("value : %d\n",i);
		i++;
	}while(i<=n);
	return 0;
}
