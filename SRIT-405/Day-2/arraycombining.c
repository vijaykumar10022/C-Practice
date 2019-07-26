#include<stdio.h>
int main(){
	int size,ieven=0,iodd=0;
	printf("Enter Size");
	scanf("%d",&size);
	int even[size];
	int odd[size];
	int even_odd[size*2];
	for(int i=0;i<=(size*2)-1;i++){
		if(i%2==0){
			even[ieven]=i;
			ieven++;
		}
		else{
			odd[iodd]=i;
			iodd++;
		}
	}
		int i;
		ieven=0;
	for( i=0;i<=(size)-1;i++){
			even_odd[i]=even[ieven];
			ieven++;
	}
	iodd=0;
	for(i=i;i<=(size*2)-1;i++){
		even_odd[i]=odd[iodd];
		iodd++;
	}
	printf("Even Array Elements:");
	for(int i=0;i<=size-1;i++){
		printf("%d ",even[i]);
	}
	printf("\nOdd Array Elements:");
	for(int i=0;i<=size-1;i++){
		printf("%d ",odd[i]);
	}
	printf("\nEven_Odd Array Elements:");
	for(int i=0;i<=(size*2)-1;i++){
		printf("%d ",even_odd[i]);
	}
	return 0;
}
