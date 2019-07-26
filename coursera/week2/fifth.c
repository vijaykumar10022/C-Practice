#include<stdio.h>
long long  getfib(long long n,long long m){
	if(n<=1)
		return n;
	int f[500000];
	f[0]=0;
	f[1]=1;
	for (long long i = 2; i < 500000; ++i) {
        f[i]=( f[i-1] + f[i-2] ) % m;
    }
    int pl=2;
    for(int i=2; i<500000; i++)
    {
		if( (f[i]==0) && (f[i+1]==1) && (f[i+2]==1) ) { 
			break; 
		}
		pl++;
	}
	return f[n%pl];
}
int main(){
	long long int n,m;
	scanf("%lld%lld",&n,&m);
	printf("%lld",getfib(n,m));
	return 0;
}
