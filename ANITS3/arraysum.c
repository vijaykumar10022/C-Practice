#include<stdio.h>
int main()
{
	FILE *input=fopen("input.txt","r");
	int n,i,sum=0;
	fscanf(input,"%d",&n);
	//scanf("%d",&n);
	int a[n];//arr[5]
	//printf("%d",sizeof(a));
	for(i=0;i<n;i++)
	{
		fscanf(input,"%d",&a[i]);
		//scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nSum of Array elements are:%d",sum);
	fclose(input);
	return 0;
}
