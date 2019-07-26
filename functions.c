#include<stdio.h>
//defination
float diameter(int r)//Formal Parameters or argumetns
{
	return 2*r;
}
float circumference(int r){
	float pi=3.14;
	return 2*pi*r;
}
float area(int r){
	float pi=3.14;
	return pi*r*r;
}

int main(){
	int radius;
	printf("Enter radius: ");
	scanf("%d",&radius);
	
	printf("Diameter of circle %f\n",diameter(radius));
	printf("Circumference of circle is %f\n",circumference(radius));
	printf("Arear of Circle is %f",area(radius));
	//Calling
	//Actual Parameters or Arguments
	
return 0;
}
