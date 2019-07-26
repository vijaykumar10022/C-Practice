/**
 * C program to find maximum and minimum element in array
 */

#include <stdio.h>
#define MAX_SIZE 100   // Maximum array size
void readarray(int arr[],int n){
	printf("Enter elements in the array: ");
	for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void readarray(int arr[],int n){
	printf("Enter elements in the array: ");
	for(int i=0; i<n; i++)
    {
        printf("%d", arr[i]);
    }
}
int minimumarray(int arr[],int n)
{
	int min = arr[0];
	for(i=1; i<size; i++)
    {
        /* If current element is greater than max */
        if(arr[i] > min)
        {
            min = arr[i];
        }
	}
	printf("Minimum element = %d\n", min);
}
int maximumarray(int arr[],int n)
{
	int max= arr[0];
	for(i=1; i<size; i++)
    {
        /* If current element is greater than max */
        if(arr[i] < max)
        {
            max = arr[i];
        }
	}
	printf("Maximum element = %d\n", max);
}
	

int main()
{
    int arr[MAX_SIZE];
    int i, max, min, size;
   

    /* Input size of the array */
    printf("Enter size of the array: ");
    scanf("%d", &size);
     readarray(arr,size);
     dispalyarray(arr,size);
     min=minimumarray(arr,size);
     max=maximumarray(arr,size);
    return 0;
}
