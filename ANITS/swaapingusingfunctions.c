#include<stdio.h>
#include<stdlib.h>
void swap(int *p1,int *p2){
	printf("Before Swaping *p1=%d and *p2=%d\n",*p1,*p2);
	int t;
	t=*p1;
	*p1=*p2;
	*p2=t;
	printf("After Swaping *p1=%d and*p2=%d",*p1,*p2);
}
int main(int a, char *b[]){
	int f=atoi(b[1]);
	int s=atoi(b[2]);
	swap(&f,&s);
return 0;
}
