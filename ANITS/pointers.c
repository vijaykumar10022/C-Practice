#include<stdio.h>
int main(){
	printf("Enter Your Value:");
	int n;
	scanf("%d",&n);
	int *ptr=&n;
	for(int i=1;i<=*ptr;i++){
		printf("%d ",i);
	}
	
	return 0;
}
