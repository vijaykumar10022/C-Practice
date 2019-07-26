#include <stdio.h>
int main()
{
    int n;
   char s[9];
    printf("Enter a decimal value :");
    scanf("%d",&n);
   sprintf(s,"%8b", n);
   //printf("%s",s);
   return(0);
}
