#include <stdio.h>
int main()
{
	int a,b;
	for(a=b=10;a;printf("\n%d %d\n",a,b)){
		printf("b value is %d \n",b);
		printf("be fore cond a value is %d \n",a);
		a=b++ <=12;
		printf("a value is %d \n",a);
	}
	printf("\n%d %d",a+10,b+10);
	return 0;
}

//a=b=10 ; a=10
	//~ a=(b++<=12)-->a=1
	//~ pf(1,11)
	
