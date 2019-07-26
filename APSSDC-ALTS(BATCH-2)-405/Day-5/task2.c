//~ 2).input:5
   //~ output:
          //~ *     1       1
         //~ **    21      22
        //~ ***   321     333
       //~ ****  4321    4444
      //~ ***** 54321   55555
#include<stdio.h>
int main(){
	int n,i,j,a;
	printf("enter n value");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=n-1;j>=i;j--){
			 printf(" ");
			 
		}
		for(a=1;a<=i;a++){
			printf("%d",a);
		}
		printf("\n");
		
	}
	return 0;
}
