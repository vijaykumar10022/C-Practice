#include<stdio.h>
int matrics()
{
	int rows = 0,columns= 0,matrix[m][n],i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
		matrix[i][j]=0;
	   }
	 for(i=0;i<m*n+1;j++){
		 columns = columns+1;
	 }
		 if(columns > n)
		 {
			 rows = rows + 1;
			 }
		 if(rows>m){
			 
			 columns=columns-1;
		}
		if( matrix[rows][columns])=i;
	

}
int main()
{
	
	int n,m;
	print("Enter matrix size values %d");
	scanf("%d%d" ,&n,&m);
	matrics(n,m);
	 
	}
