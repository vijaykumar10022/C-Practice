#include<stdio.h>
int cl(unsigned long int n)
{
	int c=1;
	while(n!=1)
	{
		if(n%2==0)
		n=n/2;
		else 
		n=(3*n)+1;
		c++;
	}
return c;
}
int maxcl(unsigned long int i,unsigned long int j)
{
	int m=1,t;
	if(i>j)
	{
		t=i;
		i=j;
		j=t;
	}


	unsigned  long int l;
	for(l=i;l<=j;l++)
	{
		t=cl(l);
		if(t>m)
		m=t;
	}
return m;
}
int main( int ac,char *av[])
{
	unsigned long int i,j;
	int m;
	while(scanf("%ld %ld",&i,&j)!=EOF)
	{
		m=maxcl(i,j);
		printf("%ld %ld %d ",i,j,m);
	}
	return 0;
}


