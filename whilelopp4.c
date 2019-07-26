#include <stdio.h>

int main(int argc, char **argv)
{
	int m,n;
	int sum=0;
	printf("Enter Your Range\n");
	scanf("%d%d",&m,&n);
	//To print even numbers with in range
	int i=m+1;
	while(i<n)
	{
		if(i%2!=0)
		{
			//printf("%d\t",i);
			sum+=i;//sum=sum+i
			
		}
		i++;
	}
	 printf("Sum of odd numbers given Range :%d\n",sum);
	//~ printf("Lastdigit :%d",sum%10);
	return 0;
}

