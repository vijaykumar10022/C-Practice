#include <stdio.h>
#include<string.h>
void matcharray(char a[]){
	int len=strlen(a);
	for(int i=0;i<strlen(a);i++){
		if(a[i]=='{'&&a[len--]=='}'){
			printf("sucess");
			break;
		}
		else printf("false");
	}
}
int main(int argc, char **argv)
{
	char a[100];
	printf("Enter String");
	gets(a);
	matcharray(a);
	return 0;
}

