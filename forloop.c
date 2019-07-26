//m=10 n=100
#include<stdio.h>

int main(){
	
	int i,m,n;
	//int sum=0;
	printf("Enter Your range to print in b/w values\n");
	scanf("%d%d",&m,&n);
	for(i=n-1;i>m;i--){
			printf("%d\t",i);
	}
	//~ printf("Sum of Natural numbers given range : %d\n",sum);
	//~ printf("Lastdigit :%d",sum%10);
return 0;
}
