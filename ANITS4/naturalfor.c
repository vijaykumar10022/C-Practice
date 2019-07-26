//printing natural number
//~ input:20
//~ output:1 2 3 4 5 6 7 8 9 ....20
//~ input:20 50
//~ output:20 21 22 23 24 25 ...50
input:5
output:5 10 15 20 25 30 35 40 45 50
#include<stdio.h>
int main(){
	int first,end;
	scanf("%d%d",&first,&end);//20
	for(int i=first;i<=end;i++){
		printf("%d  ",i);
	}
	//~ i=0;0<=10
		//~ 0
	//~ i=1;1<=10
		//~ 1
	//~ i=2;2<=10
		//~ 2
		//~ 
		//~ 
	//~ 
	//~ i=10;10<=10;
		//~ 10
	//~ i=11;11<=10
		//~ 
		
		
return 0;	
}

