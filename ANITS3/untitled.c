

#include <stdio.h>

int main(int argc, char **argv)
{
	int a=20,b=30;
	if(((a<b)&&(40>b))&&((30==b)&&(a==20))&&((20==20)&&(30==30))){
		printf("True");
	}
	else
	printf("False");
	return 0;
}

