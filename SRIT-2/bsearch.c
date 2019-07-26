#include<stdio.h>
int main()
{
	int size,i,search;
	printf("Enter size:");
	scanf("%d",&size);
	int b[size];
	for(i=0;i<=size-1;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("Enter search element:");
	scanf("%d",&search);
	int first=0,last=size-1;
	int middle=(first+last)/2;
	while(first<=last)
	{
		if(b[middle]<search)
		{
			first=middle+1;
		}
		else if(b[middle]==search)
		{
			printf("%d element found at %d location",search,middle+1);
			break;
		}
		else
		{
			last=middle-1;
		}
		middle=(first+last)/2;
	}
	if(first>last)
	{
		printf("%d element not found",search);
	}
	return 0;
}







