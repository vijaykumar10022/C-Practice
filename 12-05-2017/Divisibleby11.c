#include<stdio.h>
int main(){
	int s,e,sum=0;
	scanf("%d%d",&s,&e);
	for(int i=s;i<=e;i++){
		if(i%11==0&&i%2!=0){
			int temp=i;
			while(temp!=0){
				int last=temp%10;
				sum=sum+last;
				temp=temp/10;
			}
			printf("%d-->%d\n",i,sum);
			sum=0;
		}
	}
	return 0;
}
