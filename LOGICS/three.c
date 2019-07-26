#include<stdio.h>
int main(){
	int x=0;
	int y=10;
	do{
		y--;
		++x;
	}while(x<5);
		printf("%d and %d",x,y);
return 0;
}
