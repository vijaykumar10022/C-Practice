//3).funtion without argume and with return value
		//reding sub funtion
		//display value main
/*7).
	Input : 789456
	Output :6
	*/
#include<stdio.h>
//funtion declaration and defination
int reverse(){
	int n;
	scanf("%d",&n);
	int rev=0;
		while(n!=0){
			rev=rev*10+n%10;
			n=n/10;
		}
		return rev;
}
int main(){
	printf("Reverse =%d ",reverse());
	return 0;	
}

