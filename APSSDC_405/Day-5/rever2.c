//To convert revese of number  for given number
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);//7894-->4987
	int reverse=0;//0
	int count=0;
	while(n>0){//7894>0(T),789>0(t),78>0(T),7>0(T),0>0(f)
		reverse=reverse*10+n%10;//0*10+7894%10
								//0+4-->4
								//4*10+789%10
								//40+9-->49
								//49*10+78%10
								//490+8-->498
								//498*10+7%10
								//4980+7-->4987
		n=n/10;//7894/10-->789,789/10-->78,78/10-->7,7/10-->0
		count++;
	}
	printf("Reverse =%d\n",reverse);
	printf("Count = %d \n",count);
	int sum=0;//0,16,52
	while(reverse>0){//7894>0(t),789>0(t)
		int r=reverse%10;//7894%10-->4,789%10-->9
		sum=sum+r*count;//0+4*4-->16,16+9*4-->16+36-->52
		reverse=reverse/10;//7894/10-->789,
	}
	printf("Sum = %d",sum);
	return 0;
}
