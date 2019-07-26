//~ input:4
//~ output:****
	   //~ ***
	   //~ **
	   //~ *
#include<stdio.h>
int main(){
	//int r,c;
	char j,i;
	//scanf("%d%d",&r,&c);//4
	for(j='a';j<='e';j++){
		for(i='a';i<=j;i++){
			printf("%c",i);
		}
		printf("\n");
	}
return 0;	
}
//~ j=0;0<=3
	//~ i=0;0<=0
		//~ *
	//~ i=1;1<=0
	//~ j=1;1<=3
		//~ i=0;0<=1
			//~ *
		//~ i=1;1<=1
			//~ *
		//~ i=2;2<=1
	//~ j=2;2<=3
		//~ i=0;0<=2
		//~ 




