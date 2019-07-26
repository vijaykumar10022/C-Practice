
  //c).function with arg and with out return type
#include <stdio.h>
void addition();//function declaration
int main()
{
	addition(10,20);//function calling
	addition(15,25);
	addition(8,50);
	addition(15,25);
	return 0;
}
//function defination
void addition(int a,int b){
	int c=a+b;
	printf("Result is %d\n",c);
}
//~ 1).sum=0,n=10
	//~ i=1;1<=10;
	//~ sum=0+1-->1
	//~ i++-->2
//~ 2).sum=1;n=10
	//~ i=2;2<=10;
	//~ sum=1+2-->3
	//~ i++-->3
//~ 3).sum=3;n=10
	//~ i=3;3<=10
	//~ sum=3+3-->6
	//~ i++-->4
//~ 4).sum=6;n=10
	//~ i=4;4<=10;
	//~ sum=6+4-->10
	//~ i++-->5
//~ 5)sum=10;n=10
	//~ i=5;5<=10;
	//~ sum=10+5;-->15
	//~ i++;-->6
//~ 
//~ 
//~ 10)sum=45;n=10;
	//~ i=10;10<=10
	//~ sum=15+10-->55
	//~ i++-->11
//~ 11)sum=55;n=10
	//~ i=11;11<=10
