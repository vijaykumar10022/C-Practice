//5 4 7 8 9 3 -->3
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);//6
	if(n<100){
		int a[n];
		for(int i=0;i<=n-1;i++){
			scanf("%d",&a[i]);//5 4 7 8 9 3
		}
		int min=a[0];
		for(int i=0;i<=n-1;i++){
			if(min>a[i]){
				min=a[i];
			}
		}
		printf("%d",min);
	}
	return 0;
}
