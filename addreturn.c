#include<stdio.h>
int sum(int a, int b){
	int sum=a+b;
	return sum;
}
int main(){
	int a,b,c;
	printf("Enter first valu:");
	scanf("%d",&a);
	printf("Enter second valu:");
	scanf("%d",&b);
	c=sum(a,b);
	printf("Sum of %d and %d = %d\n",a,b,c);
	return 0;
}
