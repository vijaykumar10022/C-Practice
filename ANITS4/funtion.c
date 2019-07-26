//addition of two numbers using funtions
//2).funtion with out arguments and funtion with return values 
#include<stdio.h>
//defination
int sum_of_natural(){
	int n,sum=0;
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
		sum=sum+i;//sum+=i;
	}
	printf("Sum of %d natural numbers is ",n);
	return sum;
}
int main(){
	//int c=add();//funtion calling with in main
	printf("%d\n",sum_of_natural());
return 0;
}


