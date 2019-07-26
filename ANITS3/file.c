//~ 1---->file pointer
//~ 2---->file open
//~ 3--->insert data into file
//~ 4--->read data from file
//~ 5--->file close



























+



#include<stdio.h>
int main()
{
	FILE *hari;
	char s[100];
	hari=fopen("2.txt","r");
	if(hari==NULL)
	{
		printf("Not created");
	}
	else
	{
		printf("File created");
		fgets(s,100,hari);
		fputs(s,stdout);
	}
	fclose(hari);
	return 0;
}







