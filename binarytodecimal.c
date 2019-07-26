#include<stdio.h>
void printb(int n)
{
		unsigned int i,c;
		c=0X80000000;

    for(i=1;i<=32;i++)
   {
    if(n&c) 
    printf("1");else printf("0");
    if((i%4)==0)
    printf(" ");
    c=c>>1;
    }
    printf("\n");
}
int main(int argc,char *argv[])
{
int n,s;
char s1[9];
printf("enter anumber:");
scanf("%d",&n);
printf("Hex value of %d is \n",n);
sprintf(s1,"%u",n);

  printf("%s\n",s1);
   s=atoi(s1);
   printb(s);
  return 1;
}
