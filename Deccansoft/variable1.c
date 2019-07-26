#include<stdio.h>
void foo();
int main(){
	
	
	
	foo();
	
	}
	int g1=100;
void foo(){
	extern int g1;
	printf("%d",g1);
	}
	
	
	
