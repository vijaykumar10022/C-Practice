#include<stdio.h>
int main(){
	float radius,diameter,circumference,area,pi=3.14;
	printf("Enter the Radius of the circle:");
	scanf("%f",&radius);
	diameter=2*radius;
	circumference=2*pi*radius;
	area=pi*(radius*radius);
	printf("Diameter = %f units \n",diameter);
	printf("Circumference = %f units \n",circumference);
	printf("Area = %f sq.units\n",area);
return 0;
}
