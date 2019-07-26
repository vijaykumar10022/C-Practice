#include<stdio.h>
int main(int ac,char *av[])
{
	int row,col,i,j,mc,tc=0;
	char mat[110][110];
	while(scanf("%d %d\n",&row,&col)==2)
	{
		if((row==0)&&(col==0))
		break;
		if(tc!=0)
		printf("\n");
		tc++;
		for(i=0;i<row;i++)
		{
			fgets(mat[i],103,stdin);
		}
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				if(mat[i][j]=='*')
				continue;
				mc=0;
				if((i-1>=0)&&(j-1>=0)&&(mat[i-1][j-1]=='*'))
				mc++;
				if((i-1>=0)&&(mat[i-1][j]=='*'))
				mc++;
				if((i-1>=0)&&(j+1<col)&&(mat[i-1][j+1]=='*'))
				mc++;
				if((j+1<col)&&(mat[i][j+1]=='*'))
				mc++;
				if((i+1<row)&&(j+1<col)&&(mat[i+1][j+1]=='*'))
				mc++;
				if((i+1<row)&&(mat[i+1][j]=='*'))
				mc++;
				if((i+1<row)&&(j-1>=0)&&(mat[i+1][j-1]=='*'))
				mc++;
				if((j-1>=0)&&(mat[i][j-1]=='*'))
				mc++;
				mat[i][j]='0'+mc;
			}
		}
		printf("Field#%d:\n",tc);
		for(i=0;i<row;i++)
		{
			printf("%s ",mat[i]);
		}
	}
	return 0;
}
