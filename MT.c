#include<stdio.h>
 
int main()
{
 int n, i, a[10], b[10];
 int Add[i], Sub[i], Mul[i], Mod[i];
 float Div[10];
  
 printf("\n Enter the Size of an Array\n");
 scanf("%d", &n);
 
 printf("\n Enter the First Array Elements\n");
 for(i = 0; i < n; i++)
  {
      scanf("%d", &a[i]);
  }
   
 printf("\n Enter the Second Array Elements\n");
 for(i = 0; i < n; i ++)
  {
      scanf("%d", &b[i]);
  }
  
 for(i = 0; i < n; i ++)
  {
      Add [i]= a[i] + b[i];
      Sub [i]= a[i] - b[i];
      Mul [i]= a[i] * b[i];
      Div [i] = a[i] / b[i];
      Mod [i] = a[i] % b[i]; 
  }
 
 printf("\n Add\t Sub\t Multi\t Div\t Mod");
 for(i = 0; i < n; i++)
  {
      printf("\n%d \t ", Add[i]);
      printf("%d \t ", Sub[i]);
      printf("%d \t ", Mul[i]);
      printf("%.2f \t ", Div[i]);
      printf("%d \t ", Mod[i]);
  }
 
  return 0;
} 
