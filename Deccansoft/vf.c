#include<stdio.h>
void foo();
int main(){

	foo();
	foo();
	foo();
	
}
void foo(){
	
	auto int l1=0;
	l1++;
	printf("Automatic : %d\n",l1);
	static int a2=0;
	a2++;
	printf("Static : %d\n",a2);
	//register int r1;	
	printf("\n");
}
