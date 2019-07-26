# include <stdio.h>
# include <math.h>
 
 int is prime (int n){
  int  i;
for(i=2,i*i<n;i++){ 
    if(n%i ==0) return0;

    }
//a^n mod  n=a
//n=3, 2^2 mod  3=2
  //r=2, i=7
  
  int  isfermat(int n){
    int a,r;
    for (a=1;a<n;a++){
       r=1;
        for(i=1; i<n;i++)
             r =( r*(a%n))%r;  //(a*b mod n) =(amod n)(b mod n) 
        modn;
      if (r==0)  return 0;       
    }
     if(r!=a) return 0;
    }
     return 1;
 }
 
  int main( int argc, char ** argv);
     intn;
       scanf( "%d" ,$n);
     while (n!=0){
          if ( isprime(n)) 
            printf("%d is normal. \n",n)
           else{ 
              if (is fermet(n))
               printf(" yes: fermat:\n")
                else
                 printf( "the number % is a crmichael");
         else{
          if( is fermat(n))
       printf(" yes: fermat \n");
       else{
        printf("no:not afermet\n");
        scanf(" d" ,&n);
       }
   }
