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
void rightdiagonal(int arr[][3],int rows,int cols){
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
void leftdiagonal(int arr[][3],int rows,int cols){
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
void diaogonal(int arr[][3],int rows,int cols){
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
