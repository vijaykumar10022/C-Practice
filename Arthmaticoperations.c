#include <stdio.h>
int main()
{
    double a,b,c,d,e,f;
    printf("Enter two numbers: ");

     scanf("%lf %lf", &a, &b);  

    c = a+b;
    d=a*b;
    e=a-b;
    f=a/b;
      printf("Addition of numbers = %f", c);
    printf("Product of numbers = %f", d);
    printf("Different of numbers= %f", e);
    printf("Division of numbers= %f", f);
    
    return 0;
}
