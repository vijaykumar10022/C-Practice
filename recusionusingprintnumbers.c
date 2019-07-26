#include<stdio.h>
 
void printNumber(int value) {
   int i;
   printf("%d\n", value);
   i = value + 1;
 
   if (i > 10)
      return;
   printNumber(i);
}
 
int main() {
   printNumber(1);
   return 0;
}
