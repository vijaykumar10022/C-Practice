/*i/p:Enter range:n=10
 *o/p:Printing N Natural Numbers:
 *    1 2 3 4 5 6 7 8 9 10
 *    Natural numbers sum:55
 *    Evenseries:2 4 6 8 10
      OddSeries:1 3 5 7 9
 */
#include<stdio.h>
int main()
{	
  int n,i=1,sum=0;
  printf("Enter range:");
  scanf("%d",&n);
  do
  {
	printf("%d\t",i);
	sum=sum+i;
	i++;   
  }while(i<=n);
  printf("\nNatural numbers sum:=%d\n",sum);
  i=2;
  printf("EvenSeries:");
  do
  {
	printf("%d\t",i);
	i=i+2;
  }while(i<=n);
  i=1;
  printf("\nOddSeries:");
  do
  {
	printf("%d\t",i);
	i=i+2;
  }while(i<=n); 
  return 0;	
}
