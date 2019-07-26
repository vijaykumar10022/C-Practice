//2'd arrays
#include<stdio.h>
int main(){
	int rows,colm,i,j;
	printf("Enter No of Rows &Cols");
	scanf("%d%d",&rows,&colm);//2 3
	int arr[rows][colm];//arr[2][3]
	int temp=1;
	
	for(i=0;i<=rows-1;i++){
		for(j=0;j<=colm-1;j++){
			arr[i][j]=temp;
			temp++;
		}
	}
	printf("Enter Values to store in array\n");
	for(i=0;i<=rows-1;i++){
		for(j=0;j<=colm-1;j++){
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	printf("Array values are \n");
	for(i=0;i<=rows-1;i++){
		for(j=0;j<=colm-1;j++){
			if(arr[i][j]%2==0)
				printf("%d ",arr[i][j]);
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
//~ temp=100;
//~ i=1;1<=10
	//~ 99
	//~ temp=100-11-->89
//~ i=2'2<=10
	//~ 89-1-->88
	//~ temp=89-11-->78
//~ i=3;3<=10
	//~ 78-1-->77
		//~ 




