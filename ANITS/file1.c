#include<stdio.h>
int main()
{
	FILE *fptr;
	char s[100];
	fptr=fopen("VJ.txt","w");
	if(fptr==NULL)
	{
		printf("Not created");
	}
	else
	{
		printf("File  Created");
		
		printf("File created succesfully");
		printf("Enter the data to store:");
		fgets(s,100,stdin);  
		fputs(s,stdout);
		fputs(s,fptr);
	}	
	fclose(fptr);
	return 0;
}
	
