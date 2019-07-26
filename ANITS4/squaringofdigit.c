//intput:1234
//reverse 4321
//sqrt
//output 14916
#include<stdio.h>
#include "squeringogdigit.h"
int main( )
{
	printf("Enter Your Test Cases:");
	int test;
	scanf("%d",&test);
	for(int i=0;i<=test-1;i++){
		int n;
		printf("Enter Your  %d Number ",i+1);
		scanf("%d",&n);
		int rev=reverse(n);
		//printf("Reversed  numbers is %d",rev);
		squiring(rev);	
	}
	
	
return 0;	
}
