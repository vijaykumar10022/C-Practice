//4).funtion without arg and without return value
			//reding sub
			//display sub
/*13).input:5
    output:
	     +    
	     +
	 + + + + +
	     +
	     +*/
#include<stdio.h>
void pattern(int n){
	
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==(n/2)+1 || j==(n/2)+1){
				printf("+ ");
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
}
int main(){
	int n;
	scanf("%d",&n);
	if(n%2!=0){
		pattern(n);
	}
	else{
		printf("Your Entered (%d)value is even value so to pass odd value\n",n);
		printf("Enter Odd Value");
		scanf("%d",&n);
		pattern(n);
	}
	return 0;	
}

