#include<stdio.h>
int main()
{
	FILE *fptr;
	fptr=fopen("Harideep.txt","w");
	if(fptr==NULL)
	{
		printf("Not created");
	}
	else
		printf("File created succesfully");
	fclose(fptr);
	return 0;
}
	
