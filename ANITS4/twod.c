//~ 2d arrays
//~ =========
//~ input:5 4
//~ output:01 02 03 04 10
	   //~ 05 06 07 08 21
	   //~ 09 10 11 13 33
	   //~ 14 15 16 17 62
	   //~ 18 19 20 21 78

#include<stdio.h>
void read_array(int array[][5],int row,int col){
	for(int i=0;i<=row-1;i++){
		for(int j=0;j<=col-1;j++){
			scanf("%d",&array[i][j]);
		}
	}
	
}
void show(int array[][5],int row,int col){
	
	int sum=0;
		for(int i=0;i<=row-1;i++){
		for(int j=0;j<=col-1;j++){
			sum=sum+array[i][j];
			printf("%.2d ",array[i][j]);
		}
		printf("\n");
	}
	printf("\nSum of array elements is %d",sum);
}
int main(){
	int row,col;
	scanf("%d%d",&row,&col);
	int array[row][col];
	read_array(array,row,col);
	show(array,row,col);	
return 0;	
}
