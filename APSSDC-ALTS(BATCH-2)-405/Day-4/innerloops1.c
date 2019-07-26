#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=n;i>=1;i--){//-->no of rows
		for(j=n;j>=1;j--){//-->no of colms
			if(i==1||i==n||j==1||j==n){
				printf("%d ",i);
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}
/*i=1;1<=3
	j=1;1<=3
		1
	j=2;2<=3
		2
	j=3;3<=3
		3
	j=4;4<=3
	
  i=2;2<=3
	j=1;1<=3
		1
	j=2;2<=3
		2
	j=3;3<=3
		3
	j=4;4<=3
  i=3;3<=3
	j=1;1<=3
		1
	j=2;2<=3
		2
	j=3;3<=3
		3
	j=4;4<=3
i=4;4<=38*/

			
