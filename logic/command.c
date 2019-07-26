#include <stdio.h>
void fun(int i)
{
	if(i<4)
		main(++i);
}
int main(int argc)
{
	printf("%d\n",argc);
	fun(argc);
	
	return 0;
}

