#include<stdio.h>
int main(int av,char **avg)
{
	int i=0;
	char *line[100];
	FILE *fp;
	if (av < 2)
	{
		printf("expecting Atleast one file to read for : %s \n",avg[10]);
	}
	for(i=1;i<av;i++)
	{
		fp =fopen(avg[i],"r");
		if(fp == NULL)
		{
			printf("file %s Does not exsists\n",avg[i]);
		}
		while (fgets(line,100,fp) != NULL)
		{
			printf("line : %s\n",line);
		}
		fclose(fp);
	}
} 
