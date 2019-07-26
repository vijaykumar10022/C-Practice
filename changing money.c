#include<stdio.h>
int minimum(int n1,int n2,int n3)
{
	int a[3]={n1,n2,n3},minim=a[0];
	for(int i=0;i<3;i++){
		if(minim>a[i])
		minim=a[i];
	}
	return minim;
}
int f(int n,int no){
	if(n==1||n==5||n==7||n==10)
	return no+1;
	if(n>5&&n<7)
	return (f(n-5,no+1));
	if(n>7&&n<10)
return (f(n-7,no+1));
if(n>10)
{
	return(minimum(f(n-7,no+1),f(n-10,no+1),f(n-5,no+1)));
}
	printf("error");
return 0;
}
int main(){
	int n,cases,a;
	printf("Enter Cases:");
	scanf("%d",cases);
	for(int i=0;i<cases;i++)
	{
		printf("Enter demand:");
		scanf("%d",n);
		printf("minimum no of bottles required are:");
		a=f(n,0);
		printf("%d \n",a);
	}
}
