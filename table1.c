//Write a C program to print all even numbers from 1 to n using for loop. C program to generate all even numbers between given range. Logic to print even numbers using if else and for loop in given range in C programming.
#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<=10;i++){
		for(j=1;j<=10;j++){
			printf("%d*%d=%d ",j,i,i*j);
		}
		printf("\n");
	}
}
