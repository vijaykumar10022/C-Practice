#include <stdio.h>
int main()
{
    int n, i;
     factorial = 1;

    printf("Enter an integer: ");
    scanf("%d",&n);

    
    if (n < 0)
        printf("is negative number plese enter positive number");

    else
    {
        for(i=1; i<=n; ++i)
        {
            factorial *= i;              
        }
        printf("Factorial of %d = %llu", n, factorial);
    }

    return 0;
}
