#include<stdio.h>
int main(){
	char s[100];
	gets(s);

	for(int i=0;i<=sizeof(s)-1;i++){
		if(s[i]==' '){
			printf("\n");
		}
		else{
			printf("%c",s[i]);
		}
		
	}
	
}
