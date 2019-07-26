#include<stdio.h>
int main(){
FILE *file =fopen(("d:\\C\C Practice","r");
if(file==NULL)
	{
		printf("Error opening a file.....");
		return 1;
	}
	int ch = fgetc(file);
	printf("%c",ch);
	fclose(file);
	return 0;
}
