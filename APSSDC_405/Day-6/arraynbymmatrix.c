//~ To perform arithmetic[Addition]operation by using functions in arrays

#include<stdio.h>
void readarray(int ac[][3],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&ac[i][j]);
		}
	}
}

void printarray(int ac[][3],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%02d ",ac[i][j]);
		}
		printf("\n");
	}
}
void add(int a[][3],int b[][3],int n ,int m )
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%02d ",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n][m],b[n][m];
	readarray(a,n,m);
	readarray(b,n,m);
	printf("\n");
	printarray(a,n,m);
	printf("\n");
	printarray(b,n,m);
	printf("\n");
	add(a,b,n,m);	
	return 0;
}
