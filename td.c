#include<stdio.h>
void readarray(int arr[][3],int rows,int cols){
	for(int i=0;i<=rows-1;i++){
		for(int j=0;j<=cols-1;j++){
			scanf("%d",&arr[i][j]);
		}
	}
}  
void displayarray(int arr[][3],int rows,int cols){
	
	for(int i=0;i<=rows-1;i++){
		for(int j=0;j<=cols-1;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
} 
int main(){
	int rows,cols;
	printf("Enter Number of rows and cols ");
	scanf("%d%d",&rows,&cols);
	int matrix[rows][cols];
	readarray(matrix,rows,cols);
	displayarray(matrix,rows,cols);
	return 0;
}
