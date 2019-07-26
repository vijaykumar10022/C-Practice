//~ 4).input:1478
   //~ output:8741 
   //~ input:101
   //~ output:101 -->palindrome
   
   
   
   //~ 12345%10-->5
   //~ 54321
   //~ 54321%10-->1
   
#include<stdio.h>
int main(){
	int n,reverse=0;
	scanf("%d",&n);
	while(n!=0){//n>0
		reverse=reverse*10+n%10;
		n=n/10;
	}
	printf("Reverse = %d\n",reverse);
	while(reverse!=0){
		switch(reverse%10){
			case 0:printf("ZERO ");
					break;
			case 1:printf("ONE ");
					break;
			case 2:printf("TWO ");
					break;
			case 3:printf("THREE ");
					break;
			case 4:printf("FOUR ");
					break;
			case 5:printf("FIVE ");
					break;
			case 6:printf("SIX ");
					break;
			case 7:printf("SEVEN ");
					break;
			case 8:printf("EIGHT ");
					break;
			default :printf("NINE ");
		}
		reverse=reverse/10;
	}
	return 0;
}
