#include <stdio.h>
int main()
{
	int s[20][20],i,j;
	int lc,hc,lr,hr,r,c,cnt,m,n;	
	printf("\nEnter r & c :");
	scanf("%d %d",&r,&c);
	for(i=0;i<m;i++){
		
		for(j=0;j<n;j++){
			scanf("%d",s[i][j]);
			}
		}
	cnt = 1;
	lr = 0; lc = 0;
	hr = r - 1;
	hc = c - 1;
	while ( lr <=hr && lc <= hc )
	{
		i = lr;
		for(j=lc;j <= hc;j++)
		{
			s[i][j] = cnt++;	
			j = hc;
			for(i=lr+1;i<=hr;i++)
			{
				s[i][j] = cnt++;	
				if( lr != hr )
				{
					i = hr;
					for(j=hc-1;j>=lc;j--)
					s[i][j] = cnt++;
				}	
				if ( lc != hc )
				{
					j = lc;
					for(i=hr-1;i>lr;i--)
					s[i][j] = cnt++;
				}
			}
		}
		lr++;lc++;
		hr--;hc--;
		
	}//while	
	printf("\nSpirally filled matrix is\n");
	for(i=0;i < r;i++)
	{
		for(j=0;j < c;j++)
		{
			printf("%4d",s[i][j]);
			printf("\n");
		}		
	}
	return 0;
} // main
