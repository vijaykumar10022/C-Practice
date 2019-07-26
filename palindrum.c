#include <stdio.h>
int main()
{
    int n, r= 0, rem, num;

    printf("Enter an integer: ");
    scanf("%d", &n);

        num= n;

     
    while( n!=0 )
    {
        rem = n%10;
        r = r*10 + rem;
        n /= 10;
    }

    
    if (num == r)
        printf("%d is a palindrome.", num);
    else
        printf("%d is not a palindrome.", num);
    
    return 0;
}
