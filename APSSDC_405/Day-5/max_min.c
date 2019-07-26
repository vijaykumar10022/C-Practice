//input:5
         //~ 8 7 9 10 20
  //~ output:Maximum number is 20
		 //~ Minimum number is 7
 

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
	int max=a[0];//0,5
	int min=a[0];
	//values = 5 1 2 3 4
	for(int i=0;i<=size-1;i++){
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<min){
			min=a[i];
		}
	}
	printf("Maximum =%d\n",max);
	printf("Minimun =%d\n",min);
	return 0;
}
