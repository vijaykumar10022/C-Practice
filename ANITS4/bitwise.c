//6).Bitwise operators->Bitwise or(|),Bitwise(&),Bitwise Xor(^),Bitwise not(~)
#include <stdio.h>
int main(){
int a;
	scanf("%d",&a);//a=10,b=20
	//bit wise or
	int c=~(a);//-(n+1)
	//a=10-->01010
			  //b=20-->10100
			  //~ ---------------
			            //~ 11110-->
			            //~ 16+8+4+2+0-->30 		 
	printf("%d",c);

return 0;	
}
