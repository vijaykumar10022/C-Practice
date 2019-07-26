#include<stdio.h>    
int main(void)  
{  
	int a[10][10],r,c,i,j;  
	printf("enter the number of row=");  
	scanf("%d",&r);  
	printf("enter the number of column=");  
		scanf("%d",&c);  
	printf("enter the first matrix element=\n");  
	for(i=0;i<r;i++)  
	{  
	   for(j=0;j<c;j++)  
		{  
			scanf("%d",&a[i][j]); 
			printf("First Matrix %u",a[i][j]) ;
		}  
    }
    
}
