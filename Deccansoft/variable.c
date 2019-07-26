#include<stdio.h>
void foo(int a,int *pA);
int main(){
	
	int n=10,m=10;
	foo(n,&m);
	printf("%d %d",n,m);
}
void foo(int a,int *pA){
	a++;
	(*pA)++;
}
