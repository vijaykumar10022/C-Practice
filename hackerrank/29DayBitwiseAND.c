#include<stdio.h>
int main(){
	int T,n,k,i,j,val;
	scanf("%d",&T);
	while(T>0){
		int maximum=0;
		scanf("%d%d",&n,&k);
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				val=i&j;
				if((val>maximum)&&(val<k))
					maximum=val;
			}
		}
		printf("%d\n",maximum);
		T--;
	}
return 0;
}
