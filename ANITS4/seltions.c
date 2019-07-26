//Selection Statements
//if else
  //biggest of two numbers
#include <stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);//a=10,b=20
	if(a>b){
		printf("%d is grater than %d",a,b);
		printf("A is big");
	}
	else{
			printf("%d is lesser than %d",a,b);
			printf("B is big");
		}
return 0;	
}
