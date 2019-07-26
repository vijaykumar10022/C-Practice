//110704/10139
#include<stdio.h>

int main()
{
    unsigned long int a,b,fact=1,i;
    


    printf("\n Enter the range of integers:");


    while(1)
       {
       scanf("%llu%llu",&a,&b);

       if((a==0)||(b==0))
       break;

       else
       {
          for(i=1;i<=a;i++)
          {
        fact=fact*i;
          }
         printf("%llu",fact);

         if((fact%b)==0)
         printf("\n %llu divides %llu!",b,a);

         else

         printf("\n %llu does not divide %llu!",b,a);

       }
       fact=1;
    }
       return 0;
}


