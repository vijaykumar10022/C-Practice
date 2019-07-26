#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j||i+j==n-1){
				printf("%d",j);
			}
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
11 12 13 14 15
21 22 23 24 25
 n

