#include <stdio.h> 
int main()
{
    int s1,s2;
    int i,j,temp;
    printf("Enter size of array 1 and 2: ");
    scanf("%d %d",&s1,&s2);
    int arr[s1+s2];
    printf("Enter elements in array: ");
    for(i=0; i<s1;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter elements in array: ");
    for(i=s1; i<s1+s2;i++)
    {
        scanf("%d",&arr[i]);
    }
      for(i=0;i<s1+s2;i++)
    {
        for(j=i+1;j<s1+s2; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
      }
		printf("\nElements of array in ascending order: ");
    for(i=0;i<s1+s2;i++)
    {
        printf(" %d ", arr[i]);
    }
    return 0;
}
