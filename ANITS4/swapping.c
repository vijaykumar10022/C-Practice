//swapping
//~ input: a=10 b=20
//~ outpur:a=20 b=10
#include <stdio.h>
void swap(int a,int b){//a =10 b=20
		a=a+b;//a=10+20-->a=30
		b=a-b;//b=30-20-->b=10
		a=a-b;//b=30-10-->a=20
printf("\nafter Swapping a= %d and b=%d",a,b);
}

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("Before Swapping a= %d and b=%d",a,b);
	swap(a,b);	
return 0;	
}
