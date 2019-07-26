#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void triangle (float s1,float s2,float s3,float s)
{
    s=(s1+s2+s3)/2;
    double a=sqrt(s*(s-s1)*(s-s2)*(s-s3));
    printf("the area of tri  having  s%.2f and s1 %.2f ,s2 %.2f,s3 %.2f is %.2f",s,s1,s2,s3,a);
    double k=s1+s2+s3;
    printf("the perimetert of tri having  s%.2f ands1 %.2f s2 %.2f s 3%.2f is %.2f ",s1,s2,s3,k);
}
int main(int ac,char *av[])
{
    //float area,perimeter;
    float s1,s2,s3,s;
    if(ac==4)
    {
      s1=atof(av[1]);
       s2=atof(av[2]);
       s3=atof(av[3]);
       s=atof(av[4]);
       
       triangle( s,s1,s2,s3);
       
    }
    if(ac==1)
    {
       printf("usage : %s 1 or 2 or 3 numbers\n",av[0]);
       exit (0);
    }
}
