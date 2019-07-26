#include<stdio.h>
int smatrix(int m,int n)
{
	int a[m][n],k,l,inValue=1,i,j;
	int rows=m,columns=n;
	k=0;
	l=0;
	while(k<m && l<n)
	{
		
		for(i=l;i<n;i++)//kth row filling in forward direction until maximum column n value
		{
			a[k][i]=inValue;
			inValue++; 
		}
		
		for(i=k+1;i<m;i++)// n-1 th column filling in downward direction until   maximum  row m value
		{
			a[i][n-1]=inValue;
			inValue++;	
		}
	  k++; //incrementing the intial row value 
	if(k<m)//condition is used to check either all rows filled or not
	{
		for(i=n-2;i>=l;--i)//m-1 th row filling in backward direction until lth column
		{
			
			a[m-1][i]=inValue;
			inValue++;	
		}
		m--;//decrement the maximum row size value for next while lop
	}
	n--;
	if(l<n)
	{
		for(i=m-1;i>=k;i--)
		{
			a[i][l]=inValue;
			inValue++;
		}
		l++;
	}
	
}
		for(i=0;i<rows;i++)
		{	
			for(j=0;j<columns;j++)
			{
				//sum=sum+a[i][j];
				printf("%d \t",a[i][j]);
			 
			}
			printf("\n");
		
		}
	return 0;
}
	
int main()
{
	int m,n;
	printf("enter m and n values");
	scanf("%d %d",&m,&n);
	smatrix(m,n);
	return 0;
}
