#include<stdio.h>
int main()
{
	int first=0,second=1,temp,n,m,i,flag=0;
	int af[100],ap[100];
	printf("Enter range:");
	scanf("%d",&n);
	if(n==0)
	{
		printf("%d",first);
	}
	else if(n==1)
	{
		printf("%d",second);
	}
	else 
	{
		for(i=2;i<=n;i++)
		{
			temp=first+second;
			first=second;
			second=temp;
			printf("fib%d\t,",temp);
			af[i]=temp;
			
		}
		for(int j=2;j<=m/2;j++){
				if(m % j == 0)
				{
					flag = 1;
					break;
				}
			}
			if (flag==0){
				printf("prime:%d\t,",m);
				for(i=0;i<=m;i++){
					ap[i]=m;
				}
			}
		
		
	}
	
	return 0;
}
