#include<stdio.h>
void read(int *p,int *n){
	for(int i=0;i<=*n-1;i++){
		scanf("%d",p+i);//100 104 105
	}
}
void display(int *p,int *n){
	for(int i=0;i<=*n-1;i++){
		printf("index %d ,address %p,value %d\n ",i,p+i,*(p+i));//100 104 105
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	read(a,&n);
	display(a,&n);
return 0;	
}
