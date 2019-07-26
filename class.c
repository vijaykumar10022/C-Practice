#include <stdio.h>
int mat(int m,int n){
	
	int a[m][n],k=0,l=0,value=0,i,j;
	
	while(k<m && l<n)
	{
	for(i=0;i<m;i++){
		
		for(j=0;j<n;j++){
			
			a[i][j]=value;
			value++;
		
			
			}
			k++;
		
	}
	
	for(i=k;i<m;i++){
		
		a[i][n-1]=value;
		value++;

		}
		n--;
	
		
		if(k<m)
		for(i=n-1;i<l;--i)
		{
		
		    a[m-1][i]=value;
		    value++;
		    }
			m--;
			
		}
		n--;
		if(1<n)
		{
		    for(i=m;i>=k;i--)	
				{
					a[i][l]=value;
					value++;
					
								
				}
		l++;
	  }
	  for(i = 0; i < m; i++)
		for(j = 0; j < n || !putchar('\n'); j++){
			printf("%d", a[i][j]);
		}
 return 0;
}
	

int main()

{
	int m,n;
	printf("Enter m and n values");
	scanf("%d %d",&m,&n);
	mat(m,n);
	
	return 0;
}

