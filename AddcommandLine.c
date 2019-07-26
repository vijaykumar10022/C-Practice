#include<stdio.h>
#include<stdlib.h>
int main(int av,char **aga)
{
	int i,sum;
	sum=0;
	printf("value of av : %d\n",av);
	for(i-0;i<av;i++)
	{
			printf("Value of av[%d] is : %d \n",i,atoi(aga[i]));
			sum=sum+atoi(aga[i]);
			
		
	}	
	printf("sum : %d",sum);
	
	}
