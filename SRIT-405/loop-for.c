//~ control statements:
	//~ -->Selections:if,if else,if elseif else,switch
	//~ -->Loops:For,while,do while
	//~ -->Jumping Statements-->break,goto,continue

//to print n natural numbers both forward and backword
//~ input:10 20
//~ output:10 11 12 13 14 ...20

//~ input:10
//~ output:1*7+1 2*8+2 3*9+3  ....
		//~ 8    18    30           ..10

#include<stdio.h>
int main(){
	int n1,i,temp;
	scanf("%d",&n1);
	for(i=1,temp=7;i<=n1;i++,temp++){
		printf("%d\t",(i*temp)+i);
		
	}
	return 0;
}
//~ -->n=10
//~ i=1;1<=10(T)
	//~ 1
//~ i=2;2<=10(T)
	//~ 2
//~ i=3;3<=10(T)
	//~ 3
	//~ 
//~ 
//~ i=10;10<=10(T)
	 //~ 10
//~ i=11;11<=10(F)
