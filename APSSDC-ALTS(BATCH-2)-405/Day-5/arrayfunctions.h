
void readarray(int a[],int n)
{
	for(int i=0;i<=n-1;i++){
		//~ printf("Enter a[%d] position value",i);
		scanf("%d",&a[i]);
	}
}

void printarray(int b[],int m)
{
	for(int i=0;i<=m-1;i++){
		printf("%d ",b[i]);
	}
}

void addarray(int a[],int b[],int n)
{
	int i;
	for(i=0;i<=n-1;i++)
	{
		printf("%d ",a[i]+b[i]);
	}
}
