#include<stdio.h>
int calculateSum(int);
int main() {
   int  num,result;
   printf("Input a number : ");
   scanf("%d", &num);
   result = calculateSum(num);
   printf("\nSum of %d Numbers is: %d\n", num, result);
   return (0);
}

int calculateSum(int num) {
   int res;
   if (num == 1) {
      return (1);
   } else {
      res = num + calculateSum(num - 1);
   }
   return (res);
}
