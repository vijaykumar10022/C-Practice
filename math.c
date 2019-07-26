//to demonstrate a function
#include<stdio.h>
#include<math.h>
int first(int d,int e)
{
	int y;
	y=((d*d)+(e*e)+(2*d*e));
  return y;
}
int main()
{
	int a,b;
	int c;
	printf("Enter a Numbers\n");
	scanf("%d%d",&a,&b);
	c=first(a,b);
	printf("Result of %d and %d is: %d",a,b,c);
   return 0;
}
