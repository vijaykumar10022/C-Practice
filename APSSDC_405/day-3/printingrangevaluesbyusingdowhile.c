//~ i/p:Enter starting value1:60
    //~ Enter ending value2:50
    //~ 
//~ o/p:Series: 
    //~ 60 59 58 57 56 55 53 52 51 50
#include<stdio.h>
int main()
{
	int n1,n2;
	printf("enter starting value1:");
	scanf("%d",&n1);
	printf("enter ending value2:");
	scanf("%d",&n2);
    do
	{
		printf("%d ",n1);
		n1--;
    }while(n1>=n2);
    return 0;
}
