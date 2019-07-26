#include <stdio.h>
int even[1000],odd[1000],t=0,s=0;
int main(int argc, char **argv)
{
	int n;
	scanf("%d",&n);
	int array[n];
	for(int i=0;i<=n;i++){
		scanf("%d",&array[i]);
	}
	printf("\ngiven array elements are\n");
	for(int i=0;i<=n;i++){
		printf("%d ",array[i]);
	}
	for(int i=0;i<=n;i++){
	
		if(i%2==0){
			even[t]=array[i];
			t++;
		}
	}
	printf("\n even elements are\n");
	for(int i=0;i<=t;i++){
		printf("%d ",even[i]);
	}
	for(int i=0;i<=n;i++){
	
		if(i%2!=0){
			odd[t]=array[i];
			s++;
		}
	}
	printf("\nodd numbers \n");
	for(int i=0;i<=t;i++){
		printf("%d ",odd[i]);
	}
	
	return 0;
}

