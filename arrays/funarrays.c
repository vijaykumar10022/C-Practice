#include<stdio.h>
int readarray(int arr[][5],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
return 0;
}
int displarray(int arr[][5],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
return 0;
}
int main(){
	int n;
	//printf("Enter size of array");
	freopen("f.txt","r",stdin);
	scanf("%d",&n);
	int arr[n][n];
	readarray(arr,n);
	displarray(arr,n);
	return 0;
}
