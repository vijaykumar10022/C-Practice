#include<stdio.h>
void printb(int n)
{
	unsigned int i,c;
	c=0x40000000;
	printf("Binary form of %d is \n",n);
	for(i=1;i<=32;i++){
	if(n&c) printf("1");else printf("0");
	if((i%4)==0) printf(" ");
	c=c>>1;
	
	}
	printf("\n");
}
int main(int argc,char *argv[])
{
int n;
char s[9];
printf("Enter a number :");
scanf("%d",&n);
printf("the value of n is :%8d:\n",n);
sprintf(s,"%08x",n);
//printf("%s",s);
 return 0;
 }
