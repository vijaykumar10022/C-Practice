//pointer Using funtion
#include<stdio.h>
void swap(int *p,int *p2){
	int t;
	t=*p;
	*p=*p2;
	*p2=t;
}
int main(){
	int a=20,b=30;
	printf("Before Swaping %d and %d ",a,b);
	swap(&a,&b);
	printf("\nafter Swaping %d and %d ",a,b);
return 0;	
}
