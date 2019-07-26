#include<stdio.h>
void swap(int x,int z){
	//~ int temp=x;-
		   //~ x=z;
		   //~ z=temp;
		   //~ x=x+z;
		   //~ z=x-z;
		   //~ x=x-z;
		   x=x^z;
		   z=x^z;
		   x=x^z;
	printf("After swapping a = %d,b = %d",x,z);
}
int main(){
	int a=10;
	int b=20;
	printf("Before Swapping a = %d and b = %d\n",a,b);
	swap(a,b);//10 20
	return 0;
}
