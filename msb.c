#include <stdio.h> 
int msb1(int n)
{
    int i = 31, d,c=0x80000000;
    while (i >= 0)
    {
        d = n & c;
           if (d != 1) 
            break;
        n = n << 1;
        i--;
    }
    return (i);
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%i", &n);
    printf("A last 1 is in position %d for the number %d\n",msb1(n),n);
    return 0;
}
