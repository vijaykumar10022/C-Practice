#include<stdio.h>
#include<string.h>
int main(){
	char ca[]={'v','i','j','a','y','\0'};
	// or 
	char c[10];
	printf("Enter Your String");
	//scanf("%s",c);
	gets(c);
	printf("char array value is :%s\n",ca);
	printf("string %s\n",c);
	
return 0;
}
