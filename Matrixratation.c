#include<stdio.h>
#include<stdlib.h>

void rotateMatrix(int a[4][4]) {
	unsigned (*n)[4] = malloc(sizeof(unsigned[4][4]));
    //int n = a.length;
    free(n);
    if (n <= 1) {
        return; // nothing to do
    }

    /* layers */
    for (int i = 0; i < n / 2; i++) {
        /* elements */
        for (int j = i; j < n - i - 1; j++) {
            int saved = a[i][j];
            a[i][j] = a[n - j - 1][i];
            a[n - j - 1][i] = a[n - 1 - i][n - 1 - j];
            a[n - 1 - i][n - 1 - j] = a[j][n - 1 - i];
            a[j][n - 1 - i] = saved;
        }
    }
    
}
int main()
{

	 int a[4][4] = { {1,  2,  3,  4},{5,  6,  7,  8},{9,  10, 11, 12},
        {13, 14, 15, 16}  };
 
	rotateMatrix(a);
	return 0;
}
