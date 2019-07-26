#include<stdio.h>
int main(){
			//0 1 2 3 4 5
	int a[6]={4,5,8,9,7,6},s;
		printf("Enter a Serching Value");
		scanf("%d",&s);
	for(int i=0;i<6;i++){
		if(s==a[i]){
		printf("%d Valu found successfully",s);
		break;
	}
		else {
		printf("Not found");
		break;
	}
	}
	
	return 0;
}
