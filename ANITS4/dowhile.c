//display natural numbers using do while loop
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=n;
	do
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
			//i+=1;//i=i+1;
		}
		i--;
	}while(i>=0);
	
return 0;	
}
