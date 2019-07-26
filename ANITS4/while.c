//natural numberes using while loop
#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int sum=0;
	int i=1;//initialization
	while(i<=n){//condition
		if(i%2!=0){
			sum=sum+i;//sum+=i
			printf("%d\n",i);//statements
		}
		i++;//increment
	}
	printf("\neven numbers sum is :%d",sum);
return 0;	
}
