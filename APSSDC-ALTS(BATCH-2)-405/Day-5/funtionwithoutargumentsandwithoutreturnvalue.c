//3).funtion without argume and with return value
		//reding sub funtion
		//display value main
/*8).Input rows: 5
	Input columns: 5
	Output
	11111-->0th row
	00000-->1st row
	11111-->2nd row
	00000-->3rd row
	11111-->4th row
	*/
	//4).funtion without arg and without return value
			//reding sub
			//display sub
#include<stdio.h>
void pattern(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<=n-1;i++){
		for(j=0;j<=n-1;j++){
			if(i%2==0){
				printf("1 ");
			}
			else{
				printf("0 ");
			}
		}
		printf("\n");
	}
}
int main(){
	pattern();
	pattern();
	return 0;	
}

