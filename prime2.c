#include<stdio.h>
 
int main()
{
   int n, i = 3, count, c,prime[100],t=0;
 
   printf("Enter the number of prime numbers required\n");
   scanf("%d",&n);
   if ( n >= 1 )
   {
      printf("First %d prime numbers are :\n",n);
   }
 
   for ( count = 2 ; count <= n ;  )
   {
      for ( c = 2 ; c <= i - 1 ; c++ )
      {
         if ( i%c == 0 )
            break;
      }
      if ( c == i )
      {
         prime[t]=i;
         t++;
         count++;
      }
      i++;
   }
 
	for(int i=0;i<=n-2;i++){
		printf("%d ",prime[i]);
	}
   return 0;
}
