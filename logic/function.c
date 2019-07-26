#include <stdio.h>
void fun(int x){
	printf("x val:%d\n",x++);//2
	printf("%d",x);//3
}
int main()
{
	int x=2;
	fun(x++);//2
	printf("%d",x++);//3
	printf("%d",x);//4
	return 0;
}

