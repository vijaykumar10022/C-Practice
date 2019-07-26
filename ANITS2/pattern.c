#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	for(int i=1;i<=x;i++)
	{
		for(int j=1;j<=x;j++)
		{
			if(i==j || i+j==x+1)
			  printf("*");
			else
			  printf(" ");
		}
		printf("\n");
	}
	return 0;
}
	
	
Input:3
Output:	
		1 2 3
		4 5 6
		7 8 9
Input: 5			Input: 3
Output:				Output: 
		1 1 0 1	1			1 0 1
		1 1 0 1 1			0 0 0
		0 0 0 0 0			1 0 1
		1 1 0 1 1
		1 1 0 1 1	
	
		
