//~ 1).strcpy
//~ 2).strrev
//~ 3).strlen
//~ 4).strupr
//~ 5).strlwr
//~ 6).strcat
//~ 7).strcmp
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	char b[100];
	fgets(a,sizeof(a),stdin);
	fgets(b,sizeof(b),stdin);
	if(strcmp(a,b)==0){
				printf("Both are equal");
		}
	else 
	{	
		printf("Not equal");
	
	}
	printf("\n");
	return 0;
}
