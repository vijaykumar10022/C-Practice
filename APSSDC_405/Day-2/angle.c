//~ 10).Input
//~ Enter first angle: 60
//~ Enter second angle: 80
//~ Output:
//~ Third angle = 40
#include<stdio.h>
int main(){

	int a,b;
	printf("Enter First angle:");
	scanf("%d",&a);
	printf("Enter Second angle:");
	scanf("%d",&b);
	printf("hird angle = %d\n",180-(a+b));
	return 0;
}
