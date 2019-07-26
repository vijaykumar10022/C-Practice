#include<stdio.h>
struct emp
{
	int id;
	char name[20];
	double sal;
}ee;

int main()
{
	int n,i;
	printf("Enter the size of reccords to enter:\n");
	scanf("%d",&n);
	ee e[n];
	for(i=0;i<n;i++)
	{
		scanf("%d%s%lf",&e[i].id,e[i].name,&e[i].sal);
	}
	printf("Entered values are:\n");
	for(i=0;i<n;i++)
	{
		printf("Id->%d\t Name->%s\t Sal->%lf\n",e[i].id,e[i].name,e[i].sal);
	}
	return 0;
}
