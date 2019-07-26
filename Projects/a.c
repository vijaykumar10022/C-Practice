#include<stdio.h>
void magic(int n)
{
  
  int matrix[n][n];
  int k;
  int nsqr = n * n;
  int i=0, j=n/2;     // start position

  for (k=1; k<=nsqr; ++k) 
  {
    matrix[i][j] = k;

    i--;
    j++;

    if (k%n == 0) 
    { 
      i += 2; 
      --j; 
    }
    else 
    {
      if (j==n) 
        j -= n;
      else if (i<0) 
        i += n;
    }
  }
  for(i=0;i<n;i++)
  {
	  for(j=0;j<n;j++)
	  {
		  printf("%d \t",matrix[i][j]);
	  }
	  printf("\n");
  }
}
int main()
{
	int n;
	 printf("enter n");
	 scanf("%d",&n);
	 magic(n);
}
