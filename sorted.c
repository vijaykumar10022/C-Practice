#include <stdio.h>
int main()
{
    int i, j, a, n;
	scanf("%d",&n);
	int number[n];
    printf("Enter the numbers \n");
    for (i = 0; i < n; ++i)
        scanf("%d", &number[i]);
    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (number[i] > number[j])
            {
                a =  number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
    printf("The numbers arranged in ascending order are given below \n");
    for (i = 0; i < n; ++i)
        printf("%d\n", number[i]);
    for(i=0;i<n/2;i++){
		printf("%d ",number[i]);
	}
	
	
	
	for(i=n-1;i>=(n/2);i--){
		printf("%d ",number[i]);
	}
	return 0;
}


