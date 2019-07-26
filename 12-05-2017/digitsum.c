#include<stdio.h>
int main(){
	int n,sum=0,count=0;
	scanf("%d",&n);//321
	while(n!=0){//321!=0(T),32!=0(T),3!=0(T),0!=0(F)
		int last=n%10;//-->321%10-->1,32%10-->2,3%10-->3
		sum=sum+last;//0+1-->1,1+2-->3+3-->6
		n=n/10;//321/10-->32,32/10-->3,3/10-->0
		count++;
	}
	printf("%d\n",sum);
	printf("Count is %d\n",count);
		return 0;
}
