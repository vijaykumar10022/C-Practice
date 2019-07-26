#include<stdio.h>
int main(){
	//~ printf("A-->%d\n",'A'); // 65
	//~ printf("Z-->%d\n",'Z');//90
	//~ printf("a-->%d\n",'a');//97
	//~ printf("z-->%d\n",'z');//122
	int n,temp=65;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			printf("%c ",temp);
			temp++;
		}
		printf("\n");
	}
	
		return 0;
}
