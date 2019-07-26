#include<stdio.h>
int main() {
	int n,k=1;
	scanf("%d",&n);
	long l;
	for(int i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			for(int j=1;j<=2*i-1;j++)
			{
				if(i%2!=0&&j%2==0)
				{
					printf("*");
				}
				else
				{
					printf("%d",k);
					k++;

				}
			}
			printf("\n");
		}
		else
		{
			l=((i*i+i)/2);
			for(int j=1;j<=2*i-1;j++)
			{
				if(i%2==0&&j%2==0)
				{
					printf("*");
				}
				else
				{
					printf("%ld",l);
					l--;
					k++;
				}
		}
		printf("\n");
	}
}
}
