//input:10
//output:1 ...10
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i=n;
	while(i>=1){
		printf("%d  ",i);
		i--;
	}
	return 0;
}
//~ do while:
//~ --------
//~ initization:
//~ do{
	//~ statements;
	//~ incre/decre
//~ }while(condition);
