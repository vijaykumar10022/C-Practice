#include<stdio.h>
#include<string.h>
int main(){
	char c[10];
	//char a[10];
	printf("Enter Your String");
	//scanf("%s",c);
	gets(c);
	//~ printf("Enter Another string");
	//~ gets(a);
	
	printf("string length is %d\n",strlen(c));
	//printf("string copy %s\n",strcpy(a,c));
	//printf("string copy  of a ");
	//puts(a);
	//printf("Concatination of two strings %s",strcat(c,a));
	//printf("string reverse :%s",strrev(c));
	printf("UPR string is %s",strupr(c));
	
return 0;
}
