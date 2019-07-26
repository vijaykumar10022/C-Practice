#include<stdio.h>
#include<stdlib.h>
int main(int c , char * cv[])
{
	float pie=3.14;
	int d=atoi(cv[1]);
	float r=d/2;
	printf("\nthe radius is %f ",r);
	float area=pie*r*r;
	printf("\nthe area is %f",area);
    return 0;
}
