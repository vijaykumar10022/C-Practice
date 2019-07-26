//Funtions with out arguments with return value
//3n+1
//~ input:22
//~ output:16
#include<stdio.h>
int srit2(int n);//Funtion declaration
int main(){
	int n;
	printf("Enter n Value");
	scanf("%d",&n);
	printf("Count is %d",srit2(n));//Funtion calling
	return 0;
}
//Funtion defination
int srit2(int n){
	
	int count=1;
		while(n!=1)
		{
			if(n%2==0)
			{
				n=n/2;
			}
			else
			{
				n=3*n+1;
			}
			count++;
		}
		return count;
}
