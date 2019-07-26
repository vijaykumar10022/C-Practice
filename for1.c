#include<stdio.h>
int main(){
	int i,n;
	printf("Enter a Range to print the values");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("value : %d\n",i);
	}
	return 0;
}
