#include<stdio.h>
int star(int n);
int main()
{
int n;
printf("enter no of rows:");
scanf("%d",&n);
star(n);
return 0;
}
int star(int n)
{
int result,i,j;
 for(i=1;i<=n;i++)
 {
 	for(j=1;j<=n;j++)
 {
 	if(i==1||i==n||j==1||j==n)
 {
 result=printf("*");
 }
else if(i==2&&j==2)
 {	
  result=printf("vijay");
 
 }
 else
 {
 printf(" ");
 }
 
 }                                                            
 printf("\n");
 }
 return result;
}
6
