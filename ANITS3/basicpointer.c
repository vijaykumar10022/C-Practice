//~ Pointers
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);//20
	int *p=&n;
	*p=10;
	n=5;
	printf("The value of n is:%d\n",n);//
	printf("The Address of n is:%p\n",&n);
	printf("The value of pointer p is:%d\n",*p);//
	printf("The Address of Pointer p of a is:%p\n",p);
	printf("The Address of pointer p is:%p\n",&p);
	printf("The value of n by using pointer is:%d\n",*(&n));//
	return 0;
}
//values -->n=*p=*(&n)
//sourse address(n) -->&n,p
//destination address(p)-->&p
