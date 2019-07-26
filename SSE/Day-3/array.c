#include<stdio.h>
int main(){
	int i,t=1;
	int n=5;
	int a[n];
	for(i=0;i<=n-1;i++){
		a[i]=t;
		t++;
	}
	printf("\n");
	for(i=0;i<=n-1;i++){
		if(i==2){
			a[i]=25;
			//printf("%d ",a[i]);
		}
	}
	for(i=0;i<=n-1;i++){
		printf("%d ",a[i]);
	}
	
	return 0;
}
