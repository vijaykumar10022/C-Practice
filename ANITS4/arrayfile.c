//~ contraints:
	//~ size n-->1<n>100
	//~ values -->10<a[i]>=100
#include <stdio.h>
int main(){
	FILE *a=fopen("input.txt","r");
	int n;
	fscanf(a,"%d",&n);
	int array[n];
	for(int i=0;i<=n-1;i++){
		fscanf(a,"%d",&array[i]);
	}
	for(int i=0;i<=n-1;i++){
		printf("%d ",array[i]);
	}
return 0;	
}

