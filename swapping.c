//7 8
//8 7
//swapping mecanism with out using third variable -->bitwise xor operation
#include<stdio.h>
void swap(int a,int b){
		a=a^b;//7+8-->15
		b=a^b;//15-8-->7
		a=a^b;//15-7-->8
		printf("\nAfter Swapping a=%d and b=%d",a,b);
		
}
int main(){
	int a=7,b=8;
	printf("Before Swapping a=%d and b=%d",a,b);
	swap(a,b);
	return 0;
}


 1-0-->1
 0-1-->1
a-->7-->0111
b-->8-->1000
        ----
        1111-->15-->15
     
     
  b=a^b-->1111
          1000
          ----
          0111-->7-->b
          
          
          
  a=a^b-->1111
          0111
          ----
          1000-->8->a
        
     
        


