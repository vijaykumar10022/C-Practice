#include<stdio.h>
int alfabetcount(char str[]){
		int acount=0;
		int i=0;
		while(str[i]!='\0'){
			if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
				acount++;
			}
			i++;
		}
		return acount;
}
int digitcount(char str[]){
		int dcount=0;
		int i=0;
		while(str[i]!='\0'){
			if(str[i]>='0'&&str[i]<='9'){
				dcount++;
			}
			i++;
		}
		return dcount;
}
int main(){
	char str[10];
	scanf("%s",str);//vijay@1234 
	printf("%d\n",alfabetcount(str));
	printf("%d",digitcount(str));
	return 0;
}
