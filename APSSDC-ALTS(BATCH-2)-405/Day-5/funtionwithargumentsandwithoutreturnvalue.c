//1).funtion with arguments and with return value
/*7).
	Input : 789456
	Output :6
	*/
#include<stdio.h>
//funtion declaration and defination
int digitcount(int n){
		int count=0;
		while(n!=0){
			n=n/10;
			count++;
		}
		return count;
}
int main(){
	int n;
	printf("enter one value to find no of digits");
	scanf("%d",&n);
	printf("No of digits is =%d\n",digitcount(n));
	return 0;	
}

