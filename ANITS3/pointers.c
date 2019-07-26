//~ pointers:
//~ --------
//~ a=20
//~ *p=&a;
//~ print("%d",&p);
#include<stdio.h>
int main(){
	int a=10;
	int *p=&a;
	printf("Address of a is %p and value is %d\n",&a,a);
	printf("Address of p is %p and value is %d\n",&p,*p);
	*p=20;
	printf("Address of a is %p and value is %d\n",&a,a);
return 0;	
}



