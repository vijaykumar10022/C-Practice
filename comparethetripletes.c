#include<stdio.h>
int main(){
	int a0,a1,a2;
	scanf("%d %d %d",&a0,&a1,&a2);
	int b0,b1,b2;
	scanf("%d %d %d",&b0,&b1,&b2);
	int as=0,bs=0;
	if(a0>b0) as++;
	if(a0<b0) bs++;
	if(a1>b1) as++;
	if(a1<b1) bs++;
	if(a2>b2) as++;
	if(a2<b2) bs++;
	printf("%d %d",as,bs);
	return 0;
	
}
