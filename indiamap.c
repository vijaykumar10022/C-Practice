//3n+1 series cycle count
#include<stdio.h>
int main()
{
	int n,cc=0;
	scanf("%d",&n);
	while(n!=1)
	{
		if(n%2==0)
		{
			//printf("%d-->%d/2\n",n,n);
			n=n/2;
		}
		else
		{
			//printf("%d-->3*%d+1\n",n,n);
			n=3*n+1;
		}
		cc++;
	}
	printf("%d\n\n",cc+1);
	return 0;
}



//~ 1 10
//~ 
//~ 1-->1
//~ 2-->2
//~ 3-->8
//~ 4-->3
//~ 5-->6
//~ 6-->9
//~ 7-->17
//~ 8-->4
//~ 9-->20
//~ 10-->7



//20
