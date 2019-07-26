#include<stdio.h>
void Increment(int b){
	int a;
	b=a++;
	printf("%d",b);
}

int main(){
	
	int a=10;
	Increment(a);
	a++;
	printf("%d\n",a);
	Increment(a);
	printf("%d\n",a);
	
	}
