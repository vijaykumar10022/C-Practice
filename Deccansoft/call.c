#include<stdio.h>
void foo(int n,int *m );
void swap(int n,int m);
void swappointer(int *pn,int *pm);
int main()
{
	int n=1;
	int m=2;
	//foo(n,&m);	
	//swap(n,m);
	
	printf("Before Swapping : %d \t %d\n",n,m);
	swappointer(&n,&m);
	return 0;
}
void foo(int n,int *m ){
	
	
	n++;
	(*m)++;
	
	
}
void swap(int n,int m){
	
	int temp;
	temp = n;
	n = m;
	m = temp;
	printf("in function : %d \t %d \n",n,m);
	
	
	
	}
void swappointer(int *pn,int *pm){
	
	int temp;
	temp = *pn;
	*pn = *pm;
	*pm = temp;
	
	printf("After Swapping : %d %d \n",*pn,*pm);
	
	}
