#include<stdio.h>


int main()
{
	int m,i,j,op;
	printf("Enter the size of a square matrix: ");
	scanf("%d",&m);
	int a[m][m];
	
	
		printf("Enter the elements into array: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Choose your option to rotate matrix. \n");
	printf("0. 0-Degrees Or 360-Degrees\n1. 90-Degrees\n2. 180-Degrees\n3. 270-Degrees\n");
	scanf("%d",&op);
	switch(op)
	{
	  case 0:
	    printf("Matrix After Rotating 0-Degrees OR 360-Degrees.\n");
	    for(i=0;i<m;i++)
		{
			for(j=0;j<m;j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
		break;	
	  case 1:
	     printf("Matrix After Rotating 90-Degrees.\n");
	     for(j=0;j<m;j++)
	     {
			for(i=m-1;i>=0;i--)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		 }
		 break; 
    case 2:
         printf("Matrix After Rotating 180-Degrees.\n");
		for(i=m-1;i>=0;i--)
		{
			for(j=m-1;j>=0;j--)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
		break;	
	case 3:
	   printf("Matrix After Rotating 270-Degrees.\n");
	   for(j=m-1;j>=0;j--)
		{
			for(i=0;i<m;i++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
		break;	
	 default: 
	     printf("Choose correct option.");
	 }

return 0;
}
