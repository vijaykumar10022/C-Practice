#include<stdio.h>
int main()
{
	int m,n;
	printf("enter m and n:");
	scanf("%d%d",&m,&n);
	for(int i=1;i<=m;i++)
	{
		printf("\n");
		for(int j=1;j<=n;j++)
		{
			if(i==j || (i+j)==m+1)
			printf("%d",i);
			else
			printf(" ");
		}
			/*1     1
			  2 2 
			   3
			  4 4
			5     5*/    

}
}
