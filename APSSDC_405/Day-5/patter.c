#include<stdio.h>
int main(){
	int size;
	scanf("%d",&size);
	for(int row=0;row<size;row++){//no of rows
		for(int col=0;col<size;col++){//no of cols
			if(row==size/2||col==size/2){
				printf("+ ");
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	return 0;
}
