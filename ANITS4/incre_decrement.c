//Incrment and decrement operators
#include<stdio.h>
int add(int a,int b){
	printf("%d %d \n",a,b);//10 20
	return 0;
	}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);//a=10,b=20
	add(a++,b--);
	printf("%d %d",a,b);//9 19
return 0;	
}
