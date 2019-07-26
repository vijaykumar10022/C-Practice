//swaping of two numbers
#include <stdio.h>
 
int main()
{
   int a, b, t;
   printf("Enter the value of x and y\n");
   scanf("%d%d", &a, &b);
   printf("Before Swapping\nx = %d\ny = %d\n",a,b);
   t    = a;
   a    = b;
   b    = t;
  printf("After Swapping\nx = %d\ny = %d\n",a,b);
     return 0;
}
