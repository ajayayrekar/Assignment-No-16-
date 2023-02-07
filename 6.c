//6. Write a program in C to find the sum of rows and columns of a Matrix.#include <stdio.h>

#define ROW 3
#define COL 3

int main()
{
    int mat[ROW][COL], row_sum[ROW], col_sum[COL];
    int i, j;

    // Inputting the matrix elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < ROW; i++)
        for (j = 0; j < COL; j++)
            scanf("%d", &mat[i][j]);

    // Calculating the sum of rows
    for (i = 0; i < ROW; i++)
    {
        row_sum[i] = 0;
        for (j = 0; j < COL; j++)
            row_sum[i] += mat[i][j];
    }

    // Calculating the sum of columns
    for (j = 0; j < COL; j++)
    {
        col_sum[j] = 0;
        for (i = 0; i < ROW; i++)
            col_sum[j] += mat[i][j];
    }

    // Printing the sum of rows and columns
    printf("The sum of rows and columns are:\n");
    printf("Rows:\t");
    for (i = 0; i < ROW; i++)
        printf("%d\t", row_sum[i]);
    printf("\nColumns:\t");
    for (j = 0; j < COL; j++)
        printf("%d\t", col_sum[j]);
    printf("\n");

    return 0;
}
