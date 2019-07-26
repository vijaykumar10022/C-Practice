//Command line arguments
//5-->120
//5 5*4*3*2*1=120
#include<stdio.h>
#include<stdlib.h>
int main(int c, char * cv[]) {
	int f=1;
   	int n=atoi(cv[ 1]);
   	for(int i=1;i<=n;i++){
		f=f*i;
		printf("%d*",f);
	}
	printf(":%d",f);
	return 0;
}
