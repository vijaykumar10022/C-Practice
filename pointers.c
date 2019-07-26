#include<stdio.h>
main() {
   int i = 3, *j, **k;
   j = &i;
   k = &j;
   
   printf("\nAddress of i = %d", &i);//100
   printf("\nAddress of j = %u", j);//100
   printf("\nAddress of k = %u", *k);
   printf("\nAddress of j = %u", &j);
   printf("\nAddress of j = %u", k);
   printf("\nAddress of k = %u", &k);
   printf("\nValue of j   = %u", j);
   printf("\nValue of k   = %u", k);
   printf("\nValue of i   = %d", i);
   printf("\nValue of i   = %d", *(&i));
   printf("\nValue of i   = %d", *j);
   printf("\nValue of i   = %d", **k);
}
