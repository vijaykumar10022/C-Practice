//~ input:54789
//~ output:no of Digits count =5
#include<stdio.h>
int main(){
	int i,j,n;//
	printf("Enter n value:");
	scanf("%d",&n);//3
	for(i=0;i<=n-1;i++){//no of rows
		for(j=0;j<=n-1;j++){//no of col
			printf("%d ",i);
		}
		printf("\n");
	}
	
}
//~ 0 1 2
//~ 0 1 2
//~ 0 1 2

//~ 0 0 0
//~ 1 1 1
//~ 2 2 2
//~ 
//~ 
//~ i=0;0<=2
	//~ j=0;0<=2
		//~ 0
	//~ j=1;1<=2
		//~ 0
	//~ j=2;2<=2
		//~ 0
	//~ j=3;3<=2
//~ i=1;1<=2
	//~ j=0;0<=2
		//~ 1
	//~ j=1;1<=2
		//~ 1
	//~ j=2;2<=2
		//~ 1
	//~ j=3;3<=2
//~ i=2;2<=2
	//~ j=0;0<=2
		//~ 2
		//~ 
		//~ 
	//~ j=3;3<=2
	  //~ 
//~ i=3;3<=2

//~ n=10
//~ sum=0,10
//~ for(i=10;10<=1)
	//~ sum=0+10-->10
	//~ i--  9
	//~ i=9;9>=1
	//~ sum=10+9-->19
	//~ i=8;8>=1
	//~ sum=19+8-->27
	//~ i=7;7>=1
	//~ sum=27+7-->34
	//~ i=6;6>=1
	//~ sum=34+6-->40
	//~ 
	//~ 
	//~ 
	//~ i=1;1>=1;
	//~ sum=54+1-->55
	//~ i=0;0>=1
	