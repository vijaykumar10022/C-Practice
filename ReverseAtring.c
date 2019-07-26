#include<stdio.h>
int main(){
	char a[100];
	printf("Enter a String\n");
	gets(a);
	strrev(a);
	printf("Reverse of string is %s \n",a);
	
	}
