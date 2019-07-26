//Summation of four Prime 110705/10168

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
char* primes;
void cachePrimes(int n)
{
    int i,j;
    primes = (char*) malloc(n+1);
    primes[0] = 1;
    primes[1] = 1;
    for(i=4;i<=n;i+=2)
        primes[i] = 1;
    for(i=3;i*i<=n;i+=2)
        if(!primes[i])
            for(j=i*i;j<=n;j+=i)
                primes[j] = 1;
}
int main()
{
    int n,i;
    cachePrimes(10000000);
    while(scanf("%d",&n)==1)
    {
        if(n>=8)
        {
            if(n&1)
                printf("%d %d ",2,3);
            else
                printf("%d %d ",2,2);
            n-=(4+(n&1));
            for(i=2;n-i>=2;i++)
                if(!primes[i]&&!primes[n-i])
                {
                    printf("%d %d\n",i,n-i);
                    break;
                }
            }
            else
                puts("Impossible.");
    }
    return 0;
}
