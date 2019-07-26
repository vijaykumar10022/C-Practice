#include <stdio.h>

int main() {

   int a = 21;
   int b = 10;

   if( a == b ) {
      printf("Line 1 - %d is equal to %d\n",a,b );
   } else {
      printf("Line 1 - %d is not equal to %d\n",a,b );
   }
	
   if ( a < b ) {
      printf("Line 2 - a is less than b\n" );
   } else {
      printf("Line 2 - %d is not less than %d\n",a,b );
   }
	
   if ( a > b ) {
      printf("Line 3 - %d is greater than %d\n",a,b );
   } else {
      printf("Line 3 - %d is not greater than %d\n",a,b );
   }
   
   /* Lets change value of a and b */
   a = 5;
   b = 20;
	
   if ( a <= b ) {
      printf("Line 4 - %d is either less than or equal to  %d\n",a,b );
   }
	
   if ( b >= a ) {
      printf("Line 5 - %d is either greater than  or equal to %d\n",b,a );
   }
   return 0;
}
