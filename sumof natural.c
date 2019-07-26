#include<stdio.h>
int sumofnatural(int a,int b){
	int sum=0;
	for(int i=a;i<=b;i++){
		sum+=i;//sum=sum+i
	}
	return sum;
}
int main(){
	printf("Enter Your Range of values");
	int n,m;
	scanf("%d%d",&n,&m);
	int sum=sumofnatural(n,m);
	printf("sum of Natural numbers is %d\n",sum);
return 0;
}
