#include<stdio.h>
void foo(int n,int s){
	printf("n=%d\ts=%d\n",n++,s++);
	}
int main()
{
	int n=5,s=6;
	foo(++n,s++);
	printf("n=%d\ts=%d\n",n,s);
	return 0;
}
