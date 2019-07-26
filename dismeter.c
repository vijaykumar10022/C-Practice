/* sf(r)
 * d=2*r
 * c=2*3.14*r
 * a=3.14*(r^2)*/
 
 #include<stdio.h>
 int main(){
	 int r;
	 printf("Enter radius");
	 scanf("%d",&r);
	 int d=2*r;
	 float c=2*(3.14*r);
	 float a=3.14*(r^2);
	 printf("Diameter = %d units\nCircumference = %f Units\nArea = %f Sq.Units",d,c,a);
	 
 return 0;
 }
