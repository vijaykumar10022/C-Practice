#include <stdio.h>

#define MINE '*'

#define MATRIX_OFFSET 1

int main (int argc, const char * argv[])
 {
long m,n,i, j, fieldNumber = 0;

    while(scanf("%ld %ld", &n, &m) != EOF) {
        if (!n && !m)
                          {
            return 0;
                       } 
                else {
            if (fieldNumber > 0) {
                printf("\n");
            }
    }
        fieldNumber++;
        char inputField[n + MATRIX_OFFSET + 1][m + MATRIX_OFFSET + 1];
        int outputField[n + MATRIX_OFFSET + 1][m + MATRIX_OFFSET + 1];
        char line[m];
        for (i = 0; i < n + MATRIX_OFFSET + 1; i++) {
            for (j = 0; j < m + MATRIX_OFFSET + 1; j++) {
                outputField[i][j] = 0;
            }
        }
        for (i = 0; i < n; i++) {
            scanf("%s\n",line);
            for (j = MATRIX_OFFSET; j < m + MATRIX_OFFSET; j++) {
                inputField[i + MATRIX_OFFSET][j] = line[j - MATRIX_OFFSET];

            }

        }

        for (i = MATRIX_OFFSET; i < n + MATRIX_OFFSET; i++) {

            for (j = MATRIX_OFFSET; j < m + MATRIX_OFFSET; j++) {

                if (inputField[i][j] == MINE) {


                    outputField[i-1][j-1]++;

                    outputField[i-1][j]++;

                    outputField[i-1][j+1]++;

                    

                    /* same level neighbours */

                    outputField[i][j-1]++;

                    outputField[i][j+1]++;

                    outputField[i+1][j-1]++;

                    outputField[i+1][j]++;

                    outputField[i+1][j+1]++;

                }

            }

        }


        printf("Field #%ld:\n",fieldNumber);

        for (i = MATRIX_OFFSET; i < n + MATRIX_OFFSET; i++) {

            for (j = MATRIX_OFFSET; j < m + MATRIX_OFFSET; j++) {

                if (inputField[i][j] == MINE)

                    printf("%c", MINE);

                else    

                    printf("%d",outputField[i][j])
;

            }

            printf("\n");

        }

    }

    return 0;
}
