#include<stdio.h>
int mian(){
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if (i==j||n+1){
				printf("%d",j);
			}
			else
				printf(" ");
			
			}
			printf("\n");
			
		}
	
	return 0;

}

