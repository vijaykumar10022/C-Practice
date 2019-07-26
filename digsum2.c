#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int diagonalDifference(int a_size_rows, int a_size_cols, int** a) {
    // Complete this function
    int suma=0,sumb=0,n=a_size_rows;
    for(int i=0;i<a_size_rows;i++){
        for (int j=0;j<a_size_cols;j++){
            if(i==j)
                suma=suma+a[i][j];
            if(j==(n-i-1))
                sumb=sumb+a[i][j];
        }
    }
    return suma-sumb;
}

int main() {
    int n; 
    scanf("%i", &n);
    int a[n][n];
    for (int a_i = 0; a_i < n; a_i++) {
       for (int a_j = 0; a_j < n; a_j++) {
      
          scanf("%i",&a[a_i][a_j]);
       }
    }
    int result = diagonalDifference(n, n, a);
    printf("%d\n", result);
    return 0;
}
