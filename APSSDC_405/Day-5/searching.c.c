//input:5
         8 7 9 10 20
  output:Maximum number is 20
		 Minimum number is 7
 

#include<stdio.h>
int main(){
	int size;
	printf("Enter Size of an Array:");
	scanf("%d",&size);//10
	int a[size];//a[10]
	printf("Enter Array elements:");
	for(int i=0;i<=size-1;i++){
		scanf("%d",&a[i]);//1 8 9 4 5 7 3 0 10 2 
	}
					      //8 1 9 4 5 7 3 0 10 2
					      //8 9 1 4 5 7 3 0 10 2
	for(int i=0;i<=size-1;i++){
		for(int j=i+1;j<=size-1;j++){
			if(a[i]>a[j]){//a[1]<a[1+1]-->1<9
				int temp=a[i];//temp=1,1
				a[i]=a[j];//a[0]=a[0+1]-->a[0]-->8,a[1]=a[2]->9
				a[j]=temp;//a[0+1]=1,a[1]=1
			}
		}
	}
	printf("\nAfter sorting elements:");
	for(int i=0;i<=size-1;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
