#include <stdio.h>

int main()
{
    int n;
    long long product=1;

    /* Input number from user */
    printf("Enter any number to calculate product of digit: ");
    scanf("%d", &n);

    /* Repeat the steps till n becomes 0 */
    while(n != 0)
    {
        /* Get the last digit from n and multiplies to product */
        product = product * (n % 10);

        /* Remove the last digit from n */
        n = n / 10;
    }

    printf("Product of digits = %lld", product);

    return 0;
}
