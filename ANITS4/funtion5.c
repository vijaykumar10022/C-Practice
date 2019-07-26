//4).funtion with arg and with return values
//addition of two numbers
#include<stdio.h>
int add(int a,int b){
	int c=a+b;
return c;	
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);//10 20//dynamic values 
	//int sum=add(a,b);//Actual parameters
	printf("sum of two numbers is %d",add(a,b));
return 0;	
}

