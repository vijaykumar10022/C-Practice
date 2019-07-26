//C program to find perimeter of a rectangle
//perimeter =2(l+w)
#include<stdio.h>
int main(){
	int l,w;
	printf("Enter Length of Rectangle");
	scanf("%d",&l);
	printf("Enter Width of Rectangle");
	scanf("%d",&w);
	int per;
	per=2*(l+w);
	printf("Perimeter of Rectangle is %d",per);	
return 0;
}
