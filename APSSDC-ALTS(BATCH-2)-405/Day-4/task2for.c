//~ input:10
	   //~ 1+4  2+6 3+ 8  4+10 5 +12 6+14 7+16 8+18 9+20 10+22
//~ output:5   8    11  14  17  20 23 26 29 32
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1,temp=4;i<=n;i++,temp=temp+2){
		printf("%d ",i+temp);
	}
	return 0;
}
