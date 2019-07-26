#include<stdio.h>
int magic(int n)
{
	int row,col,max,ma[n][n];
	int i,j;
	max=n*n;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			ma[i][j]=0;
		}		
	}
	ma[0][n/2]=1;
	for(i=2,row=0,col=n/2;i<max+1;i++)
	{
		row=row-1;
		col=col+1;
		if((col>n-1)&&(row<0))
		{
			row=row+2;
			col=col-1;
		}
		if(row<0)
		{
			row=n-1;
		}
		if(col>n-1)
		{
			col=0;
		}
		
		if(ma[row][col]>0)
		{
			row=row+2;
			col=col-1;
		}
		
		
		ma[row][col]=i;
		
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d \t",ma[i][j]);
		}
		printf("\n");
	}
	return 0;
}
int main(){
	int n;
	printf("Enter a Majic Size of n: ");
	scanf("%d",&n);
	magic(n);
}
