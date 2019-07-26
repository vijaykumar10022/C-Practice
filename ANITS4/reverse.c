#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int t=n;
	int rev=0;
	while(n)//n!=0
	{	rev=rev*10;
		rev=rev+n%10;
		//rev=rev*10+n%10;//
		n=n/10;
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
return 0;	
}
//~ n=458
//~ rev=0;
//~ rev=0*10-->0
//~ rev=0+458%10-->0+8-->8
//~ n=n/10-->45
//~ n=45
//~ rev=8
//~ rev=8*10-->80
//~ rev=80+45%10-->80+5-->85
//~ n=45/10-->4
//~ n=4
//~ rev=85
//~ rev=85*10+4%10-->850+4-->854
//~ n=4/10-->0


