/*i/p: Enter range:20
o/p: 1 1.414 1.732 2.00 */
#include<stdio.h>
#include<math.h>
int main()
{
  int r,i;
  printf("Enter range:");
  scanf("%d",&r);
  for(i=1;i<=r;i++)
  {
	  printf("%.3lf ",sqrt(i));
  }	
  return 0;
}
