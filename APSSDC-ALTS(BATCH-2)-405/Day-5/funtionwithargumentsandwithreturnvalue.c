//2).funtion with arguments and witout return value
	//reding values with in main only
/*7).
	Input rows: 5
	Input columns: 5
	Output
	11111
	11111
	11111
	11111
	11111*/
#include<stdio.h>
//funtion declaration and defination
void  pattern(int s){//funtion defination with in argum are called formal arguments / signatures
	int i,j;
	for(i=0;i<=s-1;i++){
		for(j=0;j<=s-1;j++){
			printf("1");
		}
		printf("\n");
	}
}
int main(){
	int n;
	int times;
	printf("Enter no of Times to print different patters:");
	scanf("%d",&times);
	for(int i=0;i<=times-1;i++){
		printf("Enter your pattern size");
		scanf("%d",&n);
		pattern(n);//
	}
	return 0;	
}

