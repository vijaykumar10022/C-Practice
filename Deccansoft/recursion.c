#include<stdio.h>
void foo(int n){
	printf("%d\n",n);	
	if(n == 0)
	return;
	else
	foo(--n);
	}
int main(){
	
	foo( 0);
	
}
