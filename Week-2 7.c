#include<stdio.h>
int lastdigit( long long  n,long long  m) 
{
    int first = 0;
    int second = 1;
     long int res,i;
    if(n==1)
		return n;
	else{
		for(i = n;i<=m; i++) 
		{
			res =first+second;
			first = second;
			second = res;
		}
		int pl=2;
		for(int i=n; i<m; i++)
		{
			if( (first==0) && (second==1) && (second+1==1) ) { 
			break; 
		}
		pl++;
	}
	return n%pl;
		
	}
}

int main()
{
	long long int n,m;
	scanf("%lld%lld",&n,&m);
	printf("%ld\n",lastdigit(n,m));
	return 0;
}
