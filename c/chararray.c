#include <stdio.h>
#include <stdlib.h>
void wordcount(char str[]){
	int count=0,i=0;
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		{
			count++;
		}
		i++;
	}
	printf("Count of string is %d",count+1);
}
int main(int argc, char **argv)
{
	char ch[20]={'j', 'a', 'v', 'a', 't', 'p', 'o', 'i', 'n', 't','\0'};
	char* str[1000];
	printf("Enter a string");
	int i=0;
	while(str[i]!='\0'){
		str[i]=(*char)malloc(1000);
		scanf("%s",str[i]);
		i++;
	}
	//printf("%s",str);
	int j=0;
	while(str[j]!='\0'){
		printf("%c",ch[j]);
		j++;
	}
	//~ gets(str);
	//~ puts(str);
	//~ wordcount(str);
	return 0;
}

