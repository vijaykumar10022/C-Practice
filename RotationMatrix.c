#include<stdio.h>
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int rows,cols,rot;
    printf("Enter rows,col,ratate:\n");
    scanf("%d %d %d",&rows,&cols,&rot);
    
    int arr[rows][cols];
    
    int result[rows][cols];
    printf("Enter a Elements");
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            scanf("%d", &arr[r][c]);
        }
    }

    rows--;
    cols--;
    for (int r = 0; r <= rows; r++) {
        for (int c = 0; c <= cols; c++) {
            int x = r < rows - r ? r : rows - r;
            int y = c < cols - c ? c : cols - c;
            int min = x < y ? x : y;
            int maxRow = rows - min;
            int maxCol = cols - min;
            int parameter = (maxRow + maxCol) * 2 - min * 4;

            int row = r;
            int col = c;
            for (int a = 0; a < rot%parameter; a++) {
                if (col == min && row < maxRow) {
                    row++;
                }
                else if (row == maxRow && col < maxCol) {
                    col++;
                }
                else if (row > min && col == maxCol) {
                    row--;
                }
                else if (row == min && col > min) {
                    col--;
                }
            }
            result[row][col] = arr[r][c];
        }
    }


    for (int r = 0; r <= rows; r++) {
        for (int c = 0; c <= cols; c++) {
            printf("%d ", result[r][c]);
        }
        printf("\n");
    }


    return 0;
}
