//functions
#include <stdio.h>

int gratest(int a,int b, int c);
int sum();
int a,b,c;
int main()
{
	int r1,r2,n;
	r1 = sum();
	printf("Sum Of first Passing Parameters");
	printf("%d \n",r1);
		
	r2 = sum();
	printf("Sum Of first Passing Parameters");
	printf("%d \n",r2);
	printf("Gratest Number");
	printf("Enter the First Number: ");
	scanf("%d",&a);
	printf("Enter the Second Number: ");
	scanf("%d",&b);
	printf("Enter the Third Number: ");
	scanf("%d",&c);
	 n = gratest(a,b,c);
	 printf("Gratest of %d , %d & %d = %d\n",a,b,c,n);
	
	return 0;
}
int sum()
{
	
	printf("Enter the First Number: ");
	scanf("%d",&a);
	printf("Enter the Second Number: ");
	scanf("%d",&b);
	printf("Enter the Third Number: ");
	scanf("%d",&c);
	//printf("Sum of %d , %d & %d is %d ",a,b,c,a+b+c);
	
	return a+b+c;
	
}

int gratest(int a,int b, int c)
{

	if (a>b)
		if(a>c)
		   return a;
		else
		   return c;
    else 
        if (b>c)
              return b;
         else
            return c;
}
	   
	
