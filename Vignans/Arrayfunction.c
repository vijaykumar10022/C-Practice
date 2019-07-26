#include<stdio.h>
void readmarks(int m[],int n)
{
	int i;
	printf("Please enter %d marks",n);
	for(i=0;i<n;i++)
	scanf("%d",m+i);
}
void printmarks(int m[],int n)
{
	int i;
	printf("Marks in the array are %d :\n",n);
	for(i=0;i<n-1;i++)
	//printf("%d\n",m[i]);
	printf("%d\n",m[n-1]);
}
int search(int m[],int n,int se)
{
	int i;
	for(i=0;i<n;i++)
		if(se==m[i]) return i;
		return -1;
}
		
		
	
int main(int ac,char *av[])
{
	int marks[10],n,se,r;
	printf("Enter number of marks(n value):");
	scanf("%d",&n);
	readmarks(marks,n);
	printmarks(marks,n);
	while(1)
	{
		printf("Enter a number to search :");
		scanf("%d",&se);
		if(se==0) break;
		r=search(marks,n,se);
		if(r==-1)
			printf("%d is not found in the array\n",se);
			else
			printf("%d is found at index %d\n",se,r);
	 }
} 
