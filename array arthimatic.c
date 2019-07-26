#include <stdio.h>
int * mathop(int a,int b)
{
	int c=a+b;
	int d=a-b;
	int e=a*b;
	int f=a/b;
	int g=a%b;
	int h[]={c,d,e,f,g};
	int n=sizeof(h)/sizeof(int);
	printf("\n The No.of Elements in the array are %d ",n);
	return h;
}
int main()
{
	int a,b,n;
	int *res;
	//int q;
	printf("\n Enter the value of a : ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	p=mathop(a,b);
	printf("\n Enter the no.of elements in array");
	printf("\n Enter the no.of elements in array");
	printf("\n Enter the no.of elements in array");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("%d \n",*(p+i));
	}
	return 0;
}
