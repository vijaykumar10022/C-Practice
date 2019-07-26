//To perform addition in dynamic
//include
//~ input:10 20
//~ output:30
//Arith matic operations-->+,-,*,/,%
#include<stdio.h>
int  main(){
	int value1,value2;
	scanf("%d%d",&value1,&value2);//10 20
	printf("Addition of %d and %d is %d\n",value1,value2,value1+value2);
	printf("Subtration of %d and %d is %d\n",value1,value2,value1-value2);
	printf("multiplication of %d and %d is %d\n",value1,value2,value1*value2);
	printf("division of %d and %d is %d\n",value1,value2,value1/value2);
	printf("modular division of %d and %d is %d\n",value1,value2,value1%value2);
	//Addition of 10 and 20 is 30
	return 0;
}


