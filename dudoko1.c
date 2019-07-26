#include<stdio.h>

	void report(char *s,int i,int j)
	{
	printf("\nThe sudoku is INCORRECT");
	printf("\nin %s. Row:%d,Column:%d",s,i+1,j+1);
	}

	int main()
	{
	int i,j,a[4][4];
	char c;
	int si,sj,flag;
	printf("\nEnter the sudoku");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++)
		{
		scanf("%c",&c);
		a[i][j]=c-'0';
	   }
	}
	
	for(i=0;i<4;i++)
		{
		flag=0x0000;
		for(j=0;j<4;j++)
			flag|=1<<(a[i][j]-1);
		if(flag!=0x01FF)
			report("row",i,j-1);
		}

	
	for(j=0;j<4;j++)
		{
		flag=0x0000;
		for(i=0;i<4;i++)
			flag|=1<<(a[i][j]-1);
		if(flag!=0x01FF)
			report("col",i-1,j);
		}
	
	for(si=0;si<3;si++)
		{
		for(sj=0;sj<3;sj++)
			{
			flag=0x0000;
			for(i=0;i<3;i++)
				{
				for(j=0;j<3;j++)
					flag|=1<<(a[si*3+i][sj*3+j]-1);

				}
			if(flag!=0x01FF)
					report("square",si*3+i-1,sj*3+j-1);
			}
		}
	printf("\nThe sudoku is correct");
	}
