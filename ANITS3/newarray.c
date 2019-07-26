#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int sf=n+2;
	int d[sf][sf];
	for(int i=0;i<=sf-1;i++){
		for(int j=0;j<=sf-1;j++){
			if((i==0||i==sf-1)||(j==0||j==sf-1)){
				d[i][j]=0;
			}
			else
			{
				scanf("%d",&d[i][j]);
			}
		}
	}
	for(int i=0;i<=sf-1;i++){
		for(int j=0;j<=sf-1;j++){
			printf("%d ",d[i][j]);
		}
		printf("\n");
	}
	int i,j,sum=0;
	for(i=0;i<=sf-3;i++){
		for(j=0;j<=sf-3;j++){
			sum=sum+d[i][j];
		}
	}
	//printf("%d",sum);
	int mid=sum/9;
	//printf("\n%d\t%d\n",sum,mid);
	for(i=0;i<=sf-3;i++){
		for(j=0;j<=sf-3;j++){
			if(i==1&&j==1){
				d[i][j]=mid;
			}
		}
	}
	for(i=0;i<=sf-3;i++){
		for(j=0;j<=sf-3;j++){
			printf("%d ",d[i][j]);
		}
		printf("\n");
	}
	
return 0;	
}
