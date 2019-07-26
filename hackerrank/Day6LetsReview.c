#include <stdio.h>
#include <stdlib.h>
int main() {
   int t;
    scanf("%d",&t);
    while(t)
        {
        char a[10000];
        scanf("%s",a);
        int i=0;
        while(a[i]!='\0')
        {if(i%2==0)
            printf("%c",a[i]);
        i++;}
       i=0;
        printf(" ");
        while(a[i]!='\0')
        {if(i%2!=0)
            printf("%c",a[i]);
        i++;}
        t--;
        printf("\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
