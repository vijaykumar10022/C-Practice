#include<stdio.h>
int main()
{
	int size,i,pos=0,neg=0;
	scanf("%d",&size);
	int a[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\npositive values:");
	for(i=0;i<size;i++)
	{
		if(a[i]>0)
		{
			printf("%d ",a[i]);
			pos++;
		}
	}
	printf("\nnegative values:");
	for(i=0;i<size;i++)
	{
		if(a[i]<0)
		{
			printf("%d ",a[i]);
			neg++;
		}
	}	
	printf("\npositive values count=%d\n",pos);
	printf("negative values count=%d",neg);
	return 0;
}




//5
//18 74 33 19 17  









