//To fing Area of Traingle
#include<stdio.h>
int main(){
	int p,t;
	float r;
	printf("Enter principle,time and rate");
	scanf("%d%d%f",&p,&t,&r);
	printf("simple interst=%.1f",(p*t*r)/100);
	return 0;
}
