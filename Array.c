//to store number elements in arrya

#include<stdio.h>
 
int main() {
   int i, arr[100], num;
 
   printf("Enter no of elements :");
   scanf("%d", &num);
 
   printf("Enter the values :");
   for (i = 0; i < num; i++) {
      scanf("%d", &arr[i]);
   }
    for (i = 0; i < num; i++) {
      printf("\narr[%d] = %d", i, arr[i]);
   }
 
   return (0);
}
