#include<stdio.h>
int main(){
	long  int n,t,count=0;
	printf("Enter n Value:");
	scanf("%ld",&n);
	t=n;
	while(t!=0){
		count++;
		t=t/10;		
	}
	if(count==10){
		int i=10,sum=0;
		while(i!=0){
			int r=n%10;
			sum=sum+(r*i);
			i--;
			n=n/10;
		}
		if(sum%11==0){
			printf("Legal ISDN\n");
		}
		else{
			printf("Illigal ISDN\n");
		}
		printf("Sum=%d",sum);
	}
	else{
		printf("Illigal ISDN\n");
	}
	return 0;
}
