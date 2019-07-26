#include<stdio.h>
int main(){
		int n;
		n=10;
		int* pn;
		pn =&n;
	    //float f=9.0;
		//float* pf;
		//pf = &f;
		//f=10.6f;
		*pn = *pn * *pn;
		n = n * n;
		printf("%d \n",n);
		printf("%d \n",*pn);
			 printf("Value : %d \n ",n);
			 printf("Addressd: %d \n",&n);
			 printf("Value: %d \n",*(&n));
			 printf("Address : %p \n",pn);
			 printf("Value : %d",*pn);
				
	return 0;
}
