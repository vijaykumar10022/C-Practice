#include <stdio.h>

int main(int argc, char **argv)
{
	int i=10;
	int *pn;
	pn=&i;
	*pn=*pn**pn;
	//n=n*n; 
	n=1000;
	printf("%d\n",n);
	printf("%d\n",*pn);
	
	float f;
	float* pf;
	pf=&f;
	f=10.20f;
	
	printf("Valu :%d\n",i);
	printf("Address :%d\n",&i);
	printf("Address :%d\n",pn);
	printf("Value :%d\n",*(&i));
	printf("Value :%d\n",*pn);
	printf("address :%d\n",pf);
	
	return 0;
}

