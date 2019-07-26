#include<stdio.h>
void add(int a,int b){
	printf("%d\n",a+b);//5
}
int main(){
	a=2;
	b=3;
	add(a--,b++);//add(2,3)
	//a=1,b=4
	a--;/a=0
	printf("%d",a+b);//4
	return 0;
}
