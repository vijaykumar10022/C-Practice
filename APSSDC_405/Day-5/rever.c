//To convert revese of number  for given number
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);//7894-->4987
	int reverse=0;//0
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
	}
	//printf("%d\n",reverse);//4987
	while(reverse>0){
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
			case 9:printf("NINE ");
					break;
		}
		reverse=reverse/10;
	}
	return 0;
}
