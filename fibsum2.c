#include <stdio.h>
int main()
{
   long long int i, n, t1 = 0, t2 = 1, nextTerm,m;
   scanf("%lld %lld", &n, &m);
   for (i = 1; i <= n; ++i)
   {
       
       nextTerm = ((t1 + t2)%m);
       t1 = t2;
       t2 = nextTerm;
   }
   printf("%lld\n",nextTerm);
   return 0;
}
