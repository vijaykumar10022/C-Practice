#include<stdio.h>
#define n 20
void readarray(int arr[][n],int rows,int cols){
	for(int i=0;i<=rows-1;i++){
		for(int j=0;j<=cols-1;j++){
			scanf("%d",&arr[i][j]);
		}
	}
}  
void displayarray(int arr[][n],int rows,int cols){
	
	for(int i=0;i<=rows-1;i++){
		for(int j=0;j<=cols-1;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
} 
void rightdiagonal(int arr[][n],int rows,int cols){
	printf("Right Diagonal Matrix");
	for(int i=0;i<=rows-1;i++){
		for(int j=0;j<=cols-1;j++){
			if(i==j){
				printf("%d\t",arr[i][j]);
			}
			printf("\t");
		}
		printf("\n");
	}
}
void leftdiagonal(int arr[][n],int rows,int cols){
	printf("left Diagonal Matrix");
	for(int i=0;i<=rows-1;i++){
		for(int j=0;j<=cols-1;j++){
			if(j==cols-1){
				printf("%d\t",arr[i][j]);
			}
			cols--;
		}
		printf("\n");
	}
}
void diaogonal(int arr[][n],int rows,int cols){
	printf("Diogonal Matrix\n");
	for(int i=0;i<=rows-1;i++){
		for(int j=0;j<=cols-1;j++){
			if(arr[i][j]%2!=0){
				printf("%d\t",arr[i][j]);
			}
			printf("\t");
		}
		printf("\n");
	}
}

int main(){
	int rows,cols;
	//printf("Enter Number of rows and cols ");
	//freopen("mat.txt","r",stdin);
	scanf("%d%d",&rows,&cols);
	int matrix[rows][cols];
	readarray(matrix,rows,cols);
	displayarray(matrix,rows,cols);
	//rightdiagonal(matrix,rows,cols);
	//leftdiagonal(matrix,rows,cols);
	//diaogonal(matrix,rows,cols);
	return 0;
}
