//7. Write a program in C to print or display the lower triangular of a given matrix.
#include <stdio.h>

#define ROW 3
#define COL 3

int main()
{
    int mat[ROW][COL];
    int i, j;

    // Inputting the matrix elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < ROW; i++)
        for (j = 0; j < COL; j++)
            scanf("%d", &mat[i][j]);

    // Printing the lower triangular of the matrix
    printf("The lower triangular of the matrix is:\n");
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            if (i >= j)
                printf("%d\t", mat[i][j]);
            else
                printf("0\t");
        }
        printf("\n");
    }

    return 0;
}
