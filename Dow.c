#include <stdio.h>

int main(int argc, char **argv)
{
	int m,n;
	int sum=0;
	printf("Enter Your Range\n");
	scanf("%d%d",&m,&n);
	int i=m+1;
	
	do{
		//printf("%d\n",i);
		sum=sum+i;
		i++;
	}while(i<n);
	
	printf("Sum of natural numbers: %d",sum);
	printf("Lastdigit :%d",sum%10);
	return 0;
}

