#include<stdio.h>
int multiply( int *, int);
int main()
 {
	int number = 3;
	int *ptr =&number;
	printf(“ 1: %d\n ”, multiply( &number, 2 ) );
	printf(“ 2: %d\n ” , multiply( ptr, 3 ) );
}
int multiply (int *a, int factor)
{
      return (*a) * factor;
}
