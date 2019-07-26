//C Program to store values entered by the user in a three-dimensional array and display it.

#include <stdio.h>
int main()
{
    // this array can store 12 elements

    int i, j, k, test[2][3][2];

    printf("Enter 12 values: \n");

    for(i = 0; i < 2; ++i) {
        for (j = 0; j < 3; ++j) {
            for(k = 0; k < 2; ++k ) {
                scanf("%d", &test[i][j][k]);
            }
        }
    }

    // Displaying values with proper index.

    printf("\nDisplaying values:\n");

    for(i = 0; i < 2; ++i) {
        for (j = 0; j < 3; ++j) {
            for(k = 0; k < 2; ++k ) {
                printf("test[%d][%d][%d] = %d\n", i, j, k, test[i][j][k]);
            }
        }
    }

    return 0;
}
