#include<stdio.h>
 
int main() {
   static int i = 1;
   if (i <= 10) {
      printf("%d", i++);
      main();
      return 0;
   }
}
