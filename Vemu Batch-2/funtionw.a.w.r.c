//~ input:45678
//~ output:5
//->funtion w.arg and with out return value
#include<stdio.h>
void Digit_count(int n){//12345
	int count=0,sum=0;
		while(n!=0){//12345!=0(T),1234!=0(T),123!=0(T),12!=0(T),1!=0(T),0!=0(F)
		int t=n%10;
		sum=sum+t;
		n=n/10;//12345/10-->1234,1234/10-->123,123/10-->12,12/10-->1,1/10-->0
		count++;//1,2,3,4,5
	}
	printf("Coutn is %d ",count);
	printf("\nSum is %d \n",sum);
}
int main(){
	int n;
	scanf("%d",&n);//12345-->1+2+3+4+5-->15
	Digit_count(n);//12345
	scanf("%d",&n);//987456
	Digit_count(n);
	return 0;
}
