#include<stdio.h>
int main()
{
	int choice,r,d;
	scanf("%d",&choice);
	if(choice==1){
		scanf("%d",&r);
		printf("%d",r/70);
	}
	else if(choice==2){
		scanf("%d",&d);
		printf("%d",d*70);
	}
	else{
		printf("Option is incorrect");
	}
	return 0;
}
