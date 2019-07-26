//~ inputs:
//~ 3--> testcases
//~ 5 3
//~ 1 2 3 4 5-->5
//~ 5 4
//~ 1 2 3 4 5-->3
//~ 5 8
//~ 1 2 3 4 5-->0
//~ output:
//~ 5
//~ 3
//~ 0
#include<stdio.h>
int main(){
	int testcases,sum=0;
	int per,boxes;
	scanf("%d",&testcases);
	for(int t=0;t<testcases;t++){
		scanf("%d%d",&per,&boxes);
		int chocs[per];
		sum=0;
		for(int i=0;i<per;i++){
			
			scanf("%d",&chocs[i]);
			sum=sum+chocs[i];
		}
		if(sum%boxes==0){
			printf("%d",sum/boxes);
		}
		else{
			for(int i=0;i<per;i++){
				sum=sum-chocs[i];
				if(sum%boxes==0){
					printf("%d",sum/boxes);
					break;
				}
				
			}
		}
	}
		return 0;
}




//6
//10  20 30 40 50 60
//0    1       2     3     4     5

//2
//25

//10 20 25 30 40 50 60
//0    1      2     3     4     5    6









