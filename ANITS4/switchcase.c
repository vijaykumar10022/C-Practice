//find name to pass roll number using switch case mechanism
//10 58-->68-->lst:8-->Eight
#include<stdio.h>
int main(){
	int num1,num2;
	scanf("%d%d",&num1,&num2);//201
	//~ total=num1+num2;
	//~ last=total%10;
	switch((num1+num2)%10){
	case 0:printf("ZERO");break;
	case 1:printf("ONE");break;
	case 2:printf("TWO");break;
	case 3:printf("THREE");break;
	case 4:printf("FOUR");break;
	case 5:printf("FIVE");break;
	case 6:printf("SIX");break;
	case 7:printf("SEVEN");break;
	case 8:printf("EIGHT");break;
	case 9:printf("NINE");break;
	default :
			printf("no Number ");
	}
	
return 0;	
}
