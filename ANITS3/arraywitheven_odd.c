#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int Tarray[n];
	for(int i=0;i<=n-1;i++){
		scanf("%d",&Tarray[i]);
	}
	int ecount=0,ocount=0;
	for(int i=0;i<=n-1;i++){
		if(Tarray[i]%2==0){
			ecount++;
		}
		else
		{
			ocount++;
		}
	}
	int earray[ecount],oarray[ocount],ep=0,op=0;
	for(int i=0;i<=n-1;i++){
		if(Tarray[i]%2==0){
			earray[ep]=Tarray[i];
			ep++;
		}
		else {
			oarray[op]=Tarray[i];
			op++;
		}
	}
	printf("\nEven Number are:");
	for(int i=0;i<=ep-1;i++){
		printf("%d ",earray[i]);
	}
	printf("\nOdd Numbers are:");
	for(int i=0;i<=op-1;i++){
		printf("%d ",oarray[i]);
	}
	return 0;
}
