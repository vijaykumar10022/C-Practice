#include<stdio.h>
int main()
{
	int n,s,rev=0,k,a,t,p=0,i; 
	printf("enter the number");
	scanf("%d",&n);
	a=n;
	t=a%10;
	while(t==0)
	{
		p=p+1;	
		a=a/10;
		t=a%10;
	}	
	while(n>0)
	{
		k=n%10;
		rev=(rev*10)+k;
		n=n/10;
	}
	while(rev>0)
	{
		s=rev%10;
		switch(s)
		{
			case 0: printf(" Zero");break;
			case 1: printf(" One");break;
			case 2: printf(" Two");break;
			case 3: printf(" Three");break;
			case 4: printf(" Four");break;
			case 5: printf(" Five");break;
			case 6: printf(" Six");break;
			case 7: printf(" Seven");break;
			case 8: printf(" Eight");break;
			case 9: printf(" Nine");break;
		}   
		rev=rev/10;
	}
	for(i=0;i<p;i++)
		printf(" Zero");
}

