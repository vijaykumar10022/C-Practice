//3).funtion with arg and funtion with out return values
//Addition of two numbers
#include<stdio.h>
void add(int f,int s){//Formal parameters
int c=f+s;
printf("Addition of Two Numbers is %d\n",c);
	
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);//10 20
	add(a,b);//Actual parameters
	add(20,80);
return 0;	
}
