#include <stdio.h>
#include <math.h>
int main()
{ 
	float p,r,t,i;
	scanf("%f%f%f",&p,&r,&t);
	i=p*(pow((1+r/100),t));
	printf("%f",i);
	return 0;
	}

