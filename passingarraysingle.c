//C program to pass a 2D element of an array to function
#include <stdio.h>
void readarray(int age[][9],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&age[i][j]);
		}
	}
}
void displayarray(int age[][9],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\n");
		for(int j=0;j<n;j++){
			printf("%d\t",age[i][j]);
		}
	}
}
int minimumarray(int age[][9],int n){
	int min=age[0][0];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			
		if(age[i][j]<min)
		{
			min=age[i][j];
		}
	}
	}
	return min;
}
int maximumarray(int age[][9],int n){
	int max=age[0][0];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			
		if(age[i][j]>max)
		{
			max=age[i][j];
		}
	}
	}
	return max;
}
int main()
{
	int n,min,max;
	printf("Enter the size of array \n");
	scanf("%d",&n);
	int ageArray[n][n];
	printf("Enter Array %d Elements\n",n);
    readarray(ageArray,n); //Passing array element ageArray[2] only.
    printf("Arrayelements are:\n");
    displayarray(ageArray,n);
    printf("\n");
    min=minimumarray(ageArray,n);
    printf("Minimum value in the array:%d\n",min);
    max=maximumarray(ageArray,n);
    printf("Maximum value in the array:%d",max);
    return 0;
}
