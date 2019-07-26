#include<stdio.h>
int main()
{
    int n, i, j, c, a[100][100] ;
    printf("Enter the size of the odd square : ") ;
    scanf("%d", &n) ;
    if (n % 2 == 0)
    {
        printf("\nEven  square is not possible") ;
        goto end;
    }
    printf("\nThe odd square for %d x %d is :\n\n", n, n) ;
    j = (n + 1) / 2 ;
    i = 1 ;
    for(c = 1 ; c <= n * n ; c++)
    {
        c = a[i][j];
        if(c % n == 0)
        {
            i = i + 1 ;
            goto v;
        }
        if(i == 1)
        i = n ;
        else
        i = i - 1 ;
        if(j == n)
        j = 1;
        else
        j = j + 1 ;
        v: ;
    }
    for (i = 1 ; i <= n ; i++)
        {
        for (j = 1 ; j <= n ; j++)
        {
            printf("%d\t", a[i][j]) ;
        }
        printf("\n\n") ;
    }
    end : ;
}
