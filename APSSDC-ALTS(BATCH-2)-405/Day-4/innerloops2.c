//~ input: 4
/*
 1  2  3  4  5
 6  7  8  9 10
11 12 13 14 16
17 18 19 20 21
22 23 24 25 26
27 28 29 30 31*/
#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	int temp=1;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			if(temp>=31){
				break;
			}
			else{
				printf("%2d ",temp);
				temp++;
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

			
