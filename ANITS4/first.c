//Addition of two numbers
#include<stdio.h>
//#include "add.h"
int main(){
	int a,b,sum;//declaration
	printf("Addrress of a =%p-->size of a%d\n",&a,sizeof(a));
	printf("Addrress of b =%p-->size of b %d\n",&b,sizeof(b));
	printf("Addrress of sum =%p-->size of sum %d\n",&sum,sizeof(sum));
	a=10;//static initialization
	b=20;
	sum=a+b;
	printf("%d",sum);
	return 88;
	}
//~ Format Specifiers:
//~ =================
//~ hexadecimal-->%p
//~ int-->%d or %i
//~ char --->%c 
//~ string -->%s
//~ float --->%f
//~ double -->%lf
//~ long double -->%llf
//~ long int -->%ld or % li
//~ long long int --> %lld or %lli


