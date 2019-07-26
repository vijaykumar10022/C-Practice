#include<stdio.h>
int main()
{

    int ar[2][3]={{1,2,3},{4,5,6}};
    int (*ptr)[3];
    int i,j;
    ptr=ar;
    for( i=0;i<2;i++)
    {
		
		for( j=0;j<3;j++)
		{
			
			
			printf("a[%d][%d]=%d\n",i,j,*(*(ptr+i)+j));
			
	
	    }
     }
}
