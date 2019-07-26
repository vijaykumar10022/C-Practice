#include<stdio.h>
int main(){
	int n,b,r,max=0,count=0;
	printf("Enter No of Streets:");
	scanf("%d",&n);
	for(int i=0;i<=n-1;i++){
		printf("Enter No of Building & Rupees");
		scanf("%d%d",&b,&r);
		int bul[b];
		for(int j=0;j<=b-1;j++){
			scanf("%d",&bul[j]);
			if(bul[j]>max){
				max=bul[j];
				count++;
			}
		}
		printf("Earned =%d\n",count*r);
		count=0,max=0;
	}
	return 0;
}
