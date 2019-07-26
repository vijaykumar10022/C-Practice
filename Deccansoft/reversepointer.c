#include<stdio.h>
void foo(int *pn,int *pr);
int main(){
	int num,rev=0;
	int *pn,*pr;
	 pn=&num;
	 pr=&rev;
	 
	
	printf(" Enter The Number :");
	scanf("%d",&num);
	foo(pn,pr); 
}


void foo(int *pn,int *pr){
	int rem;
	do
	{
		rem=(*pn)%10;
		*pr=(*pr * 10)+rem;
		*pn=(*pn)/10;
	}
	while(*pn>0);	
	printf("\n Reverse of Number is : %d",*pr);
	
}
