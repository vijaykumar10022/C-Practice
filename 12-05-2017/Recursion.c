#include<stdio.h>
void fun(int n){
	
	printf("%d\n",n);
	if(n == 0)
	return;
	else
	fun(n-1);
	
	
}
int main(){
	
fun(10);	
}
