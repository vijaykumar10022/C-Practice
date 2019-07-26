//funtion with arguments and with out return value
#include<stdio.h>
void naturalnumber(int n,int m){
	int i;
	for(i=n;i<=m;i++){
		printf("%d ",i);
	}	
}
int main(){
	int n,m;
	printf("Enter Starting and Ending Values:");
	scanf("%d%d",&n,&m);
	naturalnumber(n,m);//Funtions Calling
	return 0;
}

