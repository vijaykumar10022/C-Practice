
#include<stdio.h>
int main()
{
    char str[30][30];
    static int a[26];
    int i,j,k,n,p;
  
    puts("Enter numer of  strings");
    scanf("%d",&n);
    fflush(stdin);
    for(i=0;i<n;i++)
        gets(str[i]);
 /*    printf("Entered Strings\n");
    for(i=0;i<n;i++)
        puts(str[i]); */
    for(p=0;p<n;p++)
    {
        for(k=0,i='a';i<='z';i++,k++)
        {
            for(j=0;str[p][j]!='\0';j++)
            {
                if(str[p][j]==i)
                    a[k]++;
            }
        }

   /*    printf("Characters and their count\n");
    for(i=97;i<=122;i++){
        printf("%c --> %d\n",i,a[i-97]);
        getch();
    }*/
    for(i=0;i<26;i++)
    {
        if(a[i]==i+1 || a[i]==0)
            ;
        else
            break;
    }
    if(i==26)
        printf("YES ");
    else
        printf("NO ");
    for(i=0;i<26;a[i++]=0);
    }
  
}
