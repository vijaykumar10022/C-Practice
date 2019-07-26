//~ 6.i/p:Enter A Character:$
   //~ o/p:Given Character is SpecialCharacter Symbol.
    //~ i/p:Enter A character:5
   //~ o/p:Given Character is Number.
   //~ i/p:Enter A Character:B
   //~ o/p:Given Character is Alphabet.
   //numbers-->48-57-->0 -->9
   //Alfabets-->A-Z-->65 - 90,a - z-->97 - 122
   //Remining -->special charaters
#include<stdio.h>
int main(){
	//~ int i;
	//~ for(i=0;i<=255;i++){
		//~ printf("%d -->%c\n",i,i);
	//~ }
	char ch;
	printf("Enter A Character:");
	scanf("%c",&ch);
	if(ch>=48&&ch<=57){
		printf("Given (%c) Character is Number.",ch);
	}
	else if((ch>=65&&ch<=90) || (ch>=97&&ch<=122)){
		printf("Given (%c) Character is Alfabet.",ch);
	}
	else{
		printf("Given (%c) Character is Special symbol.",ch);
	}
	return 0;
}
