#include<stdio.h>
int main(){
	int a,b;
	printf("Enter a value\n");
	scanf("%d",&a);
	printf("Enter b value \n");
	scanf("%d",&b);
	int c=~a;	
	printf("%d",c);
	int d=~b;	
	printf("%d",d);
	return 0;
}
