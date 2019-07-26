#include <stdio.h>
long mod(long b, long p, long m)
{
    if(p==0)
    {
        return 1;
    }
    else if (p%2==0)
    {
        return (mod(b, p/2, m)*mod(b, p/2, m))%m;
    }
    else
    {
        return ((b%m)*mod(b, p-1, m))%m;
    }
}
void carmichael(long n)
{
    long i, c=1;
    for(i=3; i<n; i++)
    {
        if(mod(i, n, n)!=i)
        {
            c=0;
            printf("%ld is normal.\n", n);
           break;
        }
    }
    if(c==1)
    {
        printf("The number %ld is a Carmichael number.\n", n);
    }
}
int prime(long n)
{
   int i;
    for(i=2; i*i<=n; i++)
    {
        if((n%i)==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    long n;
    while((scanf("%ld", &n)==1)&&(n!=0))
    {
        if(prime(n))
        {
           printf("%ld is  number.\n", n);
        }
        else
        {
            carmichael(n);
        }
    }
    return 0;
}

 


 


 



 

