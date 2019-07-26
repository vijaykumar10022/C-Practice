#include <stdio.h>

int main()
{
	int x=5,y=0,a,b;
	a=++y||++x;//1||6
				//~ 0001
				//~ 0110
				//~ ----
				//~ 0111-->1
	 b=--y&&++x;//0&&7-->0
	//printf("%d,%d,%d,%d\n",x,y,a,b);
		//5,0,1,0
	return 0;
}

