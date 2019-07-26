#include<stdio.h>
void demo(int x,int z){// 11 21
		x++;z++;//12 22
		printf("a=%d and b= %d\n",--x,--z);//11 21
}
int main(){
	int a=10,b=20;
	printf("a=%d and b=%d\n",a++,b++);//10 20
	demo(a++,b++);//11 21
	printf("a=%d and b=%d\n",a++,b++);//12 22
	return 0;
}
