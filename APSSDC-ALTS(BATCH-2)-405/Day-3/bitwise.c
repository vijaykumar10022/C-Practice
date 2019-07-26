//bitwise operators: bitwise and(&),bitwise or(|),bitwise not(~),bitwise xor(^)
#include<stdio.h>
int main(){
	int a=20,b=30;				       
	int c=a^b;
	printf("%d",c);//~(30)-->-(30+1)-->-31
	return 0;
}


//~ 20-->10100
//~ 30-->11110
    //~ ------
      //~ 01010-->10
//~ valu1  value2   xor(^)
  //~ 1      1     0  
  //~ 1      0     1
  //~ 0      1     1
  //~ 0      0     0








//~ 20 -->10100
//~ 30 -->11110
      //~ -----
      //~ 11110-->30

