#include<stdio.h>
void readarray(int array[][3],int r,int c){
	for(int i=0;i<=r-1;i++){
		for(int j=0;j<=c-1;j++){
			scanf("%d",&array[i][j]);
		}
	}
}
void displayarray(int array[][3],int r,int c){
	for(int i=0;i<=r-1;i++){
		for(int j=0;j<=c-1;j++){
			printf("%d\t",array[i][j]);
		}
		printf("\n");
	}
}
int main(){
	printf("Enter no of Rows & cols\n");
	int rows,cols;
	scanf("%d%d",&rows,&cols);
	int array[rows][cols];
	readarray(array,rows,cols);
	displayarray(array,rows,cols);
return 0;
}
