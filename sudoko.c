#include <stdio.h>

int main(int argc, char **argv)
{
	int i,j,size,sum=0,sudokusum=0,check=0;
	printf("enter sudoku matrix size");
	scanf("%d",&size);
	for(i=1;i<=size;i++)
	{
		sudokusum +=i;
	}
	int arr[size][size];
	printf("enter matrix values");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<size;i++)//row sum
	{ 
		sum=0;
		for(j=0;j<size;j++)
		{
			sum=sum+arr[i][j];
		}
		if(sum!=sudokusum)
		{
			check=1;
			break;
		}	
	}
	for(j=0;j<size;j++)//column sum
	{ 
		sum=0;
		for(i=0;i<size;i++)
		{
			sum=sum+arr[i][j];
		}
		if(sum!=sudokusum)
		{
			check=1;
			break;
		}	
	}
	if(check==0)
	{
		printf("given matrix is sudoku");
		for(i=0;i<size;i++)
		{
			for(j=0;j<size;j++)
			{
				printf("%d \t",arr[i][j]);
			}
			printf("\n");
		}
	}
	else
		printf("not sudoku");
	return 0;
}
