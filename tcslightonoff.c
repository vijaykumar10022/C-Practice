 //110701
#include <stdio.h>
int Switch(long int n);
 int main()
{
	long int n;
	printf("enter the n:");
	scanf("%ld",&n);
     while(n!=0)
      {
        if(Switch(n)==1)
         printf("yes\n");
         else
         printf("no\n");
        return 0;
      }
  return 0;
} 
int Switch(long int n)
{
   long int i;
     while(1)
     {                   
       if(i*i<n)
       i++;
       else if(i*i==n)
         {
           return 1;
           break;
         }   
          else
          return 0;
      }
}
