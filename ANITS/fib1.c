// 2 20
#include<stdio.h>
int main(){
	int f=0,s=1,n,S,t;
	scanf("%d%d",&n,&S);
	
	for(int i=n;i<=S;i++){
		 t=f+s;
		 f=s;
		 s=t;
		 if(t>n&&t<S)
			printf("%d ",t);
	}
	
}
