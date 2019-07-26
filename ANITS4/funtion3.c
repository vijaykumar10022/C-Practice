//3).funtion with arg and funtion with out return values
#include<stdio.h>
void digit_to_Word(int num)//formal parameters
{
	int t=num;
	int rev=0;
	while(num)//n!=0
	{	rev=rev*10;
		rev=rev+num%10;
		//rev=rev*10+n%10;//
		num=num/10;
	}
	printf("Reverse of given %d number is %d\n%d:",t,rev,t);
	while(rev){
		int last=rev%10;
	switch(last){
		case 0:printf("ZERO ");break;
		case 1:printf("ONE ");break;
		case 2:printf("TWO ");break;
		case 3:printf("THREE ");break;
		case 4:printf("FOUR ");break;
		case 5:printf("FIVE ");break;
		case 6:printf("SIX ");break;
		case 7:printf("SEVEN ");break;
		case 8:printf("EIGHT ");break;
		case 9:printf("NINE ");break;
		
	}
		rev=rev/10;
	}
	
}
int main(){//57
	int n;
	scanf("%d",&n);
	digit_to_Word(n);//Actual Argument or parameter
return 0;	
}
