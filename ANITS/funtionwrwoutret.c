//-->funtion with argument and with out return value
#include<stdio.h>
void char_symbols(int s,int e){
	for(int i=t;i<=u;i++){
		printf("%d).%c\n",i,i);
	}
}
int main(){
	int start,end;
	printf("Enter Your Range");
	scanf("%d%d",&start,&end);
	char_symbols(start,end);
	return 0;
}
