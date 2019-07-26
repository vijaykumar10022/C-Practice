//find name to pass roll number
#include<stdio.h>
int main(){
	int Roll_number;
	scanf("%d",&Roll_number);//1
	if(Roll_number==1){
		printf("316126520%d-Manoj kumar",Roll_number);
	}
	else if(Roll_number==2){
		printf("316126520%d-vijay kumar",Roll_number);
	}
	else if(Roll_number==3){
		printf("316126520%d-hari kumar",Roll_number);
	}
	else if(Roll_number==4){
		printf("316126520%d-sai kumar",Roll_number);
	}
	else 
	{
		printf("No Number");
	}
return 0;	
}
