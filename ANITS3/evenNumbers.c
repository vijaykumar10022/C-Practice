//Event Number Handling
#include<stdio.h>
int main(){
	int size,count=0;
	scanf("%d",&size);//5
	int even_array[size];//5 * 4-->20
	for(int i=0;i<=size-1;i++){
		scanf("%d",&even_array[i]);
	}
	for(int i=0;i<=size-1;i++){
		if(even_array[i]%2==0){
			count++;
		}
	}
	printf("Even Number Count is %d\n",count);
	printf("Even Numbers are ");
	for(int i=0;i<=size-1;i++){
		if(even_array[i]%2==0){
			printf("%d ",even_array[i]);
		}
	}
	int sum=0;
	for(int i=0;i<=size-1;i++){
		if(even_array[i]%2==0){
			sum=sum+even_array[i];//sum+=even_array[i];
		}
	}
	printf("\nEven Sum is %d",sum);
	
	return 0;
}
