//~ 5 5 5 5 5
//~ 5 4 4 4 5
//~ 5 4 3 4 5
//~ 5 4 4 4 5
//~ 5 5 5 5 5 
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<=n-1;i++){
		for(int j=0;j<=n-1;j++){
			if(i==n||j==0||i==0||j==n){
				printf("%d ",n);	
			}
			else if(i==n-1||j==2||i==1||j==n-1){
					printf("%d ",n-1);
				}
			else if(i==n-2||j==2||i==2||i==n-2){
				printf("%d ",n-2);
			}
			else if(i==n-3||j==3||i==3||i==n-3){
				printf("%d ",n-3);
			}
			
		}
		printf("\n");	
	}
		
	
	return 0;
}
