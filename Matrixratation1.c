#include<stdio.h>
int main()
{
	int matrix[100][100];
	int m,n,i,j;
	printf("Enter row and columns of matrix: ");
	scanf("%d%d",&m,&n);
	printf("Enter matrix elements: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("Matrix after 90 degrees roration \n");
	for(i=0;i<n;i++)
	{
		for(j=m-1;j>=0;j--)
		{
			printf("%d  ",matrix[j][i]);
		}
	printf("\n");
	
	}
	
		for (int i=0; i<m/2; i++) 
			for (int j=0; j<n; j++) 
				{ 
					int t = matrix[i][j]; 
					matrix[i][j] = matrix[m-1-i][n-1-j]; 
					matrix[m-1-i][n-1-j] = t; 
					printf("%d  ",matrix[j][i]);
				} 
	
	
}
