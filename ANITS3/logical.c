//~ 3).Bitwise Operators-->Bit wise and(&),bitwise
#include<stdio.h>
int main(){
	int first,second;
	scanf("%d%d",&first,&second);//10 && 20
	//~ 10-->01010
	//~ 20-->10100
	//~ -----------
	     //~ 00000
	 //~ 8-->1000
	 //~ 5-->0101
		//~ --------
		 //~ 0000
	//~ 8-->1000
	//~ 9-->1001
	 //~ -------
	    //~ 1000-->8
	    
	int c=first&second;
	printf("Bit wise and %d\n",c);//0
	c=first|second;
	//~ 10 20
	//~ 10-->01010
	//~ 20-->10100
		//~ ------
		//~ 11110-->
		//~ 16+8+4+2+0-->30
	printf("Bit wise or %d\n",c);
	c=first^second;
	//~ 10-->01010
	//~ 20-->10100
	 //~ ----------
		//~ 11110
		//~ 16+8+4+2+0-->30
	printf("bit wise XOR %d\n",c);
	c=!(first);
	printf("bit wise Not %d\n",c);
return 0;
}
