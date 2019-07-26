#include<stdio.h>
int main(){
	int option;
	printf("Enter Your Option \n 1).Arithmatic operations\n 2).Logical Operations \n 3).Relatioinal Operations \n 4).bitwise operations \n 5).Assignment Operations\n ");
	scanf("%d",&option);//405
	switch(option){
		case 1:
				printf("Enter Two Numbers to find all Arithmatic operations:");
				int first,second;
				scanf("%d%d",&first,&second);
				printf("Sum of  %d and %d is %d \n",first,second,first+second);
				printf("Difference of  %d and %d is %d \n",first,second,first-second);
				printf("Product of  %d and %d is %d \n",first,second,first*second);
				printf("Division of  %d and %d is %d \n",first,second,first/second);
				printf("Modulo Division of  %d and %d is %d \n",first,second,first%second);
				break;
		case 2:
				// AND OR NOT
				printf("Enter Two Number to perform All Logical Operations:");
				scanf("%d%d",&first,&second);//30 20
				printf("Logical AND ....\n");
				if(first>second&&second>10&&10>5&&1==1&&first!=second){
					
					printf("It is True\n");
				}
				else{
					printf("False\n");
				}
				printf("Logical OR ...\n");
				if(first>second||second>10||10<5||1!=1||first==second){
					
					printf("It is True\n");
				}
				else{
					printf("False\n");
				}
				printf("Logical Not....\n");
				if(!(first<second)||!(second<10)||!(10<5)||!(1!=1)||!(first==second)){
					printf("It is True\n");
				}
				else{
					printf("False\n");
				}
				break;
		case 3:
				// >,<,>=,<=,!=,==
				printf("Enter Two Values to perform All Relational Operations:");
				scanf("%d%d",&first,&second);//10 20
				if(second>first){
					printf("%d is Grater than %d\n ",second,first);
				}
				else
				{
					printf("%d is lesser than %d \n ",second,first);
				}
				if(first<second){
					printf("%d is lesser than %d \n",first,second);
				}
				else{
					printf("%d is Grater than %d \n",first,second);
				}
				if(first>=second){
					printf("%d is grater than or equal %d \n",first,second);
				}
				else{
					printf("%d is lesser  than  %d ",first,second);
				}
				if(first<=second){
					printf("%d is lesser than or equal %d ",first,second);
				}
				else{
					printf("%d is grater  than  %d ",first,second);
				}
				if(first==second){
					printf("%d is  equal %d ",first,second);
				}
				else{
					printf("%d is not equal %d ",first,second);
				}
				break;
		case 4:
				printf("Enter Two Value to perform bitwise operations " );
				scanf("%d%d",&first,&second);
				printf("Bitwise AND(&) -->%d\n",first&second);
				printf("Bitwise OR(|) -->%d\n",first|second);
				printf("Bitwise XOR(^) -->%d\n",first^second);
				printf("Bitwise NOT(~) -->%d\n",~(first&second));
				break;
		case 5:
				//+=,-=,*=,/=,%=
				printf("Enter Two Value to perform Assignment operations " );
				int a,b;
				scanf("%d%d",&a,&b);
				printf("+=  -->%d\n",a+=b);//a=a+b
				printf("-=  -->%d\n",a-=b);//a=a-b
				printf("*=  -->%d\n",a*=b);//a=a*b
				printf("/=  -->%d\n",a/=b);//a=a/b
				printf("%=  -->%d\n",a%=b);//a=a%b
				break;
		default : printf("Your Enter Option is incorrect\n");
		
	}
	return 0;
}






//~ cond1   cond2  result(OR)
  //~ T       T     T
  //~ T       F     T
  //~ F       T     T
  //~ F       F     F








