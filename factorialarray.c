#include<stdio.h>
int fac[1000],prime[1000];

int fibnacci(int n){
	int a[1000],i;
	a[0]=1;a[1]=1;
   /* Calculaate Fibonacci series */
   for(i=2;i<n;i++)
      a[i]=a[i-1]+a[i-2];

   for(i=0;i<n;i++){
	   prime[i]=a[i];
       printf("%d ",a[i]);
   }
   return 0;
}
int  primenumber(int n){
	int i,count,c,prime[100],t=0;
 
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
		fac[i]=prime[i];
		printf("%d ",prime[i]);
	}
	return 0;
}
int main()
{
   int n;
   printf("How many terms to be display : ");
   scanf("%d",&n);
   primenumber(n);
   printf("\n");
   fibnacci(n);
   printf("\n");
   for(int i=0;i<=n-3;i++){
	   printf("%d,",prime[i]);
	   printf("%d,",fac[i]);
	   
	
   }
   
   
}     
       //~ 0
      //~ 0 1
     //~ 2 3 4
    //~ 8 7 6 5
   //~ 9 10 11 12
 //~ 17 16 15 14 13      

0 1 2 3 4 5 6 7 8 9

a[]=1 5 6 7 8 1 2 3 5 8
even[]=a[i%2==0]-->1 6 8 2 5-->
sort()-->1 2 5 6 8
odd[]->1 6 8 2 5 8


0 1 2 2 3 5 6 6


