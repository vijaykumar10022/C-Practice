#include <stdio.h>
int main()
{
    int N, i;
    printf("Enter size of array: ");
    scanf("%d", &N);
	int arr[N];
	int * ptr = arr;    // Pointer to arr[0] 
    printf("Enter elements in array:\n");
    for (i = 0; i < N; i++)
    {
        scanf("%d", ptr);
        // Move pointer to next array element
        ptr++;   
    }
    // Make sure that pointer again points back to first array element
    ptr = arr;
    printf("Array elements: ");
    for (i = 0; i < N; i++)
    {
        // Print value pointed by the pointer
        printf("%d, ", *ptr);
        // Move pointer to next array element
        ptr++;
    }
    return 0;
}
