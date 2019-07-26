#include<stdio.h>
void sort(char s[],int si){
		for(int i=0;i<=si-1;i++){
			for(int j=i;j<=si;j++){
				if(s[i]>s[j]){
					char t=s[i];
					s[i]=s[j];
					s[j]=t;
				}
			}
		}
}

int main(){
	char s[100];
	scanf("%s",s);
	int count=0;
	for(int i=0;s[i]!='\0';i++){
		count++;
	}
	sort(s,count);
	printf("\n");
	for(int i=0;s[i]!='\0';i++){
		printf("%c",s[i]);
	}
	printf("\n");
	return 0;
}
