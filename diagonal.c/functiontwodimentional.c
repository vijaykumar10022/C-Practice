#include<stdio.h>
#include "allinone.h"
int main(){
	int rows,cols;
	printf("Enter Number of rows and cols ");
	scanf("%d%d",&rows,&cols);
	int matrix[rows][cols];
	readarray(matrix,rows,cols);
	displayarray(matrix,rows,cols);
	rightdiagonal(matrix,rows,cols);
	leftdiagonal(matrix,rows,cols);
	diaogonal(matrix,rows,cols);
	return 0;
}
