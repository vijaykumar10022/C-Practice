#include <stdio.h>
void readarray(int array[][3],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			
		if(i==0||j==0||i==j||i==n-1||j==n-1){
			printf("Read locations a[%d][%d]",i,j);
			scanf("%d",&array[i][j]);
		}
		}
		printf("\n");
		
		
	}
}
//~ void display(int array[],int n){
	//~ for(int i=0;i<=size-1;i++){
		//~ printf("array[%d]=%d\n",i,array[i]);
		//~ }
//}

int main()
{
int d1[5][10];
int nc,nr;
freopen("mat.txt","r",std
	printf("Enter array size:");
	scanf("%d",&size);//20
	
	readarray(array,size);
	//display(array,size);
	
	
	return 0;
}

